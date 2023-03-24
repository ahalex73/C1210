#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Programmer: Alexander Holmes
// 3/23/2023
// Intro to C Instructor: James Rhodes

// This program  asks the user to enter the number of days and then converts that
// value to weeks and days.

 char get_choice(void);
 char get_first_character(void);
 int get_int(void);
 void count(void);
 int main(void){

    int choice;
    void count(void);
    while ( (choice = get_choice()) != 'q'){

        switch (choice){ 
            case 'a' : printf("Selected Addition!\n");
            break;
            case 's' : printf("Selected Subtraction!\n");
            break;
            case 'm' : printf("Selected Multiplication!\n");
            break;
            case 'd' : printf("Selected Division!\n");
            break;
            default : printf("Program error!\n");
            break;
        }
    }

    printf("Bye.\n");

    return 0;
 }

char get_choice(void){
    int ch;

    printf("Enter the letter of your choice:\n");
    printf("a. add          s. subtract\n" \
           "m. multiply     d. divide\n" \
           "q. quit\n");
    ch = get_first_character();

    while ((ch < 'a' || ch > 'm') && ch != 'q'){

        printf("Please respond with a, b, c, or q.\n");
        ch = get_first_character();
    }

    return ch;

}

char get_first_character(void){
    int ch;

    ch = getchar();

    while (getchar() != '\n')
        continue;

    return ch;
}

int get_int(void){

    int input;
    char ch;

    while (scanf("%d", &input) != 1){

        while ((ch = getchar()) != '\n')
            putchar(ch); // dispose of bad input
        printf(" is not an integer.\nPlease enter an ");
        printf("integer value, such as 25, -178, or 3: ");
    }

    return input;

} 