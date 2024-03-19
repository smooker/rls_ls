// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SimpleSerial.h"

#include <stdlib.h>
#include <limits>
#include <iomanip>
#include <format>
#include <string>
#include <string_view>

int main()
{
    SimpleSerial *ser3 = new SimpleSerial("COM5");
    //std::cout << "LSSN: " << ser3->getSerNo() << "\n";
    //std::cout << "LSVA1: " << std::setprecision(15) << ser3->getValue() << "\n";
    std::cout << "LSVA: " << std::setprecision(8) << ser3->readValuefromScale() << "\n";
    //std::cout << "LSVA3: " << std::setprecision(15) << ser3->getValue() << "\n";
}