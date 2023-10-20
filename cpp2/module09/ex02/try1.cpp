#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <sstream>
#include <ctime>
#include <stdexcept>
#include <iomanip>

class Pmerge {
public:
    static void sort(std::string av);

private:
    template <typename T>
    static T getArr(std::string av);

    template <typename T>
    static void mergeSort(T& container);

    static bool checkAv(std::string str);
};

template <typename T>
void Pmerge::mergeSort(T& container) {
    if (container.size() <= 1) {
        return;
    }

    T left;
    T right;

    typename T::iterator middle = container.begin();
    std::advance(middle, container.size() / 2);

    std::copy(container.begin(), middle, std::back_inserter(left));
    std::copy(middle, container.end(), std::back_inserter(right));

    mergeSort(left);
    mergeSort(right);

    container.clear();
    typename T::iterator left_it = left.begin();
    typename T::iterator right_it = right.begin();

    while (left_it != left.end() && right_it != right.end()) {
        if (*left_it < *right_it) {
            container.push_back(*left_it);
            ++left_it;
        } else {
            container.push_back(*right_it);
            ++right_it;
        }
    }

    // Add the remaining elements, if any
    while (left_it != left.end()) {
        container.push_back(*left_it);
        ++left_it;
    }

    while (right_it != right.end()) {
        container.push_back(*right_it);
        ++right_it;
    }
}

template <typename T>
T Pmerge::getArr(std::string av) {
    T tmp;
    std::istringstream ss(av);
    int n;
    while (ss >> n) {
        if (n < 0 || n > 2147483647) {
            throw std::runtime_error("Invalid arguments");
        }
        tmp.push_back(n);
    }
    return tmp;
}

bool Pmerge::checkAv(std::string str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (!isdigit(str[i]) && str[i] != ' ' && str[i] != '+' && str[i] != '-') {
            return false;
        }
    }
    return true;
}

void Pmerge::sort(std::string av) {
    if (!checkAv(av)) {
        throw std::runtime_error("Invalid arguments");
    }

    std::cout << std::fixed << std::setprecision(3);

    std::vector<int> v = getArr<std::vector<int> >(av);
    std::list<int> l = getArr<std::list<int> >(av);

    std::cout << "Before: ";
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    clock_t start_time = clock();
    mergeSort(v);
    clock_t end_time = clock();

    std::cout << "After: ";
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    double duration = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    std::cout << "Time to process a range of " << v.size()
              << " elements with std::vector: " << duration * 1000
              << " ms" << std::endl;

    std::cout << "Before: ";
    for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    start_time = clock();
    mergeSort(l);
    end_time = clock();

    std::cout << "After: ";
    for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    duration = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    std::cout << "Time to process a range of " << l.size()
              << " elements with std::list: " << duration * 1000
              << " ms" << std::endl;
}

int	main(int ac, char **av)
{
	std::string	avs = "";

	if (ac < 2)
	{
		std::cout << "Error\nType: Invalid arguments" << std::endl;
		return (1);
	}

	for (int i = 1; i < ac; i++)
		avs += std::string(av[i]) + " ";
	try
	{
		Pmerge::sort(avs);
	}
	catch(std::exception &e)
	{
		std::cout << "Error\nType: " << e.what() << std::endl;
		return (1);
	}
	return (0);
}
