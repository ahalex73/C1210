#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Programmer: Alexander Holmes
// 4/10/2023
// Intro to C Instructor: James Rhodes

// This program is to demonstrate the use of structures in C. Structures are 
// fairly similar to classes in other languages such as Python and Javascript
// however there is slight differences. 
// This program is taking a Name and Student structure, that will eventually
// Append student structures to an array.This array is then manipulated to
// give grades to each student, calculate their averages, and calculate the
// classes average.

#define CSIZE 4
#define LEN 20
#define NUMBER_OF_GRADES 3

struct Name{
    char first[LEN];
    char last[LEN];
};

struct Student{
    struct Name full_name;
    float grade[NUMBER_OF_GRADES];
    float average;

};

float get_average(struct Student student);
float get_average_for_class(struct Student students_array[CSIZE]);

int main(void){

    struct Student students_array[CSIZE] = { /* array of students*/
        {
            {"Jack", "Black"},
            {85.7, 56.2, 12.2},
            0.0
        },
        {
            {"Tommy", "White"},
            {82.7, 56.1, 17.2},
            10.0
        },
        {
            {"Kool-Aid-Man", "OOH-YEAH"},
            {25.7, 36.2, 10.9},
            20.0
        },        
        {
            {"Bruce", "Wayne"},
            {82.7, 58.2, 10.2},
            20.0
        }                 
    };

    struct Student (* students_pointer)[CSIZE];
    students_pointer = &students_array;

    float average_grade = 0.0;
    int i;
    for(i=0; i < CSIZE ;i++){
        printf("Enter grades for %s %s\n", students_array[i].full_name.first, students_array[i].full_name.last);
        int j;
        for(j = 0; j < NUMBER_OF_GRADES; j++) {
            printf("Grade %d: ", j+1);
            scanf("%f", &students_array[i].grade[j]);
            students_array[i].average = get_average(students_array[i]);
        }
    }

    /*  For printing out array of student structures */
    for (i = 0; i < CSIZE; i++) {
        printf("--%s %s--\n", students_array[i].full_name.first, students_array[i].full_name.last);
        int j;

        for(j = 0; j < NUMBER_OF_GRADES; j++){
            printf("Grade %d: %.2f, " , j + 1, students_array[i].grade[j]);
    
        }    
        printf("\n");
        printf("Average Grade: %.2f\n\n", students_array[i].average);
    }
    
    float class_average;
    class_average = (get_average_for_class(students_array));
    
    printf("Class Average: %.2f", class_average);

    return 0;
}

float get_average(struct Student student) {
    float sum = 0;
    int i;
    for (i = 0; i < NUMBER_OF_GRADES; i++) {
        sum += student.grade[i];
    }

    return sum / NUMBER_OF_GRADES;
}

float get_average_for_class(struct Student students_array[CSIZE]) {
    float sum = 0;
    int i;
    for (i = 0; i < CSIZE; i++) {
        sum += students_array[i].average;
    }

    return sum / CSIZE;
}