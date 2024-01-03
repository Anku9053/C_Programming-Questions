// This programs code only forleap year and leap century;
// Name = Ankesh Sharma
// Date = 28th December 2023
// Time = 14:02

#include <stdio.h>
#include <conio.h>

int firstapproach(int year);
int secondapproach(int year);
int thirdapproach(int year);
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    firstapproach(year);
    secondapproach(year);
    thirdapproach(year);
}

int firstapproach(int year)
{
    if (year % 4 == 0 && year % 400 == 0)
    {
        printf("Yay the year is leap and century leap");
    }

    else if (year % 4 == 0 && year % 400 != 0)
    {
        printf("The year is a leap year but not  leap century");
    }

    else if (year % 4 != 0 && year % 400 == 0)
    {
        printf("This year is not a leap year but it is a leaap century");
    }

    else
    {
        printf("Enter the valid year");
    }
}

int secondapproach(int year)
{
    printf("\n");

    printf("This is for approach two");
    printf("\n");

    if (year % 4 == 0)
    {
        if (year % 400 == 0)
        {
            printf("yay it is a leap year and a leap century");
            printf("\n");
        }
        else
        {
            printf("It is a leap year but not a leap century");
            printf("\n");
        }
    }

    else if (year % 400 == 0 && year % 4 != 0)
    {
        printf("Yes it is a leap century");
        printf("\n");
    }

    else
    {
        printf("Please enter valid year");
        printf("\n");
    }
    // printf("\nApproach is working fine");
}

int thirdapproach(int year)
{
    printf(("The third approach is here"));

    printf("\n");
    if(year%4==0 || year%400==0){
        if(year%4==0 && year%400==0){
            printf("yay it is a leap year and leap century");
        }
        else if(year%4==0){
            printf("\nYes it is a leap year but not leap century");
        }
        else if(year%400==0){
            printf("\nYes it is a leap century but not leap year");
        }

        else{
            printf("\nEnter valid year");
        }
    }
    else{
        printf("\nPlease enter valid year");
    }
    // printf("\n\nApproach is working fine");
}