// Name Ankesh Sharma
// Date 03-01-2024
// Language C


#include <stdio.h>
#include <conio.h>
// int binarydigit();
// int bitwiseand();
// int bitwiseor();
// int bitwisexor();
// int bitwiseleftshift();
int bitwiserightshift();
int main()
{
    // binarydigit();
    // bitwiseand();
    // bitwiseor();
    // bitwisexor();
    // bitwiseleftshift();
    bitwiserightshift();
    printf("HERE WE GO BROOOOOOO!!!!!!!!!");

}

int binarydigit()
{
    int a = 10000;
    int ch = 23;
    int dh;
    dh = ~ch;
    printf("~ch = %d\n", dh);
    printf("~ch = %d\n", dh);
    printf("~ch = %d\n", dh);
    return 0;
}



int bitwiseand(){
    int a = 10;
    int b = 6;
    int c= 8;
    printf("%d",a&b&c);
}

int bitwiseor(){
    int a = 10;
    int b = 6;
    printf("%d",a|b);
}

int bitwisexor(){
    int a = 10;
    int b = 6;
    int c= 8;
    printf("%d",a^b^c);
}

int bitwiseleftshift(){
    int a = 16;
    int shift_integer = 4;
    int d = a<<shift_integer;
    printf("%d",d);
}

int bitwiserightshift(){
    int a = -12;
    int shift_integer = 4;
    int d = a<<shift_integer;
    printf("%d%d",d,a);
}