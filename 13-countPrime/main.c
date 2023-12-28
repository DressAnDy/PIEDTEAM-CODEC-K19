#include <stdio.h>
#include <stdlib.h>
//13-countPrime
/*
Nhập vào start và end
in ra màn hình các số chẳn trong đoạn
*/




int main()
{
    int start;
    int end;
    int isPrime = 1;

    printf("\nEnter start: ");
    scanf("%d", &start);

    printf("\nEnter end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start; //gia dinh start = 1 ; end = 5
        start = end;
        end = tmp;
    }
    for(int number = start ; number  <= end; number++){
            //Kiểm tra xem number có phải là prime và in ra
            isPrime = 1; //reset niềm tin
            if(number >= 2){
                for(int i = 2 ; i <= number - 1 ; i++){
                    if(number % i == 0){
                        isPrime = 0;
                        break;
                    }
                }
                if(isPrime == 1){
                    printf("%2d", number);
                }
            }
        }
    return 0;
}
