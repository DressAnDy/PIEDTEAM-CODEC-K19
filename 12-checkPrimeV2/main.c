#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("\nNhap number: ");
    scanf("%d", &number);
    int isPrime = 1; //1: true | 0: false



    if(number >= 2){
        //Kiểm tra tiếp
        for(int i = 2 ; i <= number - 1 ; i++){
            if(number % i == 0){
                //do something
                isPrime = 0; //niềm tin biến mất
                break; //dừng loop gần nhất
            }
        }
        if(isPrime == 1){
            printf("\n%d is prime", number);
        }else{
            printf("\n%d is not prime", number);
        }
    }else{
        printf("\n%d is not prime", number);
    }





    return 0;
}
