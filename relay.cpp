//
// Created by Koen on 8-3-2021.
//
#include <csignal>
#include "relay.h"
#include <iostream>
#include <string>
#include <wiringPi.h>
#include <chrono>
#include <thread>

using namespace std;
const int relay_In1 = 4; //897 15 16 234
const int relay_In2 = 3;
const int relay_In3 = 2;
const int relay_In4 = 16;
const int relay_In5 = 15;
const int relay_In6 = 7;
const int relay_In7 = 9;
const int relay_In8 = 8;


relay::relay() {
    wiringPiSetup();
    pinMode(relay_In1, OUTPUT);
    pinMode(relay_In2, OUTPUT);
    pinMode(relay_In3, OUTPUT);
    pinMode(relay_In4, OUTPUT);
    pinMode(relay_In5, OUTPUT);
    pinMode(relay_In6, OUTPUT);
    pinMode(relay_In7, OUTPUT);
    pinMode(relay_In8, OUTPUT);
}

void relay::On() {
    digitalWrite(relay_In1, LOW);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    digitalWrite(relay_In2, LOW);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    digitalWrite(relay_In3, LOW);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    digitalWrite(relay_In4, LOW);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    digitalWrite(relay_In5, LOW);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    digitalWrite(relay_In6, LOW);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    digitalWrite(relay_In7, LOW);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    digitalWrite(relay_In8, LOW);
}

void relay::Off() {
    digitalWrite(relay_In1, HIGH);
    digitalWrite(relay_In2, HIGH);
    digitalWrite(relay_In3, HIGH);
    digitalWrite(relay_In4, HIGH);
    digitalWrite(relay_In5, HIGH);
    digitalWrite(relay_In6, HIGH);
    digitalWrite(relay_In7, HIGH);
    digitalWrite(relay_In8, HIGH);

}

int relay::Clean() {
    digitalWrite(relay_In1, HIGH);
    digitalWrite(relay_In2, HIGH);
    digitalWrite(relay_In3, HIGH);
    digitalWrite(relay_In4, HIGH);
    digitalWrite(relay_In5, HIGH);
    digitalWrite(relay_In6, HIGH);
    digitalWrite(relay_In7, HIGH);
    digitalWrite(relay_In8, HIGH);
    return (0);
}