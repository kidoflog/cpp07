/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 17:15:21 by kkido             #+#    #+#             */
/*   Updated: 2026/11/06 18:30:10 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename A, typename B>
void iter(A* arr, const int len, void (*f)(B&)) {
  if (len <= 0 || !arr || !f) {
    return;
  }
  for (int i = 0; i < len; i++) {
    (*f)(arr[i]);
  }
  return;
}

#endif