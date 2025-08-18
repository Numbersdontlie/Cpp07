/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 18:57:56 by luifer            #+#    #+#             */
/*   Updated: 2025/08/18 16:49:41 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

//default constructor
template <typename T>
Array<T>::Array() : ptr(NULL), n(0) {}

//constructor with params
template <typename T>
Array<T>::Array(unsigned int n) : ptr(new T[n]()), n(n) {}

// copy operator
template <typename T>
Array<T>::Array(const Array<T> &other) : ptr(NULL), n(other.n) {
    if (this->n > 0) {
        this->ptr = new T[this->n];
        for (unsigned int i = 0; i < this->n; ++i) {
            this->ptr[i] = other.ptr[i];
        }
    }
}

//copy assign operator
template <typename T>
Array<T> &Array<T>::operator=(const Array &other){
    if (this != &other) {
        delete[] this->ptr; // free existing memory
        this->n = other.n;
        this->ptr = new T[this->n];
        for (unsigned int i = 0; i < this->n; ++i) {
            this->ptr[i] = other.ptr[i];
        }
    }
    return *this;
}

// destructor
template <typename T>
Array<T>::~Array() {
    delete[] this->ptr;
}

// getSize function
template <typename T>
unsigned int Array<T>::size() const {
    return this->n;
}

// operator []
template <typename T>
T &Array<T>::operator[](unsigned int idx) {
    if(ptr == NULL || idx >= this->n)
        throw OutLimits();
    return this->ptr[idx];
}

#endif
