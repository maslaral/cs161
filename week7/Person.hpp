/***********************************************
** Author: Alex Maslar
** Date: February 20, 2019
** Description: This implements the person class
   that represents the person's name and their
   age. 
***********************************************/

#ifndef PERSON_HPP
#define PERSON_HPP
#include<string>

class Person
{
  private:
    std::string name;
    int age;

  public:
    Person();
    Person(std::string n, int a);
    // getters
    std::string getName();
    int getAge();
};

#endif
