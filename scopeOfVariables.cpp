// Copyright (c) 2025 Jayden Smith All rights reserved.
// Created by: Jayden Smith
// Date: March 6, 2025
// This module shows how local and global variables work.

#include <iostream>

// global variable
int variableX = 15;

void localVariable() {
    // this shows what happens with local variables
    int variableX = 42;
    int variableY = 80;
    int variableZ;

    variableX = variableX + 1;
    variableZ = variableX + variableY;

    std::cout << "Local variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}

void globalVariable() {
    // this shows what happens with global variables
    int variableY = 80;
    int variableZ;

    variableX = variableX + 21;
    variableZ = variableX + variableY;

    std::cout << "Local variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}

int main() {
    // this function calls local and global
    localVariable();
    globalVariable();

    std::cout << "\nDone. " << std::endl;
}
