
// Name Ankesh Sharma
// Date 03-01-2024
// Language C


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// int forloops();
// // int whileloop();
int qsortcomparrison();
// int sumnatural(int n);
// int dowhileloop();
int main(){
    // int n;
    // printf("Enter the value of n : ");
    // scanf("%d",&n);
    // sumnatural(n);
    qsortcomparrison();
//     // whileloop();
//     // dowhileloop();
//     forloops();
}

// int whileloop(){
//     int i=0;
//     while(i<0){
//         printf("\nThe count is %d ",i+1);
//         i++;
//     }
//     printf("Condition is not true  you ediot!!!!!!!");
// }

// int  dowhileloop(){
//     int i=1;
// do
// {
//     printf("\nThe count is %d ",i+1);
//     while(i<5){
//         printf("i is true");
//         i++;
//     }
//     i++;
// } while (i<10);
// }

// int forloops(){
//     for(int i=0;i<=5;++i){
//         printf("The value of i is %d ",i);
//     }
// }

// #include <stdio.h>

// int main()
// {
//     int i = 1;

//     // Example using post-increment (i++)
//     int result_post = i++ * 2;

//     printf("Result using post-increment: %d\n", result_post); // Output: 0

//     // Reset i to 0 for the next example
//     i = 1;

//     // Example using pre-increment (++i)
//     int result_pre = ++i * 2;

//     printf("Result using pre-increment: %d\n", result_pre); // Output: 2

//     return 0;
// }

int sumnatural(int n)
{
    int sum = 0;
    float avg;
    int arr[n];
    printf("Enter the value of arrays : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg = sum/(float)n;
    printf("The sum is %d and the average is %.2f",sum,avg);
}

// 25+21+14+19

int compare(const *a, const *b) {
    return (*(int *)a - *(int *)b);
}


int qsortcomparrison(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    qsort(arr,n,sizeof(int),compare);


     printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;


}