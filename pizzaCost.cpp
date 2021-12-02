// Copyright (c) 2021 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Dec. 1, 2021
// This program calculates the cost of a pizza based on a diameter that is
// is provided by user input.
#include <iostream>
#include <iomanip>


// declare constants
float HST = 0.13;

// declare variables
float diameter, tax, total, finalCost;


int main() {
  // get input from user
  std::string userAnswer;
  std::cout << "Time to calculate the cost of your pizza! \n";
  std::cout << "Enter the diameter in cm: ";
  std::cin >> diameter;

  // calculate the cost
  total = 2 + 2.25 + (1.5 * diameter);
  tax = HST * total;
  finalCost = tax + total;

  // display the results to the user
  std::cout << std::endl;
  std::cout << "The final cost of your pizza is $" << std::fixed <<
  std::setprecision(2) << std::setfill('0') << finalCost << "\n";



  // Ask if user would like to calculate again
  std::cout << "Would you like to calculate again? Y or N\n";
  std::cin >> userAnswer;

  if (userAnswer == "Y" || "y") {
      main();
  } else { }
}
