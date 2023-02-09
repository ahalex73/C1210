#include <stdio.h>
#include <stdlib.h>

// Programmer: Alexander Holmes
// 2/7/2023
// Intro to C Instructor: James Rhodes

// This program displays a floating point number in various ways.

int main()
{

    double floating_number;

    printf("Enter a floating point number:");
    scanf("%lf", &floating_number);

    printf("The input is %.1lf or %.1e\n", floating_number, floating_number);
    printf("The input is %+.3lf or %+.3lE", floating_number, floating_number);

    return 0;
}
