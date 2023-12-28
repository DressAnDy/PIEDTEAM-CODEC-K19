#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    char buffer;
    int sum =0;
    float result = 0;
    do{
        printf("\nEnter number: ");
        scanf("%d", &number);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer != 10 || number < 1){
            printf("\nNhap lai di");
        }
        if(number == 0){
            printf("Ket qua la 0");
        }

    }while(buffer != 10 || number < 1);

    for(int i = 1; i <= number ; i++){
        sum += i;
        result += (float)1/sum;
    }
    printf("\nSum of fraction: %f", result);

    return 0;
}
