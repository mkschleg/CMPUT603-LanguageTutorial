
#include <iostream>
#include "myclass.hpp"

// main function is the entry point of every program written in c++
int main(){

  MyClass mc = MyClass(10, "Defulat Name");
  std::cout << "Name: " << mc.get_name() << ","
            << " ID: "
            << mc.get_id() << std::endl;

  std::string new_name;
  std::cout << "Input new name and than return" << std::endl;
  std::cin >> new_name;
  
  
  std::cout << "Name Change: " << mc.change_name(new_name) << std::endl;

  return 0;
}

