/** 
  In this exercise, I want you to use references in order get the program to work
  
          **Don't forget to be const correct**
  
  For references and const, I suggest looking at the materials I sent out after the first session
  
  Task 1:
  Write the program so that it switches the names between the first four people in both lists
  
  Task 2:
  Convert the program so that it can deal with lists where one list has more people than the other
  
  Task 3:
  Convert the program so that no function need a global variable to determine the size of any list
  All functions should be able to work with arbitrary list sizes without risking out of bounds access
**/

#include <iostream>
#include <memory>
#include <string>

// We use this global variable to make sure we do not access outside bounds of our arrays
// constexpr is like const - it means this value cannot change once set
// the difference between const and constexpr is that const is set during runtime ( when you start the application)
// constexpr is set during compile time - the compiler will insert the value during compilation.
constexpr uint8_t list_size = 4;

struct Person
{
  std::string   name_;
  int           age_;
  float         height_;
};

/**
  This function should take two "person" and swap their names
  You are not allowed to use a return value
  **/

void swap_names(/* Arguments here*/)
{

}

/**
  This function should take two vectors
  person 1 from list_one should switch name with person 1 in list_two
  for every switch there should be a printout of which each person danced with.
**/
void dance(/* Arguments here*/)
{

}

/**
  This functions should take a person as an argument
  it should then use std::cout to print members of the struct

  The output on the right should be in the format of:
  "Person: [name]"
  "  is [age] years old"
  "  is [height] meters tall"
  ""
  **/

void print_person(/* Arguments here*/)
{

}

/**
  This function should take a list of person, and for each of them, print the person
  **/

void print_list(/* Arguments here*/)
{

}
  /** 
  You are not allowed to make changes to the main function in the first part
  **/

int main() 
{
  std::string names[8] {"Anders","Balder","Cecilia","Doris","Andrea","Billy","Cecil","Daniel"};
  
  Person people_list_one[4] {{names[0],21,1.67},{names[1],30,1.76},{names[2],31,1.70},{names[3],76,1.52}};
  Person people_list_two[4] {{names[4],47,1.80},{names[5],15,1.68},{names[6],57,1.74},{names[7],62,1.81}};

  /**
    For the second part, you should not need to change anything below this line
  **/

  print_list(people_list_one);
  print_list(people_list_two);

  dance(people_list_one,people_list_two);

  print_list(people_list_one);
  print_list(people_list_two);

  return 0;
}
