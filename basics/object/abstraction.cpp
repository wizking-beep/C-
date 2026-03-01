#include <iostream>
using namespace std;

/*
 Abstraction is the hiding of unnecessary data from
 outside a class.
 getter -->This is a function for reading the private
 attribute of a class.
 setter -->This is a function for writing to a private
 attribute of a class.
 */

class Multimeter {
    private:
    int voltage = 0;

    public:
    Multimeter(int voltage){
        setVoltage(voltage);
    }
    //getter
    int getVoltage(){
        return voltage;
    }

    //setter
    void setVoltage(int voltage){
        this->voltage = voltage;
    }
};

int main () {

    Multimeter meter1(0);

    meter1.setVoltage(415);

    cout << "Voltage reading: " << meter1.getVoltage() << '\n';

    return 0;
}
