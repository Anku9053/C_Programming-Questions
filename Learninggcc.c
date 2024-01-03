#include <stdio.h>
#include <conio.h>

// int main2();

// int sumprogram(int a,int b);
//    int incrementpostpreboth();
   int logicaloperators();
// int floatthevalue();
// int charactervalue();
// int pointervalue();
// int scanffunction();
// int signedint();
// int stringvalue();
// int sizeofvar();
// int mainforarray();
// int mainpointer();
// int mainobject();
// int mainenum();
// int printcharasciivalue();
   int noreusable(int a,int b ,int f,int j,int m);
int main(){
    // int a = 12;
    // int b= 30;
    // printf("\tHello Students");
    // getch();
    // printf("\r");
    // getch();
    // printf("welcome to Bytexl\t");
    // getch();
    // main2();
    // floatthevalue();
    // charactervalue();
    // stringvalue();
    // pointervalue();
    // sizeofvar();
    // signedint();
    // mainforarray();
    // mainpointer();
    // mainobject();
    // mainenum();
    // printcharasciivalue();
    // scanffunction(a,b);
    // sumprogram(10,20);
    // noreusable(902,-16,28,72,87);
    // incrementpostpreboth();
    logicaloperators();
    // printf("%d",sum);
}

// Foramt Specifiers       {%d}
int main2(){
    int a = 20;
    printf("the %d Value  %d is the %d value of a",a,a);
}

// Foramt Specifiers       {%f} float
int floatthevalue(){
    float a = 13.65;
    printf("The value we aare obtaining for a is a floating value %.1f",a);
}
// Foramt Specifiers       {%c} character
int charactervalue(){
    char a = 'A';
    printf("The value of the character a is %c",a);
}


// Foramt Specifiers       {%s} string
int stringvalue(){
    char a[]  = "Hello There";

    printf("The value of a is string and  the  value is %s",a);


}

// Foramt Specifiers       {%p} pointer

// int pointervalue(){
//     int value = 42;

//     printf("The value of pointer can be like this %p",pointer);
// }



// Size of variables

// int sizeofvar(){
//     long long int value1 = 992836844736363;
//     printf("The value of the long int variable is %ld", value1);
// }


int signedint(){
    int a = 6545662;
    printf("%d",a);
}


int mainforarray() {

    int numbers[5] = {10, 20, 30, 40, 50};

    printf("Element 1: %d\n", numbers[0]);
    printf("Element 2: %d\n", numbers[1]);
    printf("Element 3: %d\n", numbers[2]);
    printf("Element 4: %d\n", numbers[3]);
    printf("Element 5: %d\n", numbers[4]);

}


int printcharasciivalue(){
    char a = 69;
    printf("Here is the Ascii value of c %c",a);
}

int scanffunction(){
    int a;
    int b;
    scanf("please enter the value of a = %d please enter  the value of b = %d\n",&a,&b);
    printf("the entered value of a = %d and b= %d",a,b);
}

int sumprogram(int a,int b){
    printf("The sum is %d",a+b);
}


// no reusbility
int noreusable(int a,int c,int b,int j,int k){
    printf("Enter  the value for a%d the value of b %d");
    scanf("%d%d",&a,&b);
    c = a+b;
    printf("the sum is %d",c);
    getch();
}

int incrementpostpreboth(){
    int x,y;
    x = 5;
    // y=x++; //post increment
    y=++x; //pre increment
    printf("The value of x is %d and y is %d",x,y);
}

int logicaloperators(){
    printf("%d",5>4>3);
}