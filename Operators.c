// Name Ankesh Sharma
// Date 03-01-2024
// Language C


#include <conio.h>
#include <stdio.h>
#include <stdalign.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>
// int bitwiseoperators();
// int leftshiftbitwise();
// int commaopeerator();
// int checkingleftshift();
// int incre();
// int arrayfunction();
// int enumartorfunction();
// int unionfunction();
// int structure();
// int mainincre();
// int mainsecond();
// int mainforth();
int scondfunction();
// int mainthird();
// int AssignmentOperators();
// int assignment();
// int bitwisenot();
// int logicaloperators();
int main()
{
    // AssignmentOperators();
    // assignment();
    // logicaloperators();
    // bitwiseoperators();
    // leftshiftbitwise();
    // bitwisenot();
    // commaopeerator();
    // checkingleftshift();
    // incre();
    // arrayfunction();
    // enumartorfunction();
    // unionfunction();
    // structure();
    // mainincre();
    // mainsecond();
    // mainthird();
    // mainforth();
    scondfunction();

    printf("Yes I am printing");
}

int AssignmentOperators()
{
    int a = 10;
    a *= 10;
    printf("%d", a);
    printf("\n");
    a = 10;
    a += 10;
    printf("%d", a);
    printf("\n");
    a = 10;
    a -= 10;
    printf("%d", a);
    printf("\n");

    a = 10;
    printf("the value of not logical operator is %d", !a);
    printf("\n");

    a = 0;
    printf("The value of not logical secondoperator is %d", !a);
    printf("\n");

    a = 10;
    a %= 3;
    printf("%d", a);
    printf("\n");
    int b = 10;
    a = 10;
    int c = 20;
    a += b + (c * 10);
    printf("%d", a);
    printf("\n");

    int z = 100;
    a = 20;
    b = 40;
    c = -10;
    int sum = 0;
    sum += z + c - a * b / a % a;
    printf("%d", sum);
    printf("\n");

    a = 10;
    float x = 2.25;
    int divide = x / a;
    printf("%d", divide);
    printf("\n");

    int ankesh = 10;
    int s = ankesh++;

    printf("the value after post increment of ankesh is %d", ankesh);
    printf("\n");
    printf("the value after post increment of s is %d", s);
    printf("\n");

    ankesh = 10;
    s = ++ankesh;

    printf("the value after pre increment of ankesh is %d", ankesh);
    printf("\n");
    printf("the value after pre increment of s is %d", s);
    printf("\n");
}

int assignment()
{
    int a = 18;
    int b = 10;
    int c = 9, e = 10, d = 10;

    int f = a + c == b >= e < c + d != 1;

    printf("%d", f);
}

// int logicaloperators()
// {
//     char a[] = "Jenny";
//     int b = 10;
//     int c = 20;
//     char* result = a && b < c;
//     printf("result is %s", result);
// }

int bitwiseoperators()
{
    int a = 10, b = 6;
    printf("%d", a & b && b + 1 || b++ || 0);
    printf("\n");
    printf("%d", b);
}

int leftshiftbitwise()
{
    int a = 10, b = 6;
    int leftshift = a + 1 << 2;
    printf("%d", leftshift);
    printf("\n");
}

int bitwisenot()
{
    int a = 5, b;
    b = ~a;
    printf("%d", b);
    printf("\n");
}

int commaopeerator()
{
    int a;
    a = printf("jenny"), 4, 12;
    printf("%d", a);
}

int checkingleftshift()
{
    int n;
    int a = 1;
    int x;
    int table;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        table = i << n;
        printf("%4d", table);
        printf("\n");
    }
}

int incre()
{
    int num = 10;
    printf("%d the first pre increment", ++num);
    printf("\n");
    printf("%d after pre", num);
    printf("\n");
    printf("%d before post", num++);
    printf("\n");
    printf("%d after post", num);
    // printf("%d%d", num++, ++num);
}

int arrayfunction()
{
    int arr[5];
    int i;
    for (i = 0; i <= 4; i++)
    {
        printf("Enter the marks of %d students", i + 1);
        scanf("%d", &arr[i]);
    }

    //     for(int j=0;j<=4;j++)
    // {
    //  printf("%4d",arr[j]);
    //  printf("\n");
    // }

    printf("%d", arr[4]);
}

int enumartorfunction()
{
    enum Ankesh
    {
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    };

    enum Ankesh day1 = Wednesday;
    if (day1 == 0)
    {
        printf("Done");
    }
    else
    {
        printf("Not done");
    }
}

#include <stdio.h>

// Define a union named Number

int unionfunction()
{

    union Number
    {
        int integer;
        float floatingPoint;
        char ch[2];
    };

    union Number myNumber;

    myNumber.integer = 42;
    printf("Integer: %d\n", myNumber.integer);
    myNumber.floatingPoint = 2.88;

    printf("Floating Point: %f\n", myNumber.floatingPoint);

    myNumber.ch[0] = 'A';
    myNumber.ch[1] = 'B';

    printf("%c%c", myNumber.ch[0], myNumber.ch[1]);

    // printf("%c",myNumber.ch[1]);

    return 0;
}

int structure()
{
    struct Ankesh
    {
        char Name;
        int years;
        float salary;
    };

    struct Ankesh employee1, employee2, employee3;
    employee1.Name = 'B';
    employee1.years = 10;
    employee1.salary = 2398.99;
    printf("%c\n%d\n%.2f\n", employee1.Name, employee1.years, employee1.salary);
}

int mainincre()
{
    int d, a = 1, b = 2;
    d = a++ + ++b;
    printf("%d %d %d", d, a, b);
}

int mainsecond()
{
    int a = 10, b = 10;
    if (a = 5)
        b--;
    printf("%d, %d", a, b--);
}

#include <stdio.h>
int mainthird()

{

    int a = 3;

    int b = ++a + a++ + --a;

    printf("Value of b is %d", b);
}

int mainforth()

{

    // int a = 8;
    //  int b = ++a + a++ +  a++ + --a + a++ + a++;
    // int b = ++a + a-- + --a + --a + ++a;
    // printf("%d\n%d\n%d\n%d\n%d", --a, a--, ++a,--a, --a);

    // int a,b,c,d;
    // char name[50];
    // printf("enter your name : ");
    // scanf("%49[^\n]",name);
    // // printf("Enter the value of a b c and d : ");
    // // scanf("%d%d%d%d",&a,&b,&c,&d);
    // printf("%s\n",name);
    // printf("The value of a is %d b is %d c is %d d is  %d",a,b,c,d);

    int a = 10; 
    printf("%d %d\n", a, a++); 
  
    a = 10; 
    printf("%d %d\n", a++, a); 
  
    a = 10; 
    int b = 20;
    printf("%d %d %d %d %d %d %d %d %d %d %d %d", a,b--,--a,b,a--,a--,++b, a++, ++b,b--,--a,a--); 

    return 0; 
}


int scondfunction(){
    // int a = 8;
    // int b = ++a + a++ +  a++ + --a + a++ + a++;
    // printf("%d%",b);
    int a = 20;
    int d;
    // d = a++ + ++b;
    d = --a + --a + --a + --a + a++ + --a + a-- + a + --a + a++;
    printf("%d %d", d,a);
}