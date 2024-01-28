#include <stdio.h>
#include <conio.h>


int towerOfHanoi(int n,char,char,char);
int main(){
int n = 4; 
    towerOfHanoi(n, 'A', 'C', 'B'); 
    return 0;
}

int towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}


// 1. Write a program in C to print the first 50 natural numbers using recursion.
// Expected Output:

//  The natural numbers are : 1  2  3
//   4  5  6  7  8  9  10  11  12  13
//   14  15  16  17  18  19  20  21  
// 22  23  24  25  26  27  28  29  30
//   31  32  33  34  35  36  37  38  
// 39  40  41  42  43  44  45  46  47
//   48  49  50 


int numPrint(int n)
{
    if(n<=50)
    {
         printf(" %d ",n);
         numPrint(n+1);
    }
}

int sumOfRange(int n1) 
{
   int res;
   if (n1 == 1) 
   {
      return (1);
   } else 
   {
      res = n1 + sumOfRange(n1 - 1); 
   }
   return (res);
}

int fibonacci(int prNo, int num, int term) 
{
   static int i = 1;
   int nxtNo;
 
   if (i == term)
      return (0);
   else 
   {
      nxtNo = prNo + num;
      prNo = num;
      num = nxtNo;
      printf("%d  ", nxtNo);
 
      i++;
      fibonacci(prNo, num,term); 
   }
   return (0);
}



// Write a program in C to print the array elements using recursion. >
// Test Data :
// Input the number of elements to be stored in the array :6
// Input 6 elements in the array :
// element - 0 : 2
// element - 1 : 4
// element - 2 : 6
// element - 3 : 8
// element - 4 : 10
// element - 5 : 12

int ArrayElement(int arr1[], int st, int l)
{
    if(st >= l)
        return;
         
    printf("%d  ", arr1[st]);
     
   
    ArrayElement(arr1, st+1, l);
}