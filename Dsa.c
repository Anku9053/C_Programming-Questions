// Name Ankesh Sharma
// Date 03-01-2024
// Language C


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// int DivisibleByThreeOrTwo();
// int nestedprintingastrics();
// int functionwithforloops();
// int NormalSwitchcases();
// int firstsquareoftennaturalnumber();
// int patternofstar();
// int NormalSwitchcaseswithloops();
// int funnctionttable();
// int functiondesiredshapes();
// int functiondesiredvalue();
// int naturalnumber();
// int knowlowercaseuppercasesymbols();
// int whileloopprogram();
// int firtstenevennaturalnumber();
// int naturalevennumbersecondapproach();
// int sumdowhileloop();
// int nestedwhileloop();
// int reverseoffnnumber();
// int functionfindingroots();
int sipleintereset();
// int removelastdigitfromnumber();
// int lastdigitofthenumber();
// int SwapValueWithoutUsingThirdVariable();
// int numberdivisbley5ornotscanf();
// int numberdivisbley5ornot(int num);
// int terniaryoperators(int num);
// int positivenonpositivecheckusingscanf();
// int sum(int a, int b);
// int positivenonpositivecheck(int num);
// int factorial(int num);
// int evenodd(int num);
// int interchangevalue(int a , int b);
// int primenumber(int num);
int main(){
    // sum(112,14);
    // interchangevalue(12,33);
    // evenodd(21);
    // factorial(5);
    // primenumber(12);
    // positivenonpositivecheckusingscanf();
    // positivenonpositivecheck(-12);
    // terniaryoperators(55);
    // numberdivisbley5ornot(25);
    // numberdivisbley5ornotscanf();
    // SwapValueWithoutUsingThirdVariable();
    // lastdigitofthenumber();
    // removelastdigitfromnumber();
    // DivisibleByThreeOrTwo();
    // knowlowercaseuppercasesymbols();
    // whileloopprogram();
    // naturalnumber();
    // firtstenevennaturalnumber();
    // naturalevennumbersecondapproach();
    // reverseoffnnumber();
    // sumdowhileloop();
    // nestedwhileloop();
    // nestedprintingastrics();
    // functionwithforloops();
    // funnctionttable();
    // functiondesiredshapes();
    // functiondesiredvalue();
    // NormalSwitchcases();
    // NormalSwitchcaseswithloops();
    // patternofstar();
    // firstsquareoftennaturalnumber();
    // functionfindingroots();
    sipleintereset();
    printf("\nYes i am working fine");
}

int sum(int a,int b){
    printf("the value of a is %d and b is %d and the sum is %d",a,b,a+b);
}

// Enter two numbers: 3 7

int interchangevalue(int a,int b){
    int c = a;
    a = b;
    b = c;
    printf("\na is  swapped to b and the value is now %d and b is swapped to a and the  value is  %d ",a,b);
}

int evenodd(int num){
    if(num%2==0){
        printf("\nThe value of num is %d and it is even",num);
    }
    else{
        printf("\nThe value of num is %d and it is odd",num);
    }
}



int factorial(int num){
    int multiply = 1;
    for(int i=1;i<=num;i++){
        multiply*=i;
    }
    printf("\nthe value after multiplication is %d",multiply);
}


int primenumber(int num){
    int count = 0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
        else{
            continue;
        }
    }
    if(count==2){
        printf("\nthe value of num is %d and it is a prime number",num);
    }

    else{
        printf("\nthe value of num is %d and it is not a prime number",num);

    }
}


int positivenonpositivecheck(int num){
    if(num>0){
        printf("\nThe value of the num is %d and it is positive",num);
    }

    else{
        printf("\nThe value of the num is %d and it is negative",num);
    }
}


int positivenonpositivecheckusingscanf(){
    int x;
    printf("\nEnter a number : ");
    scanf("%d",&x);

    if(x>0){
        printf("\nThe value of the num is %d and it is positive",x);
    }

    if(x<0){
        printf("\nThe value of the num is %d and it is negative",x);
    }
}

int terniaryoperators(int num){
    num>0?printf("\nHello i am a positive number  with the  value of %d",num):("\nHello i am a negative number  with the  value of %d",num);
}

int numberdivisbley5ornot(int num){
    num%5==0?printf("\nThe number you enter is %d and it is divisible by 5",num):printf("\nThe number you enter is %d and it is not divisible by 5",num);
}

int numberdivisbley5ornotscanf(){
    int num;
    printf("\nEnter your number here : ");
    scanf("%d",&num);
    num%5==0?printf("\nThe number you enter is %d and it is divisible by 5",num):printf("\nThe number you enter is %d and it is not divisible by 5",num);
}


int SwapValueWithoutUsingThirdVariable(){
    int a = 20;
    int b = 30;
    // we have to swap the value from a to b
    a = b+a;
    b = a-b;
    a = a-b;
    printf("\nThe value of a is %d \nthe value of b is %d",a,b);
}

int lastdigitofthenumber(){
    int a;
    printf("\n enter the digit of your number");
    scanf("%d",&a);
    int y = a%10;
    printf("The number you have given is %d and the last digit of this number is %d",a,y);
}

int removelastdigitfromnumber(){
    int a = 124;
    int y = a/10;
    printf("the value of y  is %d ",y);
}

int DivisibleByThreeOrTwo(){
    int a;

    printf("Provide me  the value of a : ");
    scanf("%d",&a);
    if(a){

        if(a%2==0 && a%3==0){
            printf("The value you are provided is %d and it is divisible by 2 as well as 3",a);
        }

        else{

        if(a%2==0){
            printf("The value you provided is %d and  it is divisible bye 2",a);
        }
        else {
            if(a%3==0){
            printf("the value you are provided is %d and it is divisble by  3",a);
        }
        else{
            printf("The value you are provided is %d and it is not  divisble by 3 as well as 2",a);
        }
        }
        }
    }
    getch();
}

int knowlowercaseuppercasesymbols(){
    int a;
    printf("provide me the special character : ");
    scanf("%c",&a);
    if(a>=97 && a<=122){
        printf("the value is off lowercase letter and the letter  is %c",a);

    }

    else 
    {
        if(a<=96 && a>=65){
        printf("the value is off uppercase letter and the letter  is %c",a);

    }
    else{
        if(a>=33 && a<=38){
        printf("the value is off special letter and the letter  is %c",a);

        }
    }
    }
}

int whileloopprogram(){
    int start = 1;
    int end = 10;
    while(start<=end){
        printf("\nThe value is generated from %dst time like karo",start);
        start++;
    }
    getch();
}

int naturalnumber(){
    int start = 1;
    int end = 10;
    while(start<=end){
        printf("\nThe natural number is %d ",start);
        start++;
    }
}


int firtstenevennaturalnumber(){
    int start = 1;
    int end = 0;
    while(start){
        if(start%2==0){
            printf("\nThe even natural number is %d and the count is %d  ",start,end+1);
            end++;
        }
        start++;
        if(end==10){
            start=0;
        }
    }
}

int naturalevennumbersecondapproach(){
    int i=1;
    while(i<=10){
        printf("\n%d",i*2);
        i++;
    }
}


int reverseoffnnumber(){
    int a;
    printf("Enter your number : ");
    scanf("%d",&a);
    while(a>=1){
        if(a%2!=0){
            printf("\nThe numbers are %d",a);
        }
        a--;
    }
    getch();
}

// do while loop

int sumdowhileloop(){
    
}

// nested while loops

int nestedwhileloop(){
    int i =0;
    int n = 5;
    while(i<=n){
    int j  = 0;
        
        while(j<=i){
            printf("%d",j);
            j++;
        }
        printf("\n");
        i++;
    }
}


int nestedprintingastrics(){
    int i = 1;
    int n = 5;
    while(i<=n){
        int j = 1;
        while(j<=i){
                printf("%c",'*');
                j++;
        }
        printf("\n");
        i++;
    }
}


int functionwithforloops() {
    int i, j;
    for (i = 1, j = 10; i < j; i++, j--) {
        if (i == j) {
            break;
        }
        printf("%d ", i + j);
    }
    getch();
    // return 0;
}

int funnctionttable(){
    int i;
    i = 1;

    while(i<=10){
        for(int j=1;j<=10;j++){
            printf("%7d",i*j);
        }
        printf("\n");
        i++;
    }
    getch();
}

int functiondesiredshapes(){
    int i = 1;
    int n;
    printf("enter  the number of lines you want to print the pattern : ");
    scanf("%d",&n);
    while(i<=n){
        int j = 1;
        while(j<=n){
            if(j<=n+1-i){
            printf("%4c",'*');

            }
            // else{
            //     printf("%c",' ');
            // }
            j++;
        }
        printf("\n");
        i++;
    }
}

int functiondesiredvalue(){
    int i,j;
    int n;
    printf("Enter the value youu want your pattern to be printed : ");
    scanf("%d",&n);
    i = 1;
    // j = 0;
    for(i=1;i<=n;i++){
        j=1;
        for(j=1;j<=n;j++){
            if(j<=n+1-i){

            printf("%4d",j);
            }
            else{
                printf("%c",' ');
            }
        }
        printf("\n");
    }

}


int NormalSwitchcases(){
    int expression;
    while(1){
        printf("\nAnytime you want to exit press the value 6");
    printf("\nPrinnt the value of ecpression : ");
    scanf("%d",&expression);

    switch (expression)
    {
    case 1:
        printf("\nI want to print 1");
        break;
    case 2:
        printf("\nI want to print 2");
        break;

    
    case 3:
        printf("\nI want to print 3");
        break;


    case 4:
        printf("\nI want to print 4");
        break;


    case 5:
        printf("\nI want to print 5");
        break;

    case 6:
        printf("\nYou choose the number %d thats mean you are existing from this loop",expression);
        exit(0);
    default:
        printf("\nInvalid syntax  you are using with me");
        break;
    }
  }
}


int NormalSwitchcaseswithloops(){
    int radius,length,breadth,x;
    float area_of_circle,area_of_rectangle,average;
    while(1){

    printf("\n1. Area of Circle");
    printf("\n2. Area of Rectangle");
    printf("\n3. Average of the numbers");
    printf("\n4. exit from here");
    printf("\nPlease choose a Number for desired outcomes : ");
    scanf("\n%d",&x);
    printf("\n");
    switch (x)
    {
    case 1:
        printf("Enter the radius : ");
        scanf("%d",&radius);
        area_of_circle = 3.14*radius*radius;
        printf("%.2f",area_of_circle);
        break;

    case 2:
        
        printf("Enter the Length and Breadth : ");
        scanf("%d%d",&length,&breadth);
        area_of_rectangle = length*breadth;
        printf("%.2f",area_of_rectangle);
        break;

    case 3:
        int av1,av2,av3;
        printf("Enter the Numbers : ");
        scanf("%d%d%d",&av1,&av2,&av3);
        average= (av1+av2+av3)/3.0;
        printf("%.2f",average);
        break;

    case 4:
        exit(0);
    default:
        break;
    }
  }
}


int patternofstar(){
    int i,j;
    i = 1;
    while(i<=4){
        j=1;
        char k = 'A';
        
        while(j<=7){
            if(j>=i && j<=8-i){
                if(j<4){
                printf("%c",k);

                k++;
                }
                else{
                    printf("%c",k);
                    k--;
                }
            }
            else{
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
}

int firstsquareoftennaturalnumber(){
    for(int a=10;a>=1;a--){
        printf("%4d",a*a);
    }
    printf("\n");
}

int functionfindingroots(){
    int a,b,c,d;
    printf("Enter the value of first number second number and third number : ");
    scanf("%d%d%d",&a,&b,&c);
    d = b*b-4*a*c;
    if(d>0){
        printf("\nroots are real and different");
    }
    else if(d==0){
        printf("\nroots are real and different");
    }
    if(d<0){
        printf("\nroots are complex and different");
    }
}

int sipleintereset(){
    int principal,age,time;
    float rate,simpleinterest;
    rate= 10.0;
    printf("Enter the age and the money invested by you do not use any decimal value for age : ");
    scanf("%d%d",&age,&principal);

   if(principal>=1000 && principal<=100000 && age>=18 && age<=55){
     if(age>=18 && age<=25){
        time = 30;
        simpleinterest = principal*rate*time/100.0;
        printf("%.2f",simpleinterest);
    }
    else if(age>25 && age<=40){
        time = 20;
        simpleinterest = principal*rate*time/100.0;
        printf("%.2f",simpleinterest);
    }
    else{
        time = 10;
        simpleinterest = principal*rate*time/100.0;
        printf("%.2f",simpleinterest);
    }
   }
   else if(principal<1000){
    printf("Your amount is too low to proceed further");
   }
   else if(principal>1000000){
    printf("Your amount is too high to proceed");
   }
   else if(age>55){
    printf("You crossed the age limit criteria");
   }
   else if(age<18){
    printf("Your are under age limit criteria");
   }
}