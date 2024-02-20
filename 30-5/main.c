#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    fflush(stdin);

    int result = fibonacci(n);
    printf("%d", result);

    return 0;
}

int fibonacci(int n){
    if(n == 1 || n == 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
