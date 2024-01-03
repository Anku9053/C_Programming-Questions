#include <stdio.h>
int main2();
int main3();
void RenderFunction();
int forloopfunction();
int forloopbagcontainer();
int main(){
    printf("%s%s","Hello World");
    printf(" ");
    printf("HERE WE ARE AT A CODING  COMPANY");
    printf(" ");
    main2();
    main3();
    // forloopfunction();
    forloopbagcontainer();
    return 0;
}

int main2(){
    if(10==10)
        printf("done working");
        printf(" ");
        printf("Work Hard You will get to meet her");

}




int main3(){
    int a  = 20;
    if(a>=20){

        printf("Yes the value of a is greater than or equal to %d\n",a);
    }
    RenderFunction();
}


void RenderFunction(){
    int a[] = {1,2,3,4,5};
    printf("hey  there");
    printf("Current file: %s, Line: %d\n", __FILE__, __LINE__);
    printf("Compilation date: %s, Time: %s\n", __DATE__, __TIME__);
}

// For Loop Normal
int forloopfunction(){
    char str[] = "MASAI";

    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("String Character is %c\n",str[i]);
    }
    
}


// For loop with the help of bag container  to conatin things

int forloopbagcontainer(){
    char str[] = "Hey There I am Working Hard";
    char bag[100];
    int bagindex = 0;
    for(int i=0;str[i]!='\0';i++){

        if(str[i]!=' '){

        bag[bagindex++] = str[i];
        // bag[bagindex++] = ' ';
        }

        else if(bag[bagindex-1]==' '){
            bagindex++;
        }
    }

    bag[bagindex] = '\0';
    printf("%s\n",bag);
}