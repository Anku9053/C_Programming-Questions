#include <stdio.h>
#include <conio.h>
#include <string.h>
// int sumrecursion(int n);
// int powerrecursion(int n,int b);
// int sumofnatural(int n);
// int nnatural(int n);
// int recursionsquare(int n);
// 354,224,848,179,261,915,075
// int fibo(int n);
// int recursioncube(int n);
int sortarray(int bag[],int start,int end,int index);
// int greatestcommondivisor(int n,int b);
// int recursionmysirg(int n);
// int factorialrecursion(int n);
// int pallindromrecursion(char str[],int start,int end,char reversedstr[],int  index,int count,int count2);
// char reversestrngrecursion(char str[], int start, int end,char reversedstr[],int index);
// int secondrecursion(int n , int b);
// int firstrecursion(int n);
int main()
{
    int n;
    // int index = 0;
    int b;
    int arr[100];
    // scanf("%d%d",&n,&b);
    // char str[100];
    int start = 0;
    int end;
    int index = 0;
    int bag[100];
    // char reversedstr[100];
    // scanf("%s", str);
    // end = strlen(str);
    // printf("Enter  the value of n : ");
    // scanf("%d",&arr);
    int anss = sortarray(bag,start,end,index);
    printf("%s\n",bag);
    // int ans = firstrecursion(n);
    // int ans = secondrecursion(n , b);
    // int ans = powerrecursion(n, b);
    // int ans = sumofnatural(n);
    // int ans = greatestcommondivisor(n,b);
    // reversestrngrecursion(str, start, end-1,reversedstr,index);
    // int ans = recursionmysirg(n);
    // int ans = sumrecursion(n);
    // printf("%s\n", reversedstr);
    // check();
    // int ans = factorialrecursion(n);
    // nnatural(n);
    // int anss = recursionsquare(n);
    // int anss = fibo(n);

    // int anss = recursioncube(n);
    // printf("%d",anss);
    // printf("ans is %s",ans);
    printf("Hello world");
    return 0;
}

int firstrecursion(int n)
{

    if (n == 1 || n == 0)
    {
        return 1;
    }

    else if (n == 2)
    {
        return 2;
    }
    else if (n == 3)
    {
        return 6;
    }

    else
    {
        return n * firstrecursion(n - 1);
    }

    return 0;
}

int secondrecursion(int n, int b)
{
    if (b == 0)
    {
        return 1;
    }

    else if (b == 1)
    {
        return n;
    }

    else
    {
        return n * secondrecursion(n, b - 1);
    }
}

int sumrecursion(int n)
{
    // int n = 12345;

    if (n <= 9)
    {
        return n;
    }

    else
    {
        return n % 10 + sumrecursion(n / 10);
    }
}

int powerrecursion(int n, int b)
{
    if (b == 1)
    {
        return n;
    }
    if (b == 0)
    {
        return 1;
    }

    else
    {
        return n * powerrecursion(n, b - 1);
    }
}

int sumofnatural(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sumofnatural(n - 1);
    }
}

int greatestcommondivisor(int n, int b)
{
    if (b == 0)
    {
        return n;
    }
    else
    {
        return greatestcommondivisor(b, b % n);
    }
}

int recursionmysirg(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + recursionmysirg(n - 1);
    }
}
char reversestrngrecursion(char str[], int start, int end,char reversedstr[],int index){
    if (start == strlen(str)) {
        reversedstr[index] = '\0';
        return '\0';
    }
    else{
        reversedstr[index] = str[end];
        return reversestrngrecursion(str,start+1,end-1,reversedstr,index+1);
    }
}


// int pallindromrecursion(char str[],int start,int end,char reversedstr[],int  index,int count,int count2){
//     if(start==strlen(str)){
//         reversedstr[index] = '\0';
//         return '\0';
//     }

//     else{
//         reversedstr[index] = str[end];

//         if(reversedstr[index]==str[end]){
//             count++;
//             // return count;
//         }
//         else{
//             count2++;
//             // return count2;
//         }

//         return reversestrngrecursion(str,start+1,end-1,reversedstr,index+1,count,count2);

//     }
// }


int factorialrecursion(int n){
    if(n==1){
        return 1;
    }
    else if(n==2){
        return 2;
    }

    else{
        return n*factorialrecursion(n-1);
    }
}

int nnatural(int n){
    if(n>0){
        printf("%d ",n);
        nnatural(n-1);
    }
}



int recursioncube(int n){
    int sum = 0;
 if(n>0){
        // sum+=n*n*n;
        // printf("%d",sum);
        return n*n*n + recursioncube(n-1);
    }
}

int recursionsquare(int n){
   

    if(n>0){
        // printf("%d ",n*n);
        return n*n + recursionsquare(n-1);
    }
}


int fibo(int n){
    return (n==0?0:(n==1)?1:(n==2)?1:fibo(n-1)+fibo(n-2));
}

