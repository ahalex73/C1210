#include <stdio.h>
#include <stdlib.h>

// Programmer: Alexander Holmes
// 1/25/23
// Intro to C Instructor: James Rhodes

// This program gathers a users birthday, and outputs their age in days.

int main()
{
    int present_day = 25;
    int present_month = 1;
    int present_year = 2023;
    int present_days_in_year = 25;

    int user_birth_day;
    int user_birth_month;
    int user_birth_year;


    printf("Enter in your birthday\n");
    printf("Enter what day of the month you were born(1-31)\n");
    scanf("%d", &user_birth_day);
    printf("Enter what month you were born (1-12)\n");
    scanf("%d", &user_birth_month);
    printf("Enter what year you were born (2001)\n");
    scanf("%d", &user_birth_year);

    user_birth_year = present_year - user_birth_year; // gets the number of years the person has been alive

    if (user_birth_month > present_month) {
        user_birth_year = user_birth_year - 1;
        user_birth_month = user_birth_month + 12;
    }

    printf("\nYou are %d years old! How young!\n", user_birth_year);

    int age = ((user_birth_year) * 365.25) + ((user_birth_month - 1) * 30) + (user_birth_day) + present_days_in_year;
    // Calculates age in days based on someones birthday taking into account leap years on average

    printf("You are %d days old.\n", age);

    return 0;
}

