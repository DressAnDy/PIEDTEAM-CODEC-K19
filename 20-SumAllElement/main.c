#include <stdio.h>
#include <stdlib.h>

//20-sumAllElement
/*
Nhập vào 1 số nguyên dương n
tính tổng các đơn vị số của n

vd n = 1234
=> result = 10

Nhập n = 3254
=> result = 14


hint: hãy dùng / và %

*/

int main()
{

    int n;
    char buffer;
    int sum = 0;
    do{
        printf("\nEnter number: ");
        scanf("%d", &n);
        scanf("%c", &buffer);
        fflush(stdin);

        if(buffer != 10 || n < 0){
            printf("\nNhap lai di");
        }
    }while(buffer != 10 || n < 0);


    while(n != 0){
        sum += n % 10; //3456 % 10 => 345.6 => 6 dư và được + vào sum
        n /= 10; //3456 / 10 => 345 (kiểu int)
    }
    printf("%d", sum);
    return 0;
}
