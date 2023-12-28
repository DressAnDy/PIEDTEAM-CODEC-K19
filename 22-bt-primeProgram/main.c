#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    char buffer;
    int isPrime = 1;
    do{
        printf("\nEnter number: ");
        scanf("%d", &number);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer != 10 || number < 0 || number == 1){
            printf("Nhap lai di");
        }else{
            if(number >= 2){
            isPrime = 1;
                for(int i = 2 ; i <= number - 1 ; i++){
                    if(number % i == 0){
                    isPrime = 0;
                    break;
                    }
                }
                if(isPrime == 1){
                    printf("\n%d is prime", number);
                }else{
                    printf("\n%d is not prime", number);
                }
            }
        }
    }while(buffer != 10 || number != 0);


    return 0;
}
