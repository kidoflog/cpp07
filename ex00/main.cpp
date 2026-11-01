/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 16:23:01 by kkido             #+#    #+#             */
/*   Updated: 2026/11/01 17:26:38 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "whatever.hpp"

int main(void) {
  std::cout << "-----subject test-----" << std::endl;
  int a = 2;
  int b = 3;
  ::swap(a, b);
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
  std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
  std::string c = "chaine1";
  std::string d = "chaine2";
  ::swap(c, d);
  std::cout << "c = " << c << ", d = " << d << std::endl;
  std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
  std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
  std::cout << "\n-----other test-----" << std::endl;
  int i1 = 42;
  int i2 = 42;
  std::cout << "i1 = " << i1 << ", i2 = " << i2 << std::endl;
  std::cout << "min( i1, i2 ) = " << ::min(i1, i2) << std::endl;
  std::cout << "min( i1, i2 ) returned ";
  if (&(min(i1, i2)) == &i1) {
    std::cout << "i1" << std::endl;
  } else if (&(min(i1, i2)) == &i2) {
    std::cout << "i2" << std::endl;
  } else {
    std::cout << "unknown object" << std::endl;
  }
  std::cout << "max( i1, i2 ) = " << ::max(i1, i2) << std::endl;
  std::cout << "max( i1, i2 ) returned ";
  if (&(max(i1, i2)) == &i1) {
    std::cout << "i1" << std::endl;
  } else if (&(max(i1, i2)) == &i2) {
    std::cout << "i2" << std::endl;
  } else {
    std::cout << "unknown object" << std::endl;
  }
}
