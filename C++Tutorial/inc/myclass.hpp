/* Pragma once makes sure the file is only included once.
 If not implemented with your compiler then use 

#ifndef EXAMPLE_H
#define EXAMPLE_H

// header contents

#endif

*/
#pragma once

#include <string>

class MyClass {
  int ID;
  std::string name;
public:
  MyClass(int id, std::string nm);
  int get_id(){return ID;}
  std::string get_name(){return name;}
  std::string change_name(std::string);
};
