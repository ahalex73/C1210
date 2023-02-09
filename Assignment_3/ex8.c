#include <stdio.h>
#include <stdlib.h>

// Programmer: Alexander Holmes
// 2/7/2023
// Intro to C Instructor: James Rhodes

// This program calculates the liters per 100km from the given 
// Miles traveled in miles, as well as gallons used in that time.

int main()
{
    const double LITERS_PER_GALLONS = 3.785;
    const double MILES_TO_KILOMETERS = 1.609;

    //These could all be declared in one line, for readability it is untouched.
    double miles_traveled;
    double kilometers_traveled;
    double gal_gas_consumed;
    double liters_gas_consumed;
    double miles_per_gallon;
    double kilometers_per_gallon;
    double liters_per_100km;

    printf("Enter the miles traveled: ");
    scanf("%lf", &miles_traveled);
    printf("Enter the number of gallons of gasoline consumed:");
    scanf("%lf", &gal_gas_consumed);

    miles_per_gallon = (miles_traveled / gal_gas_consumed);
    printf("%.2lf\n", miles_per_gallon); //Displays miles per gallon

    kilometers_traveled = (miles_traveled * MILES_TO_KILOMETERS);
    printf("%lf displays kilometers traveled\n", kilometers_traveled);

    liters_gas_consumed = (gal_gas_consumed * LITERS_PER_GALLONS);
    printf("%lf displays liters of gas consumed\n", liters_gas_consumed);

    liters_per_100km = (liters_gas_consumed / kilometers_traveled) * 100;

    printf("Liters per 100 kilometers: %.1f\n", liters_per_100km);


    return 0;
}
