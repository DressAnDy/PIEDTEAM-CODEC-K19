#include <stdio.h>
#include <stdlib.h>

//26-toUpperCaseV4

char toUpperCaseV4(char character);

int main()
{
    char ch;
    printf("\nEnter ki tu: ");
    scanf("%c", &ch);
    toUpperCaseV4(ch);
    ch = toUpperCaseV4(ch); //ch nhận giá trị , hứng
    printf("%c", ch);
    return 0;
}

char toUpperCaseV4(char character){
    if(character >= 97 && character <= 122){
        character -= 32;
    }
    return character;
}
