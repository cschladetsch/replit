#include <iostream>
#include <list>
#include <map>

int main() {
  std::list<int> list {1,2,3,4};
  for (auto n : list) {
    std::cout << n << std::endl;
  }
  std::cout << "Hello World!\n";
}

