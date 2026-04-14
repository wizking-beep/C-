#include <iostream>
/*
Create a class named WeatherReport that holds a daily weather report 
with data members such as dayOfMonth, highTemp, lowTemp, amountRain, and amountSnow. 
The constructor initializes the fields with default 
values: 99 for dayOfMonth, -9999 for highTemp, 9999 for lowTemp, 
and 0 for amountRain and amountSnow. 
Include a function that prompts the user and sets values for each field so 
that you can override the default values. Instantiate 30 WeatherReport 
objects and, in a loop, prompt the user for a month’s data. 
At the end of the month, a month-end WeatherReport object is created. 
Initialize the object with default values; then use a friend function to store 
the high temperature, low temperature, and rain and snow totals for the month in the 
object. The friend function takes two WeatherReport objects—the summary object and 
one day’s object—and it returns an updated summary object. If the day’s high 
temperature is higher than the summary object’s high, then replace the summary high. 
If the day’s low temperature is lower than the summary object’s low, then replace 
the summary low. Accumulate rain and snow in the summary object. 
Write a main()function that creates a month-end weather report 
from the 30 daily reports
*/

class WeatherReport {
    private:
    int dayOfMonth;
    double highTemp;
    double lowTemp;
    double amountRain;
    double amountSnow;
    public:
    WeatherReport() {
        dayOfMonth = 99;
        highTemp = -9999;
        lowTemp = 9999;
        amountRain = 0;
        amountSnow = 0;
    }
    void setDailyReport() {
        std::cout << "Enter day of month: ";
        std::cin >> dayOfMonth;
        std::cout << "Enter high temperature: ";
        std::cin >> highTemp;
        std::cout << "Enter low temperature: ";
        std::cin >> lowTemp;
        std::cout << "Enter amount of rain: ";
        std::cin >> amountRain;
        std::cout << "Enter amount of snow: ";
        std::cin >> amountSnow;

    };
    friend WeatherReport updateSummary(WeatherReport summary, WeatherReport daily) {
        if (daily.highTemp > summary.highTemp) {
            summary.highTemp = daily.highTemp;
        }
        if (daily.lowTemp < summary.lowTemp) {
            summary.lowTemp = daily.lowTemp;
        }
        summary.amountRain += daily.amountRain;
        summary.amountSnow += daily.amountSnow;
        return summary;
    }

    //getterrs
    int getDayOfMonth() {
        return dayOfMonth;
    }

    double getHighTemp() {
        return highTemp;
    }

    double getLowTemp() {
        return lowTemp;
    }
    
    double getAmountRain() {
        return amountRain;
    }

    double getAmountSnow() {
        return amountSnow;
    }

};

int main() {
    WeatherReport dailyReports[30];
    WeatherReport summaryReport;
    for (int i = 0; i < 30; i++) {
        std::cout << "Enter data for day " << i + 1 << ":" << std::endl;
        dailyReports[i].setDailyReport();
        summaryReport = updateSummary(summaryReport, dailyReports[i]);
    }
    std::cout << "Month-end Weather Report:" << std::endl;
    std::cout << "High Temperature: " << summaryReport.getHighTemp() << std::endl;
    std::cout << "Low Temperature: " << summaryReport.getLowTemp() << std::endl;
    std::cout << "Total Rain: " << summaryReport.getAmountRain() << std::endl;
    std::cout << "Total Snow: " << summaryReport.getAmountSnow() << std::endl;

    return 0;
}