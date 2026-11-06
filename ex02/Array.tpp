/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 20:43:37 by kkido             #+#    #+#             */
/*   Updated: 2026/11/06 20:48:41 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array() {
}

template <typename T>
Array<T>::Array(const Array& src) {
  (void)src;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& src) {
  (void)src;
  return *this;
}

template <typename T>
Array<T>::~Array() {
}