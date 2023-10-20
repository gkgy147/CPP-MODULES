#include <iostream>
#include <string>
#include <stack>
#include <sstream>

class RPN {
public:
    RPN(const std::string &av);
    int evaluate();
    bool hasError() const;
    std::string getErrorMessage() const;

private:
    std::string expression;
    int result;
    bool error;
    std::string errorMessage;

    bool isOperator(char c);
    void applyOperator(std::stack<int> &operands, char op);
};

RPN::RPN(const std::string &av) : expression(av), result(0), error(false) {
}

bool RPN::isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

void RPN::applyOperator(std::stack<int> &operands, char op) {
    if (operands.size() < 2) {
        error = true;
        errorMessage = "Error: Invalid operator";
        return;
    }

    int b = operands.top();
    operands.pop();
    int a = operands.top();
    operands.pop();

    if (op == '+') {
        operands.push(a + b);
    } else if (op == '-') {
        operands.push(a - b);
    } else if (op == '*') {
        operands.push(a * b);
    } else if (op == '/') {
        if (b == 0) {
            error = true;
            errorMessage = "Error: Division by zero";
            return;
        }
        operands.push(a / b);
    }
}

int RPN::evaluate() {
    std::stack<int> operands;
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token) {
        if (std::isdigit(token[0]) || (token[0] == '-' && token.size() > 1)) {
            int number;
            std::istringstream(token) >> number;
            operands.push(number);
        } else if (token.size() == 1 && isOperator(token[0])) {
            applyOperator(operands, token[0]);
            if (error) {
                return 0; // Return 0 for any error
            }
        } else {
            error = true;
            errorMessage = "Error: Invalid operator";
            return 0;
        }
    }

    if (operands.size() == 1) {
        result = operands.top();
    } else {
        error = true;
        errorMessage = "Error: Invalid expression";
    }

    return result;
}

bool RPN::hasError() const {
    return error;
}

std::string RPN::getErrorMessage() const {
    return errorMessage;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " \"RPN expression\"" << std::endl;
        return 1;
    }

    RPN rpn(argv[1]);
    int result = rpn.evaluate();

    if (rpn.hasError()) {
        std::cerr << rpn.getErrorMessage() << std::endl;
    } else {
        std::cout << result << std::endl;
    }

    return 0;
}

