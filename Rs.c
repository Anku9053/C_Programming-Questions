#include <stdio.h>


int fact(int n);
int main(){
    int n = 4;
    int d = fact(n);
    printf("%d",d);
}

int fact(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}