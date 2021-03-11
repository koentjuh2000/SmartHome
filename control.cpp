//
// Created by Koen on 8-3-2021.
//
#include <cstdlib>
#include "control.h"
#include "relay.h"
#include <iostream>

control::control() {

}

int control::getCommand() {
    relay lights;
    while (true) {
        std::cout << "*******************************\n";
        std::cout << " 1 - Relay on\n";
        std::cout << " 2 - Relay off\n";
        std::cout << " 3 - Exit Program.\n";
        std::cout << " Enter your choice and press return: ";

        std::cin >> command;

        switch (command) {
            case 1:
                lights.On();
                break;
            case 2:
                lights.Off();
                break;
            case 3:
                lights.Clean();
                exit(3);

            default:
                std::cout << "Not a Valid Choice. \n";
                std::cout << "Choose again.\n";
                std::cin >> command;
                break;
        }

    }

}


