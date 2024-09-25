// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>
//
// Lab 6-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>
//====================== YOUR CODE HERE ======================
// Declare the Cup class in this file, with the member
// variables and member functions as described in the README.
//============================================================
class Cup {
 public:
  Cup(const std::string& drink_type_, const double& fluid_oz_);
  void Drink(double x);
  void Refill(double x);
  void NewDrink(std::string x, double y);
  std::string GetDrinkType() const;
  int GetFluidOz() const;
  void Empty();

  //================== YOUR CODE HERE ==================
  // Add the member function declarations here.
  //====================================================

 private:
  std::string drink_type_ = "Water";
  double fluid_oz_ = 16.00;
  //================== YOUR CODE HERE ==================
  // Add the member variable declarations here.
  //====================================================
};
