/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 16:25:49 by kkido             #+#    #+#             */
/*   Updated: 2026/11/01 17:18:14 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T& value1, T& value2) {
  T tmp = value1;
  value1 = value2;
  value2 = tmp;
}

template <typename T>
const T& min(const T& value1, const T& value2) {
  if (value1 >= value2) {
    return value2;
  }
  return value1;
}

template <typename T>
const T& max(const T& value1, const T& value2) {
  if (value1 <= value2) {
    return value2;
  }
  return value1;
}
#endif
