#include <stdio.h>
#include <stdlib.h>

//28-checkPrimeV4
//có vào có ra (nhận vào 1 con số nguyên, sau đó kiểm tra)

int isPrime(int number);
int main()
{
    int n;
    printf("\nNhap so di: ");
    scanf("%d", &n);
    if(isPrime(n)){
        printf("\n%d is prime", n);
    }else{
        printf("\n%d is not prime", n);
    }
    return 0;
}

int isPrime(int number){
    for(int i = 2 ; i <= number - 1 ; i++)//chay tu so 3{
        if(number % i == 0){
            return 0;
        }
    }
    return number >= 2;
}
