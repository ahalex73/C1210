#include <stdio.h>
#include <stdlib.h>

// Programmer: Alexander Holmes
// 2/16/2023
// Intro to C Instructor: James Rhodes

// This program  asks the user to enter the number of days and then converts that
// value to weeks and days.

int main()
{
    double series_one_sum = 1;
    double n_value = 0;
    double i = 1;

    printf("Enter in a n value: ");
    scanf("%lf", &n_value);
    
    printf("%.2lf\n", n_value);

    while(i <= n_value){
        
        series_one_sum = series_one_sum + (1 / (i + 1));
        
        i = i + 1;
    }
    printf("%lf", series_one_sum);

    return 0;
}