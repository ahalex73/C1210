#include <stdio.h>
#include <stdlib.h>

// Programmer: Alexander Holmes
// 2/23/2023
// Intro to C Instructor: James Rhodes

// This program compares the number of friends that Professor Rabnud has.
// Professor Rabnud started with 5 friends, and then loses 1 friend per week,
// and then doubles that amount. The Program ends after exceeding
// Dunbars number - which approximates to around 150

// Dunbars number is a estimate of the maximum size of a cohesive social
// group in which each member knows every other members and how they 
// relate to one another.

int main()
{
    const int APPROXIMATE_DUNBARS_NUMBERS = 150;
    int friends = 5;
    int i = 1;

    while(friends < APPROXIMATE_DUNBARS_NUMBERS){
        friends = (friends - 1) * 2;
        if(friends > APPROXIMATE_DUNBARS_NUMBERS){
            printf("Week #%d there are %d friends, which exceeds dunbars number.\n", i, friends);
            break;
        }

        printf("Week #%d there are %d friends.\n", i, friends);

        i ++;
    }


    return 0;
}