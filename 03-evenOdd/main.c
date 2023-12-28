#include <stdio.h>
#include <stdlib.h>
/*
     xin người dùng nhập tự bàn phím 1 số nguyên bất kì
     kiểm tra số đó là chẳng hay lẻ
     in ra man hình báo cáo
*/


int main()
{

    int number;
    printf("\nPls, input a number: ");
    scanf("%d", &number);
    //code đến được đây là number đã có giá trị.
    //kiểm tra xem giá trị của number là chẵn hay lẻ

    if(number % 2 == 0){
        printf("\nThe number %d is even", number);
    }else{
        printf("\nThe number %d is odd", number);
    }


    return 0;
}



