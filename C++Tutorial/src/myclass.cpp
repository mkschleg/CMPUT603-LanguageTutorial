#include "myclass.hpp"


MyClass::MyClass(int id, std::string nm){
  ID = id;
  name = nm;
}

std::string MyClass::change_name(std::string new_name){

  std::string old_name = name;
  name = new_name;

  return old_name + "->" + new_name;
}

