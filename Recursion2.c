// Name Ankesh Sharma
// Date 03-01-2024
// Language C


#include <stdio.h>
#include <conio.h>
#include <string.h>


int reversearray(int n,int arr[],int bag[],int start,int end);

int main(){
    int start ,end,index ,n;
    start = 0;
    index = 0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    end = n-1;
    int arr[n];
    int bag[n];
    printf("Enter the value for array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int anss = reversearray(n,arr,bag,start,end);
     printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", bag[i]);
    }
    // printf("%d",bag);
    printf("Hey Buddyyyy!!!!");
}

int reversearray(int n,int arr[],int bag[],int start,int end){   

    if(start>n){
        return 0;
    }

    else{
        
        bag[start] = arr[end];
        return reversearray(n,arr,bag,start+1,end-1);
    }

   
}






int sort(){
    
}