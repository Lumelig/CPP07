/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:41:39 by Jpflegha          #+#    #+#             */
/*   Updated: 2026/06/16 15:47:17 by Jpflegha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T>
void printElem(T const &x) {   // read-only
    std::cout << x << std::endl;
}

template <typename T>
void addOne(T &x) {            // modifies in place
    x += 1;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    std::size_t n = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "--- print all numbers from the arry ---:" << std::endl;
    iter(numbers, n, printElem<int>);   // print each
    iter(numbers, n, addOne<int>);      // add one to each
    std::cout << "--- added one to each number ---" << std::endl;
    iter(numbers, n, printElem<int>);   // print again — values changed
    std::string words[] = {"hello", "world"};
    std::cout << "--- print all chars from the arry ---" << std::endl;
    iter(words, 2, printElem<std::string>);
    return 0;
}