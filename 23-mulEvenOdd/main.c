#include <stdio.h>
#include <stdlib.h>
//23-mulEvenOdd
/*
Nhập vào số nguyên n >= 2
tính tích các số chẳn và tích các số lẻ
trong đoạn 1 đến n - 1
vd:Nhap n = 5
tích các số chẳn: 8 => 2 *4
tích các số lẻ : 3 => 1 * 3
*/



int main()
{
    int number;
    char buffer;
    int mulOfEven = 1;
    int mulOfOdd = 1;
    int hasEven = 0 , hasOdd = 0;
    do{
        printf("\nEnter number: ");
        scanf("%d", &number);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer != 10 || number <= 1){
            printf("\nNhap lai di");
        }
    }while(buffer != 10 || number < 2);


    if(number >= 2){
    for(int i = 1 ; i <= number - 1 ; i++){
        if(i % 2 == 0){
            mulOfEven *= i;
            hasEven = 1;
        }else{
            mulOfOdd *= i;
            hasOdd = 1;
        }
    }

    mulEven *= hasEven;
    mulOdd *= hasOdd;



    printf("\nMulEven = %d", mulOfEven);
    printf("\nMulOdd = %d", mulOfOdd);




    return 0;
}
