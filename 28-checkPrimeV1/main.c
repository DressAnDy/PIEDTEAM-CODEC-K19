#include <stdio.h>
#include <stdlib.h>

//28-checkPrimeV1
//Kiểm tra 1 số nguyên có phải số nguyên tố không
//không vào không ra

void checkPrimeV1(); //khai báo
int main()
{
    //c1: return-phù hợp cho sử dụng 1 táp vụ
    //c2: isPrime + break
    checkPrimeV1();
    return 0;
}

void checkPrimeV1(){
    int number;
    printf("\nEnter number: ");
    scanf("%d", &number);

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
