#include <stdio.h>
#include <conio.h>
// int valuebyusingpointer(int x, int y, int z);
// int pointerdiscussion(int x, int y, int z);
// int fun(int x);
// int basicdeclaration();
// int ProblemOnPointer();
// int twolevelpointer();
// int HardpointerValuChange();
// int easyPointerChange();
int pointerToArray();
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
    // ProblemOnPointer();
    // twolevelpointer();
    // HardpointerValuChange();
    // easyPointerChange();
    pointerToArray();
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

int basicdeclaration()
{
    int m = 1000;
    int n, o;
    int *z;
    z = &m;
    printf("\nthe value of m is %d", m);
    printf("\nThe value  of m through address is %x", *z);

    printf("\nThe adress of n  is %x", &n);
    printf("\nThe adress of o  is %x", &o);
}

int valuechangethroughfunction(int x)
{
    x = 400;
    return 0;
}

// some basic problems on pointer

int ProblemOnPointer()
{
    int x = 10, y = 18;
    int *ptr1, *ptr2;
    ptr1 = &x;
    // ptr2 = &y;
    ptr2 = &y;
    *ptr2 = *ptr1;
    printf("a = %d    %d    %d", x, *ptr1, *ptr2);
}

// Two levelpointer

int twolevelpointer()
{
    int s = 12111230;
    int *ptr1, **ptr2;
    ptr1 = &s;
    ptr2 = &ptr1;

    printf("The address of s is %x", &s);
    printf("\n");
    printf("The value of s is %d", s);
    printf("\n");
    printf("The address of ptr1 is %x", ptr1);
    printf("\n");
    printf("The value of ptr1 is %d", *ptr1);
    printf("\n");
    printf("The address of ptr2 is %x", ptr2);
    printf("\n");
    printf("The value of ptr2 is %p", **ptr2);
}

int HardpointerValuChange()
{
    int *pc, c;
    c = 22;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c);
    pc = &c;
    printf("Address of pointer pc: %p\n", pc);
    printf("Content of pointer pc: %d\n\n", *pc);
    c = 11;
    printf("Address of pointer pc: %p\n", pc);
    printf("Content of pointer pc: %d\n\n", *pc);
    *pc = 2;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c); // 2
    return 0;
}

int easyPointerChange()
{
    int *pc, c;
    c = 5;
    pc = &c;
    *pc = 1;
    printf("%d\n", *pc);
    printf("%d", c);
}


// Pointer To Array
// a program where we got to know the base adress of the array is the array first element address aactually
int pointerToArray(){
    int arr[5];
    int len = sizeof(arr)/sizeof(arr[0]);
    // printf("lenggth is %d",len);
    for(int i=0;i<len;i++){
        printf("%x\n",&arr[i]);
    }
    printf("%x",&arr);
    printf("\n");
    printf("%x",&arr[1]);
    printf("\n");
    printf("%x",&arr[2]);
    printf("\n");
    printf("%x",&arr[3]);
    printf("\n");
    printf("%x",&arr[4]);
}

//By  taking value and printing the answer

