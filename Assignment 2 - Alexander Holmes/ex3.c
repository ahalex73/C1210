#include <stdio.h>
#include <stdlib.h>


// Programmer: Alexander Holmes
// 1/25/23
// Intro to C Instructor: James Rhodes

// This program demonstrates exercise 8 in Chapter 2: Intro to C
// The goal of this program is to illustrate understanding in function calls in C


int main()
{
    printf("Starting now:\n");
    one_three();
    printf("Done\n");

    return 0;
}

int one_three() {
    printf("One\n");
    two();

    return 0;
}


int two(){
    printf("Two\n");
    three();

    return 0;
}

int three(){
    printf("Three\n");

    return 0;
}
