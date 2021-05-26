// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on May 24, 2021
// Converts temps in celsius to fahrenheit

#include <iostream>
#include <string>

void fahrenheit() {
    std::string user_input;
    int celsius_temp, f_temp;


    std::cout << "Enter your temperature in celsius (C°): ";
    std::cin >> user_input;
    try {
        celsius_temp = std::stoi(user_input);
        f_temp = (1.8) * celsius_temp + 32;
        std::cout << celsius_temp << "C° is ";
        std::cout << f_temp << "F°";
    } catch (std::invalid_argument) {
        std::cout << user_input << " is not a temperature";
    }
    std::cout << "\nDone.";
}
main() {
    fahrenheit();
}
