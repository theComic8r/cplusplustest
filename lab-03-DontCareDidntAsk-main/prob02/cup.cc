// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>
//
// Lab 6-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "cup.h"

#include <iostream>

void Cup::Drink(double x) {
  if ((fluid_oz_ - x) <= 0) {
    fluid_oz_ = 0;
  }
  fluid_oz_ = fluid_oz_ - x;
}

void Cup::Refill(double x) { 
  if ((fluid_oz_ + x) <= 0) {
    fluid_oz_ = 0;
  }
  fluid_oz_ = fluid_oz_ + x;
}

void Cup::NewDrink(std::string x, double y) {
  drink_type_ = x;
  if (y < 0) {
    fluid_oz_ = 0;
  }
  fluid_oz_ = y;
}

void Cup::Empty() {
  drink_type_ = "nothing";
  fluid_oz_ = 0;
}

std::string Cup::GetDrinkType() const { return drink_type_; }

int Cup::GetFluidOz() const { return fluid_oz_; }

//========================== YOUR CODE HERE ==========================
// Implement the member functions for the Cup class in this
// file.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Cup class.
//====================================================================
