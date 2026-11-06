/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 16:23:01 by kkido             #+#    #+#             */
/*   Updated: 2026/11/06 18:38:09 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <iostream>
#include <string>

#include "iter.hpp"

void is_even_num(int& value) {
  if (value % 2 == 0) {
    std::cout << value << "is even number." << std::endl;
  } else {
    std::cout << value << "is not even number." << std::endl;
  }
}

void is_even_num_const(const int& value) {
  if (value % 2 == 0) {
    std::cout << value << "is even number." << std::endl;
  } else {
    std::cout << value << "is not even number." << std::endl;
  }
}

int main(void) {
  int values[] = {1, 2, 3, 4, 5};
  const int fixed[] = {1, 2, 3, 4, 5};
  int len = 4;
  std::cout << "---------- int value and int func test ----------" << std::endl;
  ::iter(&values[0], len, &is_even_num);
  std::cout << "---------- int value and const int func test ----------"
            << std::endl;
  ::iter(&values[0], len, &is_even_num_const);
  // std::cout << "---------- const int value and int func test ----------"
  //           << std::endl;
  // ::iter(&fixed[1], 5, &is_even_num);
  std::cout << "---------- const int value and const int func test ----------"
            << std::endl;
  ::iter(&fixed[0], len, &is_even_num_const);

  std::cout << "---------- invalid input test ----------" << std::endl;
  ::iter(&values[1], -1, &is_even_num);
  int* ptr = NULL;
  ::iter(ptr, len, &is_even_num);
  void (*empty_func)(int&) = NULL;
  ::iter(&values[1], len, empty_func);
}