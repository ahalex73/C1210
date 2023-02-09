#include <stdio.h>
#include <stdlib.h>

// Programmer: Alexander Holmes
// 2/7/2023
// Intro to C Instructor: James Rhodes

// This program gathers a file size and download speed and calculates the total 
// Time it will take to download.

int main()
{
    double download_speed;   //Download Speed in Mbps
    double file_size;        //File size in Megabytes
    double download_time;    //Time it took to download users files

    printf("Enter in your download speed in Mbs: ");
    scanf("%lf", &download_speed);
    printf("Enter the file's size in MB: ");
    scanf("%lf", &file_size);
    
    download_time = ((file_size * 8) / download_speed);

    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f", download_speed, file_size, download_time);

    return 0;
}
