#include <stdio.h>
#include <stdlib.h>

// Programmer: Alexander Holmes
// 2/7/2023
// Intro to C Instructor: James Rhodes

// This program take a first name and last name and formats the length of
// first and last name to justify left and right 

int main()
{

    char first_name[20], last_name[20];

    printf("Enter in your first name:");
    scanf("%s", &first_name);
    printf("Enter in your last name:");
    scanf("%s", &last_name);

    printf("%s ", first_name);
    printf("%s\n", last_name);

    int first_name_length = strlen(first_name);
    int last_name_length = strlen(last_name);
    
    printf("%*d", first_name_length, first_name_length);
    printf("%*d\n", last_name_length, last_name_length);


    printf("%s ", first_name);
    printf("%s\n", last_name);
    printf("%-*d", first_name_length, first_name_length);
    printf("%-*d\n", last_name_length, last_name_length);

    return 0;
}
