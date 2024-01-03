// Name Ankesh Sharma
// Date 03-01-2024
// Language C


#include <stdio.h>
#include <conio.h>
// int reversearray();
int getscanfunction();
// int functionforloop();
int main(){
    printf("Yes i am working");
    // functionforloop();
    // reversearray();
    getscanfunction();
}

int arr[] = {1, 2, 3, 4, 5};
// Sumof an array
int functionforloop(){
    int size = sizeof(arr)/sizeof(arr[0]);
    // printf("size %d",size);
    int bag = 0;
    for(int i=0;i<size;i++){
        bag+=arr[i];

    }

    printf("\nBag value is %d",bag);
}


// Reverse of an array

// int reversearray(){
//     char bag[];
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for(int i=size-1;i>=0;i--){
//         bag+=arr[i];
//         printf("%s%d\n"," ",arr[i]);
//     }

// }


int getscanfunction(){
   int a;
   char b[100];
   int arr[121];
   scanf("\n%d",&a);
   scanf("\n%s",&b);
   scanf("%d",arr);
   printf("The number is%d",a);
   printf("\nThe value is %s",b);
   printf("\n",arr);
   getch();
}

