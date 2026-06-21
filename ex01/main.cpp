/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:41:39 by Jpflegha          #+#    #+#             */
/*   Updated: 2026/06/20 14:04:15 by Jpflegha         ###   ########.fr       */
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

    iter(numbers, n, printElem<int>);   // print each
    iter(numbers, n, addOne<int>);      // add one to each
    iter(numbers, n, printElem<int>);   // print again — values changed

    std::string words[] = {"hello", "world"};
    iter(words, 2, printElem<std::string>);
    return 0;
}