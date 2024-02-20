#include <stdio.h>
#include <stdlib.h>

//28-checkPrimeV2
//có vào không ra
void checkPrimeV2(int number);
//Nhận vào 1 số , kiểm tra rồi đưa review
int main()
{
    int n
    printf("\nEnter number: ");
    scanf("%d", &n);
    fflush(stdin);
    checkPrime(n); //parameter agrument
    return 0;
}


void checkPrimeV2(int number){
    if(number >= 2){
    for(int i = 2 ; i <= number - 1 ;i++){
        if(number % i == 0){
            printf("\n%d KP SNT", number);
            return;
        }
    }
    printf("\n%d la so nguyen to", number);

    }else{
        printf("\n%d khong phai so phu hop", number);
    }
}
