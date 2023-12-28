#include <stdio.h>
#include <stdlib.h>

//08-countEven
/*
Nhập vào số nguyên lần lượt là start và end, in ra màn hình các số trong đoạn từ start đến end



*/

int main()
{
    int start, end;
    int aNemBiGay = 0;

    printf("\nEnter start: ");
    scanf("%d", &start);

    printf("\nEnter end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }

    for(int i = start ; i <= end ; i++){
        printf("%2d ",i);
    }

    for(int i = start ; i <= end ; i++){


        printf("%d", tong);
    }
    return 0;
}
