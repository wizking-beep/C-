#include "./include/resistor.h"
#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;

int main(){
    /*input resistors,will take the values as strings and size as int */
    cout << "Enter resistor values (enter 0 to finish):\n";
    std::vector<std::string> values;
    while(true){
        std::string value;
        cin >> value;
        if(value == "0"){
            break;
        }
        values.push_back(value);
        cout << "Resistor added: " << value << '\n';
    }
    cin.clear();
    cin.ignore();
    inputResistors(values);

    cout << "Resistors saved to file.\n";

    /*show the resistors in the file */
    cout << "Resistors in file:\n";
    std::vector<std::string> file_values = showResistors();
    for(const auto& v : file_values){
        cout << v << '\n';
    }

    /*computing values for either parallel or series resistors */
    int series;
    while(true){
        cout << "Enter 1 for series, 2 for parallel, 0 to exit: ";
        cin >> series;
        if(series == 0){
            break;
        }
        if(series == 1){
            double result = showResult(true);
            cout << "Total resistance in series: " << result << " ohms\n";
        } else if(series == 2){
            double result = showResult(false);
            cout << "Total resistance in parallel: " << result << " ohms\n";
        } else {
            cout << "Invalid option. Please try again.\n";
        }
    }


    return 0;
}
