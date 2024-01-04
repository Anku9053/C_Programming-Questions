#include <stdio.h>
#include <conio.h>
// We made a container where we can store the data named as Books;
//Here we defined some variables which we are going to use like pages price date months year; 
struct Books{
    int pages,price,date,months,year;
};
void printinput(struct Books Printing);
struct Books BookChanger();
int main(){
    struct Books BookTarget;
    BookTarget = BookChanger();
    printinput(BookTarget);
    printf("\nHurray!!");
    return 14;
}


struct Books BookChanger(){
    struct Books P;
    printf("Enter  the number of pages : ");
    scanf("%d",&P.pages);
    printf("Enter the price value for book : ");
    scanf("%d",&P.price);
    printf("Enter Date which time it is published : ");
    scanf("%d/%d/%d",&P.date,&P.months,&P.year);

    return P;
}

void printinput(struct Books Printing){
    printf("The pages in the book is \n%d \nThe price is \n%d \nThe published date is in Day/Months/Year format is \n%d-%d-%d",Printing.pages,Printing.price,Printing.date,Printing.months,Printing.year);
}