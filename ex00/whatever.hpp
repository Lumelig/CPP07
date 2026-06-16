/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 14:35:10 by Jpflegha          #+#    #+#             */
/*   Updated: 2026/06/16 15:00:31 by Jpflegha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <utility>

// std::move avoids unnecessary copies for heavy types.
template <typename T>
void swap(T &a, T &b)
{
    T temp = std::move(a);
    a = std::move(b);
    b = std::move(temp);
}

template <typename T>
T min(T const &a, T const &b)
{
    return(a < b) ? a : b;
}

template <typename T>
T max(T const &a, T const &b)
{
    return(a > b) ? a : b;
}

#endif