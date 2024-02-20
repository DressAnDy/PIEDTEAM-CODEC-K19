#include <stdio.h>
#include <stdlib.h>

int sumEven(int n);
int main()
{
    int n;
    printf("\nEnter n: ");
    scanf("%d", &n);
    fflush(stdin);

    int result = sumEven(n);
    printf("%d", result);
    return 0;
}

int sumEven(int n){
    int sum = 0;
    for(int i = 1 ; i <= n ; i++){
        if(i % 2 == 0){
            sum += i;
        }
    }
    return sum;
}
