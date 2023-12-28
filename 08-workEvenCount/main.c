#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, end;

    printf("\nEnter start: ");
    scanf("%d", &start);

    printf("\nEnter end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    printf("\nSo chan trong doan la:");
    for(int i = start ; i <= end ; i++){
        if(i % 2 == 0){
            printf("%2d", i);
        }
    }

    printf("\nTong cua cac so le trong doan: ");
    int sum = 0;
    for(int i = start ; i <= end ; i++){
        if(i % 2 != 0){
            sum += i;
        }
    }
    printf("%d ", sum);


    int count = 0;
    for(int i = start ; i <= end ; i++){
        count++;
    }
    printf("\nCo tong bao nhieu so trong doan: %d", count);


    int countOfEven = 0;
    for(int i = start ; i <= end ; i++){
        if(i % 2 == 0){
            countOfEven++;
        }
    }
    printf("\nCo bao nhieu so chan trong doan: %d", countOfEven);


    int countOfOdd = 0;
    for(int i = start ; i <= end ; i++){
        if(i % 2 != 0){
            countOfOdd++;
        }
    }
    printf("\nCo bao nhieu so le trong doan: %d", countOfOdd);

    return 0;
}

//vòng lập vô hạn for(;char != 10;)
