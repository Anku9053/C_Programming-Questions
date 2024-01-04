// Name Ankesh Sharma
// Date 03-01-2024
// Language C


// Questions we are going to solve
// Write a program that define a structure student, with members rollno, name and age. Also define functions to input and show student data

// Structure in c Programming



// Syntax


// struct VariableName
// {
//     /* data */
// };


struct date{
        int dates,months,year;
};

#include <stdio.h>
#include <conio.h>
struct Rectangle {
    float length;
    float width;
};
// int structsecond();
// int arraysttruct();
// int secondquestion();
// int thirdquestion(struct Rectangle *d1);
struct date baisicstructure();
// int syntaxlearning();
int main(){
    struct Rectangle d2;
    // syntaxlearning();
    // structsecond();
    struct date d1;
    // arraysttruct();
    // secondquestion();
    // thirdquestion(&d1);
    d1 = baisicstructure();
    printf("%d-%d-%d",d1.dates,d1.months,d1.year);
    printf("\nGoing to learn Structure");
}


int syntaxlearning(){
    

    struct date d1,d2,d3;
    printf("Enter the dates : ");
    scanf("%d",&d1.dates);
    printf("Enter the months : ");
    scanf("%d",&d1.months);
    printf("ENter the year : ");
    scanf("%d",&d1.year);

    printf("Date/Months/Year Format is %d/%d/%d",d1.dates,d1.months,d1.year);
    }


    // By using structure

    int structsecond(){
        struct data
        {
            int day,month,year;
        };
        

        struct data d1 = {17,07,2002};
        printf("%d/%d/%d",d1.day,d1.month,d1.year);
    }


    // By using structure again


    int arraysttruct(){
        int n;
        printf("Please enter your first number : ");
        scanf("%d",&n);
        struct arraystruct
        {
            int arr[n];
        };
        

        struct arraystruct str;
        
        printf("Please enter the value : ");
        for(int i=0;i<n;i++){
            scanf("%d",&str.arr[i]);
        }

        for (int i = 0; i < n ; i++) {
        printf("%d ", str.arr[i]);
    }

    // printf("%d\n", str.arr[n - 1]);  // Print the last element with a newline character

    }

    // // Consider the following structure definition:
// struct Point {
//     int x;
//     int y;
// };

// Declare a variable 'p' of type struct Point and initialize its members to represent the point (3, 7).

int questionone(){
struct Point {
    int x;
    int y;
};

struct Point p;
p.x = 3;
p.y = 7;
printf("%d %d",p.x,p.y);
}


// Declare a variable 'c' of type struct Circle and initialize its members to represent a circle with center (5, 10) and radius 4.5.
int secondquestion(){

struct Point {
    int x;
    int y;
};

struct Circle {
    struct Point center;
    double radius;
};

struct Circle c;
c.center.x = 5;
c.center.y = 10;
c.radius = 4.5;
printf("(%d, %d) %.1lf",c.center.x,c.center.y,c.radius);

}


// Consider the following structure definition:
// Write a C function named 'calculateArea' that takes a struct Rectangle as a parameter and returns the area of the rectangle.

int thirdquestion(struct Rectangle *d1){
    d1->length = 16;
    d1->width = 10;
    float area = d1->length*d1->width;
    printf("%.2f",area);
}


struct date baisicstructure(){
    struct date Somedate;
    printf("Enter the date : ");
    scanf("%d/%d/%d",&Somedate.dates,&Somedate.months,&Somedate.year);
    return Somedate;
};