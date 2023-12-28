#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    char buffer;
    int denominator = 0;
    float sum = 0;
    do{
        printf("\nEnter number: ");
        scanf("%d", &number);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer > 10 || number < 0){
            printf("\nNhap lai deeeee: ");
        }else if(number == 0){
            return 0;
        }else{
            denominator = 0;
            sum = 0;
            for(int i = 1 ; i <= number ; i++){
                denominator += i;
                sum += 1.0 / denominator;
            }
            printf("\nSum of fraction: %.2f", sum);
        }
    }while(buffer > 10 || number >= 0);

    return 0;
}
