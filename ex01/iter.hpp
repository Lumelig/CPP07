/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:33:45 by Jpflegha          #+#    #+#             */
/*   Updated: 2026/06/16 15:41:24 by Jpflegha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef> //std::size_t

template <typename T, typename F>
void iter(T *arry, std::size_t length, F f)
{
    for(std::size_t i = 0; i < length; i++)
    {
        f(arry[i]);
    }
}

#endif