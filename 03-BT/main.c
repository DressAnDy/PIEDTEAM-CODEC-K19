#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Pls, enter 3 numbers");

    printf("\nEnter number a: ");
    scanf("%d", &a);

    printf("Enter number b: ");
    scanf("%d", &b);

    printf("Enter number c: ");
    scanf("%d", &c);

        if(a > b && a > c){
            printf("\nMaxValue is a: %d", a);
        }else if (b > a && b > c){
            printf("\n is b: %d", b);
        }else if(c > a && c > b){
            printf("\nMaxValue is c: %d", c);
        }else if(a == b && a > c){
            printf("\nMaxValue are a and b: %d and %d", a , b);
        }else if(a == c && a > b){
            printf("\nMaxValue are a and c: %d and %d", a , c);
        }else if(b == c && b > a){
            printf("\nMaxValue are b and c: %d and %d", b , c);
        }else{
            printf("a = b = c: %d = %d = %d", a , b , c);
        }
    return 0;
}
