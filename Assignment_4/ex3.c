#include <stdio.h>
#include <stdlib.h>

// Programmer: Alexander Holmes
// 2/16/2023
// Intro to C Instructor: James Rhodes

// This program  asks the user to enter the number of days and then converts that
// value to weeks and days.

int main()
{
    int days;                   // Holds the days the user wants to convert into weeks
    int weeks;                  // Holds the weeks 
    int remaining_days_in_week; // Holds left over days in however many weeks 

    printf("Enter the number of days:");
    scanf("%d", &days);

    weeks = days / 7;
    remaining_days_in_week = days % 7;

    printf("%d days are %d weeks, %d days.", days, weeks, remaining_days_in_week);

    return 0;
}
