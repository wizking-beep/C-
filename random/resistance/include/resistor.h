#ifndef RESISTOR_H
#define RESISTOR_H
#include <iostream>
#include <vector>
#include <string>

void inputResistors(const std::vector<std::string>& values);
std::vector<std::string> showResistors();
double showResult(bool isSeries);

#endif
