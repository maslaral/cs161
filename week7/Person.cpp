/*********************************************************
**Author: Alex Maslar
** Date: February 20, 2019
** Description: This defines the member functions used to
   construct the person objects and includes getter
   functions used to retrieve the name and age of
   of each Person object.
*********************************************************/

#include "Person.hpp"
#include<string>

using std::string;

Person::Person(string n, int a)
{
  name = n;
  age = a;
}

string Person::getName()
{
  return name;
}

int Person::getAge()
{
  return age;
}

