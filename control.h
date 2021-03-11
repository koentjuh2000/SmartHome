//
// Created by Koen on 8-3-2021.
//

#ifndef SMARTHOME_CONTROL_H
#define SMARTHOME_CONTROL_H


#include <string>

class control {
public:
    control();

    int command;
    bool lightsStatus = false;

    int getCommand();

};


#endif //SMARTHOME_CONTROL_H
