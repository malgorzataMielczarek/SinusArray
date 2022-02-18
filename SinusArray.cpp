// SinusArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include "SinMath.h"

constexpr sinmath::degrees anglesInDeg[] = { 0, 30, 45, 60, 90, 120, 135, 150, 180, 210, 225, 240, 270, 300, 315, 330, 360};
constexpr sinmath::radians anglesInRad[] = { sinmath::deg2rad(anglesInDeg[0]), sinmath::deg2rad(anglesInDeg[1]),
    sinmath::deg2rad(anglesInDeg[2]), sinmath::deg2rad(anglesInDeg[3]), sinmath::deg2rad(anglesInDeg[4]), sinmath::deg2rad(anglesInDeg[5]),
    sinmath::deg2rad(anglesInDeg[6]), sinmath::deg2rad(anglesInDeg[7]), sinmath::deg2rad(anglesInDeg[8]), sinmath::deg2rad(anglesInDeg[9]),
    sinmath::deg2rad(anglesInDeg[10]), sinmath::deg2rad(anglesInDeg[11]), sinmath::deg2rad(anglesInDeg[12]), sinmath::deg2rad(anglesInDeg[13]),
    sinmath::deg2rad(anglesInDeg[14]), sinmath::deg2rad(anglesInDeg[15]), sinmath::deg2rad(anglesInDeg[16])};
constexpr unsigned int precision = 10;
constexpr double sinuses[] = { sinmath::sin(anglesInRad[0], precision), sinmath::sin(anglesInRad[1], precision),
    sinmath::sin(anglesInRad[2], precision), sinmath::sin(anglesInRad[3], precision), sinmath::sin(anglesInRad[4], precision),
    sinmath::sin(anglesInRad[5], precision), sinmath::sin(anglesInRad[6], precision), sinmath::sin(anglesInRad[7], precision),
    sinmath::sin(anglesInRad[8], precision), sinmath::sin(anglesInRad[9], precision), sinmath::sin(anglesInRad[10], precision),
    sinmath::sin(anglesInRad[11], precision), sinmath::sin(anglesInRad[12], precision), sinmath::sin(anglesInRad[13], precision),
    sinmath::sin(anglesInRad[14], precision), sinmath::sin(anglesInRad[15], precision), sinmath::sin(anglesInRad[16], precision) };
int main()
{
    std::cout << "|"
        << "\t\tdeg\t\t|"
        << "\t\trad\t\t|"
        << "\t\tsin const\t\t|"
        << "\t\tsin std\t\t|"
        << std::endl;
    for (int i = 0; i < std::size(anglesInDeg); i++)
    {
        std::cout << "|"
            << "\t\t" << anglesInDeg[i] << "\t\t|"
            << "\t\t" << anglesInRad[i] << "\t\t|"
            << "\t\t" << sinuses[i] << "\t\t|"
            << "\t\t" << std::sin(anglesInRad[i]) << "\t\t|"
            << std::endl;
    }
}
