#include <stdio.h>
#include <stdlib.h>

//26-toUpperCaseV1



void toUpperCaseV1(void);

int main()
{
    toUpperCaseV1(); //call
    return 0;
}

void toUpperCaseV1(void){ //build
    char ch;
    printf("\nEnter ki tu: ");
    scanf("%c", &ch);

    //process
    if(ch >= 97 && ch <= 122){
        ch = ch - 32;
    }
    //output
    printf("\nKi tu da bien doi: %c", ch);
}
