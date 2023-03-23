#include <stdio.h>
#include <stdlib.h>

// Programmer: Alexander Holmes
// 2/23/2023
// Intro to C Instructor: James Rhodes

// This program  asks the user to enter in 8 numbers to store in 
// an array, then it displays the values of that array, as well as
// the accumulated total for each index in the first array.

int main()
{
    double array[8] = {0};          // First array 
    double second_array[8] = {0};   // Summation array using first array
    int array_length = 8;           // designated array length
    double current_sum; // Current accumlated total of first arrays contents

    // Gathers inputs for the first array.
    for(int i=0; i < array_length; i++)
    {
        printf("Enter in a number for index %d: ", i);
        scanf("%lf", &array[i]);

    }

    // Prints out first array contents, while accumlating
    // and adding to the second array
    printf("Array 1's Contents: ");

    for(int j=0; j <= array_length - 1; j ++){
        current_sum = current_sum + array[j + 1]; 
        second_array[j] = current_sum;

        // Prints out first arrays contents
        if (j == array_length - 1){
            printf("%.2lf\n", array[j]);
            break;
        }

        printf("%.2lf, ", array[j]);
    }

    // Prints out second arrays contents
    printf("Array 2's Contents: ");
    for(int j=0; j <= array_length - 1; j ++){
        if(j == array_length - 1){
            printf("%.2lf", second_array[j]);
            break;
        }

    printf("%.2lf, ", second_array[j]);
}

    return 0;
}