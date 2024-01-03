// Name Ankesh Sharma
// Date 03-01-2024
// Language C


#include <stdio.h>
#include <conio.h>





int pointerfirst(int n);
int main(){
    int m;
    printf("Enter the value : ");
    scanf("%d",&m);
    pointerfirst(m);
    printf("\nWorking Properly");
}


int pointerfirst(int n){
    char *b;
    b = &n;
    printf("%d\n%d\n%d",n,&n,*b);
}