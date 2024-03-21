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
    //SimpleSerial *ser3 = new SimpleSerial("COM3");
    //SimpleSerial* ser4 = new SimpleSerial("COM4");
    SimpleSerial* ser5 = new SimpleSerial("COM5");
    //std::cout << "LSSN: " << ser3->getSerNo() << "\n";
    //std::cout << "LSVA1: " << std::setprecision(15) << ser3->getValue() << "\n";
    for (int i = 0; i < 10000000; i++) {
        //std::cout << i << "  " << "SN: " << ser3->getSerNo() << "  VA: " << std::setprecision(8) << ser3->readValuefromScale() << "mm" << "\n";
        //std::cout << i << "  " << "SN: " << ser4->getSerNo() << "  VA: " << std::setprecision(8) << ser4->readValuefromScale() << "mm" << "\n";
        std::cout << i << "  " << "SN: " << ser5->getSerNo() << "  VA: " << std::setprecision(8) << ser5->readValuefromScale() << "mm" << "\n";
    }
    //std::cout << "LSVA3: " << std::setprecision(15) << ser3->getValue() << "\n";
}