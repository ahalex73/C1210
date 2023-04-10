#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Programmer: Alexander Holmes
// 4/10/2023
// Intro to C Instructor: James Rhodes

// This program is 

#define CSIZE 4


char get_choice(void);

struct name{
    char first;
    char last;
};

struct student{
    struct name student_full_name;
    float grade;
    float average;

};



int main(void){
    struct student students_array[CSIZE]; /* array of students*/

    struct student{
        {{"Jack", "Black"},
         85.7,
         0.00
        }
    };


    return 0;
}

float get_average(void){
    /* Gets the users choice for the operator */
    float student_average = 0;

    return student_average;

}