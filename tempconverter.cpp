// temperature convertor from celius to farenheit and kelvin
#include <iostream>
using namespace std;
class TemperatureConverter {
private:
    float celsius;  
    float fahrenheit;
    float kelvin;
public:
    void inputCelsius() {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }

    void convertToFahrenheit() {
        fahrenheit = (celsius * 9 / 5) + 32;
    }

    void convertToKelvin() {
        kelvin = celsius + 273.15;
    }

    void displayTemperatures() {
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
        cout << "Temperature in Kelvin: " << kelvin << endl;
    }
};  

int main() {
    TemperatureConverter converter;
    converter.inputCelsius();
    converter.convertToFahrenheit();
    converter.convertToKelvin();
    converter.displayTemperatures();

    return 0;
}