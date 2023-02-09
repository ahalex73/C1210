#include <stdio.h>
#include <stdlib.h>

// Programmer: Alexander Holmes
// 2/7/2023
// Intro to C Instructor: James Rhodes

// This program gathers a user's name, and then displays it in various different formats

int main()
{
    char user_name[20];
    int user_name_length;

    printf("Enter your first name:");
    scanf("%s", &user_name);

    printf("\"%s\"\n", user_name);
    printf("\"%*s\"\n", 20, user_name);
    printf("\"%-20s\"\n", user_name);

    user_name_length = strlen(user_name);

    printf("\"%*s\"\n", user_name_length + 3, user_name);


    return 0;
}
