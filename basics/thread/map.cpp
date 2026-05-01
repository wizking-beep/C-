#include <iostream>
#include <thread>
#include <map>
#include <string>
#include <chrono>
using namespace std::chrono_literals;

void refreshData(std::map<std::string,double> ratingMap) {

    while(true) {
        for(auto &data:ratingMap) {
        if(data.second < 90) {
            data.second++;
        }
        std::cout << data.first << " : " << data.second << '\n';
    };

        std::this_thread::sleep_for(2000ms);

    }
}

int main() {

    std::map<std::string,double> ratingMap{
        {"John Juma",98.9},
        {"Jacob Red",78.8},
        {"James Rango",67.9},
        {"Reece Dark",70.3},
        {"Danny Savage",80.2},
    };

    std::thread process(refreshData,ratingMap);
    system("pause>nul");
}