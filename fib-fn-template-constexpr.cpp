#include <iostream>

template<unsigned N>
constexpr int fib() {
    return fib<N-1>() + fib<N-2>();
}

template<>
constexpr int fib<0>() {
  return 0;
}

template<>
constexpr int fib<1>() {
  return 1;
}

int main() {
  std::cout << "This is a coding playground. Feel free to play around. Eigen can be used here as in all other exercises." << std::endl;
  std::cout << fib<30>();
}
