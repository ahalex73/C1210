#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Programmer: Alexander Holmes
// 3/23/2023
// Intro to C Instructor: James Rhodes

// This program is a simple menu-based calculator that 
// allows the user to select from four different 
// operations: addition, subtraction, multiplication, and division. 
// The program uses the get_choice function to prompt the user for their selection,
// and then allows the user to perform the selected operation.
// The program continues to prompt the user for their choice until they select 'q' to quit.

 char get_choice(void);
 char get_first_character(void);
 float get_float(void);

 int main(void){
    /* The main function */

    int choice;
    float first_number = 0;
    float second_number = 0;
    float result = 0;

    while ((choice = get_choice()) != 'q'){

        switch (choice){ 
            case 'a' : printf("Selected Addition!\n");
                printf("Enter first number: ");
                first_number = get_float();
                printf("Enter Second number: ");
                second_number = get_float();

                result = (first_number + second_number);
                printf("%.2f + %.2f = %.2f\n", first_number, second_number, result);

            break;

            case 's' : printf("Selected Subtraction!\n");
                printf("Enter first number: ");
                first_number = get_float();
                printf("Enter Second number: ");
                second_number = get_float();
                result = (first_number - second_number);
                printf("%.2f - %.2f = %.2f\n", first_number, second_number, result);

            break;

            case 'm' : printf("Selected Multiplication!\n");
                printf("Enter first number: ");
                first_number = get_float();
                printf("Enter Second number: ");
                second_number = get_float();

                result = (first_number * second_number);
                printf("%.2f * %.2f = %.2f\n", first_number, second_number, result);
            break;

            case 'd' : printf("Selected Division!\n");
                printf("Enter first number: ");
                first_number = get_float();
                printf("Enter Second number: ");
                second_number = get_float();

                while (second_number == 0){
                    printf("Enter a number other than 0: ");
                    second_number = get_float();
                }
                result = (first_number / second_number);

                printf("%.2f / %.2f = %.2f\n", first_number, second_number, result);

            break;

            default : printf("Program error!\n");
            break;
        }
    }

    printf("Bye.\n");

    return 0;
 }

char get_choice(void){
    /* Gets the users choice for the operator */
    int ch;

    printf("Enter the letter of your choice:\n");
    printf("a. add          s. subtract\n" 
           "m. multiply     d. divide\n" 
           "q. quit\n");
    ch = get_first_character();

    while (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q'){

        printf("Please respond with a, s, m, d, or q.\n");
        ch = get_first_character();
    }

    return ch;

}

char get_first_character(void){
    /* Gets the first character in a string and returns it */
    int ch;

    ch = getchar();

    // Consume extra characters
    while (getchar() != '\n')
        continue;

    return ch;
}

float get_float(void){
    /* Gets an integer from the user */

    float input;
    char ch;

    while (scanf("%f", &input) != 1){

        while (((ch = getchar()) != '\n'))
            putchar(ch); // dispose of bad input
        printf(" is not an number.\nPlease enter an ");
        printf("floating-point value, such as 2.5, -178E8, or 3: ");
    }

    return input;

} 

/*
Dropbox Feedback
Overall Feedback
You can use scanf("%[^\n]s",variable_name); 

This takes the input for a char or string until newline is encountered.
*/