/*2078 kartik*/
/* write a program that converts object of celsius type to object of fahrenheit type*/

#include <iostream>

class Celsius
{
private:
    float temperature;

public:
    Celsius();
    Celsius(float temperature);

    void setTemperatue(float temperature);
    float toFahrenheit();
    float getTemperature();
    void display();
};

class Fahrenheit
{
private:
    float temperature;

public:
    Fahrenheit();
    Fahrenheit(float temperature);

    void setTemperatue(float temperature);
    float getTemperature();
    float toCelsius();
    void display();
};

int main()
{
    Celsius t_one;
    Fahrenheit t_two;

    t_one.setTemperatue(37);
    t_two.setTemperatue(98.6);

    std::cout << t_one.getTemperature() << " degree celsius = " << t_one.toFahrenheit() << " degree fahhrenheit.\n";
    std::cout << t_two.getTemperature() << " degree fahrenheit = " << t_two.toCelsius() << " degree celsius.\n";

    return 0;
}

// Celsius Class
Celsius::Celsius() {}

Celsius::Celsius(float temperature) { this->setTemperatue(temperature); }

void Celsius::setTemperatue(float temperature) { this->temperature = temperature; }

float Celsius::getTemperature() { return this->temperature; }

float Celsius::toFahrenheit() { return this->temperature * 9 / 5.0 + 32; }

void Celsius::display() { std::cout << "The temperatue is " << this->temperature << " degree celsius.\n"; }

// Fahremheit Class
Fahrenheit::Fahrenheit() {}

Fahrenheit::Fahrenheit(float temperature) { this->setTemperatue(temperature); }

void Fahrenheit::setTemperatue(float temperature) { this->temperature = temperature; }

float Fahrenheit::getTemperature() { return this->temperature; }

float Fahrenheit::toCelsius() { return (this->temperature - 32) * 5 / 9.0; }

void Fahrenheit::display() { std::cout << "The temperatue is " << this->temperature << " degree celsius.\n"; }