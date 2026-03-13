#include "../include/resistor.h"
#include <iostream>
#include <fstream>


void inputResistors(const std::vector<std::string>& values){
    std::ofstream resistorFile("resistor.txt");
    if(!resistorFile.is_open()){
        std::cout << "Failed to open file" << '\n';
        return;
    }

    for(const auto& v: values){
        resistorFile << v << '\n';
    }

    resistorFile.close();
}

std::vector<std::string> showResistors(){
    std::string line;
    std::vector<std::string> resistors;
    std::ifstream resistorFile("resistor.txt");

    while(getline(resistorFile,line)){
        resistors.push_back(line);
    }
    resistorFile.close();
    return resistors;
}

double showResult(bool isSeries){
    std::string line;
    std::vector<double> resistors;
    std::ifstream resistorFile("resistor.txt");

    while(std::getline(resistorFile,line)){
        double value = std::stoi(line);
        resistors.push_back(value);
    }
    resistorFile.close();
    if(isSeries){
        double sum = 0.0;
        for(const auto& r: resistors){
            sum += r;
        }
        return sum;
    }
    double sum = 0.0;
    for(const auto& r: resistors){
        sum += 1.0/r;
    }

    return 1.0/sum;
}
