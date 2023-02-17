#include <stdio.h>
#include <stdlib.h>

// Programmer: Alexander Holmes
// 2/16/2023
// Intro to C Instructor: James Rhodes

// This program  asks the user to enter the number of days and then converts that
// value to weeks and days.

int main()
{
    int quit;
    quit = 1;   // Our flag to jump out of the loop
    
    int first_operand;     // The user's desired First operand
    int second_operand;    // The user's desired Second operand
    int calculated_modulo; // The computer modulo operation based on users
                           // First and second operand.

    printf("This program computes moduli.\n");
    printf("\nEnter an integer to server as the second operand: ");
    scanf("%d", &second_operand);
    printf("Now enter the first operand: ");
    scanf("%d", &first_operand);

    while (quit != 0) {
        calculated_modulo = (first_operand % second_operand); 
        printf("%d %% %d is %d", first_operand, second_operand, calculated_modulo);

        printf("\nEnter next number for first operand (<=0 to quit): ");
        scanf("%d", &first_operand);

        if (first_operand == 0)
        {
            quit = 0;
        }
    }
        
    return 0;
}
