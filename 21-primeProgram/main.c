#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    char buffer;
    //ép nhập số nguyên
        while(1 == 1){
        do{
            printf("\nEnter number: ");
            scanf("%d", &number);
            scanf("%c", &buffer);
            fflush(stdin);
            if(buffer != 10 || number < 0){
                printf("\nNhap lai di");
            }if(number == 0){
                return 0;
            }
        }while(buffer != 10);
        //Nếu code chạy dc xuống đây thì number đã là số nguyên
        int isPrime = 1;
        if(number >= 2){
            for(int i = 2 ; i <= number - 1 ; i++){
                if(number % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                printf("%d is a prime number", number);
            }else{
                printf("%d is a not prime number", number);
            }
        }else{
            printf("\nKhong phai so nguyen to");
        }
    }
    return 0;
}
