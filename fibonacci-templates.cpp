#include <iostream>

template<unsigned N>
struct Fib {
  static constexpr unsigned value = Fib<N-1>().value + Fib<N-2>().value;
};

template<>
struct Fib<1> {
  static constexpr unsigned value = 1;
};

template<>
struct Fib<0> {
  static constexpr unsigned value = 0;
};

int main() {
  std::cout << "This is a coding playground. Feel free to play around. Eigen can be used here as in all other exercises." << std::endl;
  std::cout << Fib<800>().value;
}
