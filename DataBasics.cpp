/// Muhammad Ibrahim
/// 16 October 2020
/// Lab 2.1 Data Basics
/// EXTRA: Allow the user to convert either F to C or C to F

// this program runs both exercises in different classes, calling them in main

#include <iostream>
#include <string>

using namespace std;

// class to do exercise one
class TemperatureConversions {
public:
    double celsiusToFahrenheit(double C)
    {
        double fahrenheit = (1.8 * C) + 32; // convert celsius to fahrenheit

        return fahrenheit;
    }

    double fahrenheitToCelsius(double F)
    {
        double celsius = (F - 32) * 5 / 9; // convert fahrenheit to celsius

        return celsius;
    }

    void conversions() {
        double celsius, fahrenheit;
        int selection;
        //Ask the user for their choice
        cout << "What would you like to do? (Enter the number for your selection)"
            << "\n1. Convert Celsius to Fahrenheit"
            << "\n2. Convert Fahrenheit to Celsius\n";
        cin >> selection;

        // if they choose to convert celsius to fahrenheit
        if (selection == 1)
        {
            cout << "Please enter the Celsius value:\n";
            cin >> celsius;

            fahrenheit = celsiusToFahrenheit(celsius);
            //output
            cout << celsius
                << " Celsius is "
                << fahrenheit
                << " Fahrenheit";
        }
        // if they choose to convert fahrenheit to celsius
        else if (selection == 2)
        {
            cout << "Please enter the Fahrenheit value:\n";
            cin >> fahrenheit;
            celsius = fahrenheitToCelsius(fahrenheit);
            //output
            cout << fahrenheit
                << " Fahrenheit is "
                << celsius
                << " Celsius";
        }
    }
};

// class to do exercise 2
class PizzaCalories {
public:
    void howFarToJog() {
        double slices, cals, miles;

        //ask how many slices of pizza were eaten
        cout << "How many slices of pizza have you eaten?  ";
        cin >> slices;

        //convert slices to calories and figure out how far to jog
        cals = 375 * slices;
        miles = cals / 100;

        //output
        cout << "You need to run about "
            << miles
            << " miles in order to burn up the calories from the "
            << slices
            << " slices of pizza." << endl;
    }
};


int main(void)
{
    //exercise 1
    TemperatureConversions temperatureConversions;
    temperatureConversions.conversions();

    cout << "\n\n";

    //exercise 2
    PizzaCalories pizzaCalories;
    pizzaCalories.howFarToJog();

    return 0;
}