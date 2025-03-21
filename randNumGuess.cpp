// Copyright (c) Year Tony G All rights reserved.
// Created By: Tony G
// Date: 2025-03-21
// Asks for user input and tells user if number is correct or not

#include <iostream>
#include <random>
int main() {
    int someRandomNumber;
    std::random_device rseed;
    std::mt19937 rgen(rseed());                        // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0,100]
    someRandomNumber = idist(rgen);
    std::cout << someRandomNumber << std::endl;
    std::cout << "Greetings! Please input a number" << std::endl;

    double number;
    std::cout << "Please enter a number: ";
    std::cin >> number;

    if (number == someRandomNumber) {
        std::cout << "Congratulations! Correct!" << std::endl;
    } else {
        std::cout << "Incorrect, try again :(" << std::endl;
    }
}
