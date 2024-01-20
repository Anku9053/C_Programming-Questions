// input 10
// output 




#include <stdio.h>
#include <conio.h>
#include <string.h>
// int recusrsionsumnnumbers(int n);
// char reversestring(char str[],int start,int end);
// int recursionbacktacking(int n);
int factorial(int n);
int main(){
    int n = 5;
    // int start = 0;
    // int end = 0;
    // char bag[];
    // int d = recusrsionsumnnumbers(n);
    
    // recursionbacktacking(n);
    // printf("%d",d);
    // char str[] = "Ankesh";
    // char  d = reversestring(str,start,end);
    int d = factorial(n);

    printf("%d",d);
}

int recusrsionsumnnumbers(int n){
    if(n>=1){
        return n+recusrsionsumnnumbers(n-1);
    }
}

int recursionbacktacking(int n){
    if(n<=0){
        printf("%d",0);
        return 0;
    }
    else {
        printf("%d ",n);
        recursionbacktacking(n-2);
    }
}


char reversestring(char str[],int start,int end){
    // printf("%d",strlen(str));
    if(start<=strlen(str)){
        // bag[start] = str[end];
        str[start] = str[end];
        return reversestring(str,start+1,end-1);
    }
}


int factorial(int n){
    // int n=10;
    if(n>=1){
        return n*factorial(n-1);
    }
}