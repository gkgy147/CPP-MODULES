/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 23:23:19 by grobert           #+#    #+#             */
/*   Updated: 2023/10/09 23:36:59 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
using std::cout;
using std::cerr;
using std::endl;

int main()
{
	Array<int>	a(3);
	Array<int>	b(3);

	for (int i = 0; i < a.size(); i += 1) {
		cout << "a[" << i << "] = " << a[i] << "\n";
	}
	cout << endl;
	for (int i = 0; i < b.size(); i += 1) {
		cout << "b[" << i << "] = " << b[i] << "\n";
	}
	a[0] = 1;
	a[1] = 1;
	a[2] = 1;
	cout << endl;
	cout << "AFTER FILLING A WITH 1's" << endl;
	for (int i = 0; i < a.size(); i += 1) {
		cout << "a[" << i << "] = " << a[i] << "\n";
	}
	cout << endl;
	for (int i = 0; i < b.size(); i += 1) {
		cout << "b[" << i << "] = " << b[i] << "\n";
	}
	b = a;

	cout << "AFTER B = A" << endl;
	for (int i = 0; i < a.size(); i += 1) {
		cout << "a[" << i << "] = " << a[i] << "\n";
	}
	cout << endl;
	for (int i = 0; i < b.size(); i += 1) {
		cout << "b[" << i << "] = " << b[i] << "\n";
	}


    // Empty Array
    Array<int> empty;

	// OUT OF BOUNDS EXCEPTION
    try {
        cout << a[a.size() + 1] << endl;
    }
    catch (std::exception& e) {
        cerr << e.what() << endl;
    }

	return 0;
}
