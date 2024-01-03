#include <stdio.h>
#include <conio.h>
#include <string.h>
// int discriment(int a, int b, int c,int d);
// int larger(int a,int b);
// int vowelconsonant(char c);
// int leapyearornot(int year);
// int dayofweek(int n);
int maximumnumber(int a,int b, int c);
// int checkvowelconsonantdigitexpression(char ch);
// int grade(int marks_of_student);
// int accountinfo(int accountbalance,int accountmoney);
// int evenodd(int num);
int main(){
    int a,b,c,d;
    char ch;
    int year;
    int num;
    int accountbalance = 100000;
    int accountmoney;
    int marks_of_student;
    // printf("Enter the year you want to check if it is leap or not : ");
    // scanf("%d",&year);
    printf("Enter three number a , b and c is : ");
    scanf("%d%d%d",&a,&b,&c);
    maximumnumber(a,b, c);
    // larger(a,b);
    // printf("Enter  the alphabet : ");
    // scanf("%c",&ch);
    // checkvowelconsonantdigitexpression(ch);
    // printf("Enter the amount you want to withdraw : ");
    // scanf("%d",&accountmoney);
    // accountinfo(accountbalance,accountmoney);
    // evenodd(num);
    // vowelconsonant(ch);
    // printf("Enter the digit less than 8 : ");
    // scanf("%d",&num);
    // grade(marks_of_student);
    // dayofweek(num);
    // discriment(a,b,c,d);
    // leapyearornot(year);
    // printf("\nhello world");
}

// Write a C program that takes two integers as input and determines the larger of the two. Use an if-else statement for the comparison.

int larger(int a,int b){
    if(a && b && a>b){
        printf("a is greater than b");
    }

    else if(a && b && a<b){
        printf("b is greater than a");
    }

    else{
        printf("Enter a valid number please");
    }
}


//Create a C program that checks whether a given year is a leap year or not. Use an if-else if-else statement to implement the leap year logic.

int leapyearornot(int year){
    if(year%4==0 && year%400==0){
        printf("Congratulation this is a leap year as well as leap century too HURRAY!!!!!!!!!!");
    }

    else if(year%4==0 && year%400!=0){
        printf("Yay Bro It is a leap year but not leap century");
    }

    else if(year%4!=0 && year%400==0){
        printf("yay bro but it is a leap centuryonly");
    }

    else{
        printf("Enter Sommething Valid");
    }
}

//Develop a C program that calculates the roots of a quadratic equation (ax^2 + bx + c = 0) based on user input for coefficients a, b, and c. Use if-else if-else statements to handle different cases (real roots, complex roots, etc.).

//If the discriminant is greater than 0, the roots are real and different. If the discriminant is equal to 0, the roots are real and equal. If the discriminant is less than 0, the roots are complex and different


int discriment(int a, int b, int c,int d){
    d = b*b - 4*a*c;

    if(d>0){
        printf("the roots are real and different");
    }
    else if(d<0){
        printf("the roots are complex and different");
    }

    else{
        printf("the roots are real and equal");
    }
}


//Write a C program to determine if a given character is a vowel or a consonant. Use an if-else statement for the classification.

int vowelconsonant(char c){
    int count = 0;
    char str[] = {'a','e','i','o','u','A','E','I','O','U'};
    // printf("%d",strlen(str));
    for(int i=0;i<strlen(str);i++){
        if(c==str[i]){
            count++;
        }
    }

    // printf("%d",count);
    if(count>=1){
        printf("Hurray your alphabet is %c and it is a Vowel!!!!!",c);
    }

    else{
        printf("The alphabet you enter is %c and it is a consonant",c);
    }
}

//Implement a C program that takes a number as input and checks whether it is even or odd. Use an if-else statement for the determination.

int divisible(int num){
    if(num >=0 && num%2==0){

        if(num%2==0 && num%3==0){
            printf("the number is dicvisible by 2 and 3");

        }

        else {
        printf("The number is divisible by 2");

        }

    }
    else if(num >=0 && num%2==1){
        printf("The number is divisible by 3");
    }

    // else if

    else{
        printf("Enter the correct Number");
    }
}


//Write a C program to simulate a simple ATM machine. Ask the user for the account balance and the withdrawal amount. Use if-else statements to check if the withdrawal is within the available balance and provide appropriate messages.


int accountinfo(int accountbalance,int atmbalance){
    if(accountbalance>=atmbalance){
        accountbalance-=atmbalance;
        printf("Congratulation You withdrwal RS %d amount of money",atmbalance);
    }

    else if(accountbalance<atmbalance){
        printf("Please Enter Low ammount");
    }

    else{
        printf("Please enter a valid amount");
    }
}


int grade(int marks_of_student){
    if(marks_of_student>=90 && marks_of_student<=100){
        printf("Ahhhhh You did good for sure");
    }

    else if(marks_of_student>=80){
        if(marks_of_student==80){
            printf("We are brother");
        }
        else if(marks_of_student<90){
            printf("You are good to go work hard for your future");
        }

    }

    else if(marks_of_student>=70 && marks_of_student<80){
        printf("Hey brooooooo!!!!!");
    }

    else{
        printf("Enter  valid  marks or more than 70 or 70");
    }
}

//Question:
//Create a C program to determine the day of the week based on a user-inputted number (1 for Sunday, 2 for Monday, and so on). Use an if-else if-else statement for the classification.


int dayofweek(int n){
   if(n>0 && n<=7){

    if(n==1){

    printf("Monday");
    }

    else if(n==2){
        printf("Tuesday");
    }

    else if(n==3){
        printf("Wednesday");
    }

    else if(n==4){
        printf("Thursday");
    }

    else if(n==5){
        printf("friday");
    }

    else if(n==6){
        printf("Saturday");
    }

    else {
        printf("Sunday");
    }
   }
}


//Design a C program that takes a character as input and determines if it is a vowel, consonant, digit, or special character. Use if-else statements for the classification


int checkvowelconsonantdigitexpression(char ch){
    int count1=0,count2=0,count3=0,count4 = 0;

    if(ch>=97 && ch<=127){

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u'){
        printf("The character you ientered is %c and Yes it is a vowel ",ch);
    }

    else {
        printf("The character you ientered is %c and it is a consonant ",ch);
    }

    }
    else  if(ch>=47 && ch<=57 ){
        printf("The character you entered is a number  and the value is %c ",ch);
    }

    else{
        printf("The character  you entered is %c and it is a special character ",ch);
    }


}

// maximum number

int maximumnumber(int a,int b, int c){
    if(a>b && a>c){
        printf("a is almighty");
    }

    else if(b>c && b>a){
        printf("b is almighty");
    }

    else{
        printf("c is almighty");
    }
}