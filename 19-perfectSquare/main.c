#include <stdio.h>
#include <stdlib.h>
//19-perfectSquare
/*
số chính phương: nếu căn 2 của 1 số được số nguyên
thì số đó là số chính phương

nhập vào 1 số nguyên dương(n)
kiểm tra xem n có phải chính phương không ?

n = 7

n = 9
0^2 1^2 2^2 3^2
*/


int main()
{
    /*
    int n;
    printf("\nEnter number: ");
    scanf("%d", &n);
    for(int i = 0 ; i <= sqrt(n) ; i++){
        if(i*i == n){
            printf("\n%d is a perfect Square", n);
            return 0;
            }
        }
    printf("\n%d is a not perfect Square", n);
    }
    */

    int n;
    char buffer;
    do{
        printf("\nEnter number: ");
        scanf("%d", &n);
        scanf("%c", &buffer);
        fflush(stdin);

        if(buffer != 10 || n < 0){
            printf("\nNhap lai di");
        }
    }while(buffer != 10 || n < 0);


    if(sqrt(n) == (int)sqrt(n)){ //gang bien (int) ( sqrt(n) => the hien double ex: can 9 => 3.0000 và so sánh cho 3.0 (int) )
        printf("%d is a perfect square: ", n);
    }else{
        printf("%d is not a perfect sqaure: ", n);
    }


    return 0;
}
