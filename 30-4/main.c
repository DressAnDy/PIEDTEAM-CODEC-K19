#include <stdio.h>
#include <stdlib.h>


int fatorial(int n);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    fflush(stdin);
    int result = factorial(n);
    printf("%d", result);
    return 0;
}

int factorial(int n){
    if(n == 1 || n == 0){
            return 1;
    }else{
        return n* factorial(n -1);
    }
}
