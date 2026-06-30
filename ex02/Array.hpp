/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 14:20:34 by Jpflegha          #+#    #+#             */
/*   Updated: 2026/06/30 13:43:06 by Jpflegha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array 
{
    public:
        Array() : data_(nullptr), size_(0) {}
        Array(unsigned int n) : data_(new T[n]()), size_(n) {}
        Array(const Array &other) : data_(new T[other.size_]()), size_(other.size_)
        {
            for(unsigned int i = 0; i < size_; i++)
            {
                data_[i] = other.data_[i];
            }
        }
        Array &operator=(const Array &other)
        {
            if(this != &other)
            {
                delete[] data_;
                size_ = other.size_;
                data_ = new T[size_]();
                for(unsigned int i = 0; i < size_; i++)
                {
                    data_[i] = other.data_[i];
                }
            }
            return(*this);
        }

        ~Array()
        {
            delete [] data_ ;
        }

        T &operator[](unsigned int index) const
        {
            if(index >= size_)
                throw std::out_of_range("Array index out of range");
            return(data_[index]);
        }
        
        unsigned int size() const 
        {
            return size_;
        }
        
        

    private:
        T*              data_;
        unsigned int    size_;
};

#endif