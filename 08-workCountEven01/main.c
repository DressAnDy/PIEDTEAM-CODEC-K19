#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start , end;

    printf("\nNhap start: ");
    scanf("%d", &start);

    printf("\nNhap end: ");
    scanf("%d", &end);

    if(start > end){ //Nhập cà chớn thì swap
        int tmp = start;
        start = end;
        end = tmp;
    }

    int countEven;
    for(int i = start ; i <= end; i++){
        if(i % 2 ==0){
            printf("%2d", i);
            countEven++;
        }
    }
    printf("\nCountEven = %d", countEven);

    int sumOdd = 0;
    for(int i = start ; i <= end ; i++){
        if(i % 2 != 0){
            sumOdd += i;
        }
    }
    printf("\nSumOdd = %d", sumOdd);

    int count = 0;
    for(int i = start ; i <= end ; i++){
        count++;
    }
    printf("\nCount = %d", count);


    return 0;
}
