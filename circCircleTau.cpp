// Copyright (c) 2025 Amara Tie All rights reserved.

//

// Created by: Amara Tie

// Date: Febuaray 28, 2025

// Calculating the circumferance 
#include <iostream>

int main() {
    // declare constants
    const float TAU = 6.28;

    // declare variables
    float radius, circumference;

    // get the radius from the user
    std::cout << "Enter the radius (mm): ";
    std::cin >> radius;

    // calculate the circumference using tau
    circumference = TAU * radius;

    //display the circumferance to the user
    std::cout << "\n";
    std::cout << "Circumference = " << circumference << " mm" << std::endl;
}