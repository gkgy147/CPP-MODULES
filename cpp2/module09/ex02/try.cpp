#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <sstream>
#include <chrono>
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
    // Implement merge-sort for the given container
}

template <typename T>
T Pmerge::getArr(std::string av) {
    T tmp;
    std::stringstream ss(av);
    int n;
    while (ss >> n) {
        if (n < 0 || n > 2147483647) {
            throw std::invalid_argument("Invalid arguments");
        }
        tmp.push_back(n);
    }
    return tmp;
}

bool Pmerge::checkAv(std::string str) {
    for (char c : str) {
        if (!std::isdigit(c) && c != ' ' && c != '+' && c != '-') {
            return false;
        }
    }
    return true;
}

void Pmerge::sort(std::string av) {
    if (!checkAv(av)) {
        throw std::invalid_argument("Invalid arguments");
    }

    std::cout << std::fixed << std::setprecision(3);
    
    std::vector<int> v = getArr<std::vector<int>>(av);
    std::list<int> l = getArr<std::list<int>>(av);

    std::cout << "Before: ";
    for (int val : v) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    auto start_time = std::chrono::high_resolution_clock::now();
    mergeSort(v);
    auto end_time = std::chrono::high_resolution_clock::now();

    std::cout << "After: ";
    for (int val : v) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);

    std::cout << "Time to process a range of " << v.size()
        << " elements with std::vector: " << duration.count() << " us" << std::endl;

    std::cout << "Before: ";
    for (int val : l) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    start_time = std::chrono::high_resolution_clock::now();
    mergeSort(l);
    end_time = std::chrono::high_resolution_clock::now();

    std::cout << "After: ";
    for (int val : l) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);

    std::cout << "Time to process a range of " << l.size()
        << " elements with std::list: " << duration.count() << " us" << std::endl;
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