// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This Program calculate factorial with while loops

#include <iostream>
#include <string>

int main() {
    // This Program calculate factorial with while loops
    int loopNumber = 0;
    int answerNumber = 1;

    std::string userString;
    int userNumber;

    // input
    std::cout << "Please enter an positive integer: ";
    std::cin >> userString;
    std::cout << "" << std::endl;

    // process
    try {
        userNumber = std::stoi(userString);
        if (userNumber < 0) {
            std::cout << "You did not enter a psoitive integer." << std::endl;
        } else {
            do {
                loopNumber = loopNumber + 1;
                answerNumber = answerNumber * loopNumber;
            } while (loopNumber < userNumber);
            // output
            std::cout << userNumber << "! = " << answerNumber << std::endl;
        }
    } catch (std::invalid_argument) {
        // output
        std::cout << userString << " is not a valid input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
