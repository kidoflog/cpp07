/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 20:14:26 by kkido             #+#    #+#             */
/*   Updated: 2026/11/06 20:47:07 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array {
 public:
  Array();
  Array(const Array& src);
  Array& operator=(const Array& src);
  ~Array();

 private:
};

#include "Array.tpp"
#endif