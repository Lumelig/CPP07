/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 13:40:40 by Jpflegha          #+#    #+#             */
/*   Updated: 2026/06/30 13:40:50 by Jpflegha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main() {
    Array<int> a(5);                       // sized ctor: 5 elements, all default-init (0)
    std::cout << "size: " << a.size() << std::endl;

    for (unsigned int i = 0; i < a.size(); ++i)
        a[i] = i * 10;                     // write via operator[]

    for (unsigned int i = 0; i < a.size(); ++i)
        std::cout << a[i] << " ";          // read via operator[]
    std::cout << std::endl;

    Array<int> b(a);                       // deep copy
    b[0] = 999;                            // change the copy...
    std::cout << "a[0] = " << a[0] << ", b[0] = " << b[0] << std::endl; // ...original untouched

    try {
        a[42] = 1;                         // out of bounds -> throws
    } catch (std::exception &e) {
        std::cout << "caught: " << e.what() << std::endl;
    }

    Array<int> empty;                      // default ctor
    std::cout << "empty size: " << empty.size() << std::endl;

    return 0;
}