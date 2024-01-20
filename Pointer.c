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
// int pointerToArray();
// int ValueToSum();
// int PlayingWithPointerByUsingArray();
// int AddingOneToTheValueByUsingPointer(int  *x);
// int AithmeticAdditionUsingPointer();
int AirthmeticSubtractionUsingPointer();
int memoryallocation();
int memoryallocation2();
int rellock();
int relocation();
// int swap(int *n1, int *n2);
int main()
{
    int x, y, z;
    x = 10;
    y = 50;
    z = 90;
    int *ptr;
    ptr = &x;
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
    // pointerToArray();
    // ValueToSum();
    // PlayingWithPointerByUsingArray();
    // printf("The value of first x is %d\n",x);
    // printf("The value of first y is %d\n",y);
    // swap(&x,&y);
    // printf("The value of  x is %d\n",x);
    // printf("The value of  y is %d\n",y);
    // AddingOneToTheValueByUsingPointer(ptr);
    // printf("%d",x);
    // AithmeticAdditionUsingPointer();
    // AirthmeticSubtractionUsingPointer();
    //  memoryallocation();
    // memoryallocation2();
    // rellock();
    // relocation();
    // printf("\n");
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
int pointerToArray()
{
    int arr[5];
    int len = sizeof(arr) / sizeof(arr[0]);
    // printf("lenggth is %d",len);
    for (int i = 0; i < len; i++)
    {
        printf("%x\n", &arr[i]);
    }
    printf("%x", &arr);
    printf("\n");
    printf("%x", &arr[1]);
    printf("\n");
    printf("%x", &arr[2]);
    printf("\n");
    printf("%x", &arr[3]);
    printf("\n");
    printf("%x", &arr[4]);
}

// By taking value from adress and printing the sum of an array

int ValueToSum()
{
    int arr[5], sum = 0;
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
        sum += *(arr + i);
        printf("\n");
        printf("%x", *(arr + i));
        printf("\n");
    }
    printf("%d", sum);
}

// lets play with the pointers by using array

int PlayingWithPointerByUsingArray()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;
    int *p2 = &arr[0];
    int *ptr1 = &arr[2];
    int *ptr3;
    printf("Ptr2 is %x\n = ", p2);
    printf("Ptr1 is %x\n = ", p);

    printf("Ptr2 is %x\n = ", ptr1);

    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        ptr3 = &arr[i];

        printf("Ptr%d is %x\n = ", i + 1, ptr3);
    }
}

// Important Topic
// Pointer to function

int swap(int *n1, int *n2)
{
    int temp;
    temp = *n2;
    *n2 = *n1;
    *n1 = temp;
}

// Adding one to the pointer by using function

int AddingOneToTheValueByUsingPointer(int *x)
{
    // *(x)++;
    ++(*x);
}

// Airthmetic Pointer

// ================>>>>>>>>>>>>>>>>>>>  Addition Problems Based on array and Integers

int AithmeticAdditionUsingPointer()
{
    int a[5] = {0, 1, -1, 10, 11};
    int *p = &a[0];
    printf("%d\n", *p);
    printf("the  adress is %p\n", p);
    p = p + 2;
    printf("%d\n", *p);
    printf("the  adress is %p\n", p);
    p = p + 1;
    *p = 2;
    printf("%d", *p);
    printf("the  adress is %p", p);
}

//  ==================>>>>>>>>>>>>>>>   Subtraction Problem Based on array and Integers
// We can subtract pointer with another pointer and it is going to give you some kind of an integer value for example (pinter - pointer) while we can also subtract it from an integervalue for example (pointer-2) it is going to give you the Pointer value like an adress of some variable or a memory adress based on your inputs
int AirthmeticSubtractionUsingPointer()
{
    printf("We are going to learn airthmetic subtraction of pointer");
}

int memoryallocation()
{
    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    printf("Enter elements: ");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum = %d", sum);
    free(ptr);

    return 0;
}

int memoryallocation2()
{
    int n, i, *ptr, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    printf("Enter elements: ");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum = %d", sum);
    free(ptr);
    return 0;
}

int rellock()
{
    int *ptr, i, n1, n2;
    printf("Enter size: ");
    scanf("%d", &n1);

    ptr = (int *)malloc(n1 * sizeof(int));

    printf("Addresses of previously allocated memory:\n");
    for (i = 0; i < n1; ++i)
        printf("%pc\n", ptr + i);

    printf("\nEnter the new size: ");
    scanf("%d", &n2);

    ptr = realloc(ptr, n2 * sizeof(int));

    printf("Addresses of newly allocated memory:\n");
    for (i = 0; i < n2; ++i)
        printf("%pc\n", ptr + i);

    free(ptr);

    return 0;
}


int rellock()
{
    int *ptr, i, n1, n2;
    printf("Enter size: ");
    scanf("%d", &n1);

    ptr = (int *)malloc(n1 * sizeof(int));

    printf("Addresses of previously allocated memory:\n");
    for (i = 0; i < n1; ++i)
        printf("%pc\n", ptr + i);

    printf("\nEnter the new size: ");
    scanf("%d", &n2);

    ptr = realloc(ptr, n2 * sizeof(int));

    printf("Addresses of newly allocated memory:\n");
    for (i = 0; i < n2; ++i)
        printf("%pc\n", ptr + i);

    free(ptr);

    return 0;
}

int relocation()
{

    int n;
    double *data;
    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    data = (double *)calloc(n, sizeof(double));
    if (data == NULL)
    {
        printf("Error!!! memory not allocated.");
        exit(0);
    }

    for (int i = 0; i < n; ++i)
    {
        printf("Enter number%d: ", i + 1);
        scanf("%lf", data + i);
    }
    for (int i = 1; i < n; ++i)
    {
        if (*data < *(data + i))
        {
            *data = *(data + i);
        }
    }
    printf("Largest number = %.2lf", *data);

    free(data);

    return 0;
}


// Revising the code as it is not my code i will try to make it more simple 

int addingmatrix() {
  int r, c, a[100][100], b[100][100], sum[100][100], i, j;
  printf("Enter the number of rows (between 1 and 100): ");
  scanf("%d", &r);
  printf("Enter the number of columns (between 1 and 100): ");
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }

  return 0;
}