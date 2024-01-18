#include <stdio.h>
#include <conio.h>
int valuebyusingpointer(int x, int y, int z);
int pointerdiscussion(int x, int y, int z);
int fun(int x);
int basicdeclaration();
int ProblemOnPointer();
int main()
{
    int x, y, z;
    x = 10;
    y = 50;
    z = 90;
    // basicdeclaration();
    // int d= valuechangethroughfunction(y);
    // printf("%d",d);
    // fun(y);
    // printf("%d", y);
    // return 0;
    // pointerdiscussion(x,y,z);
    // valuebyusingpointer(x, y, z);
    // printf("%x",d);
    ProblemOnPointer();
    printf("\nhurray i learnt pointer");
}

int pointerdiscussion(int x, int y, int z)
{
    int *ptr1, *ptr2, *ptr3;
    // int *ptr2;
    // int *ptr3;
    ptr1 = &x;
    ptr2 = &y;
    ptr3 = &z;

    printf("%x\n%x\n%x", ptr1, ptr2, ptr3);
}

int valuebyusingpointer(int x, int y, int z)
{
    int *ptr1, *ptr2, *ptr3;
    ptr1 = &x;
    ptr2 = &y;
    ptr3 = &z;
    printf("\nThe address of pointer 1 is %x", ptr1);
    printf("\nThe value of first pointer is %d", *ptr1);

    printf("\nThe address of pointer 2 is %x", ptr2);
    printf("\nThe value of first pointer is %d", *ptr2);

    printf("\nThe address for pointer 3 is %x", ptr3);
    printf("\nThe value of first pointer is %d", *ptr3);

    // printf("");
    // printf("The value of first pointer is %d",*ptr1);
}

int fun(int x)
{
    // x = 30;
    int *ptr = &x;

}
// Write a program in C to show the basic declaration of a pointer Expected Output :Pointer : Show the basic declaration of pointer:Here is m=10, n and o are two integer variable and *z is an nteger z stores the address of m  = 0x7ffd40630d44 *z stores the value of m = 10 &m is the address of m =x7ffd40630d44 &n stores the address of n = 0x7ffd40630d48 &o stores the address of o =0x7ffd40630d4c &z stores the address of z= 0x7ffd40630d50

int basicdeclaration(){
    int m = 1000;
    int n,o;
    int* z;
    z = &m;
    printf("\nthe value of m is %d",m);
    printf("\nThe value  of m through address is %x",*z);

    printf("\nThe adress of n  is %x",&n);
    printf("\nThe adress of o  is %x",&o);

}


int valuechangethroughfunction(int x){
    x = 400;
    return 0;
}


// some basic problems on pointer

int ProblemOnPointer(){
    int x=10,y=18;
    int *ptr1,*ptr2;
    ptr1 = &x;
    // ptr2 = &y;
    ptr2 = &y;
    *ptr2= *ptr1;
    printf("a = %d    %d    %d",x,*ptr1,*ptr2);
}

