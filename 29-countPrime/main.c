#include <stdio.h>
#include <stdlib.h>

//29-countPrime
//nhập vào start và end
//trong đoạn từ start đến end
//số nào là số nguyên tố thì int ra màn hình
//Đếm + tính tổng

int isPrime(int number);
int main()
{
    int start , end;
    printf("\nEnter start: ");
    scanf("%d", &start);

    printf("\nEnter end: ");
    scanf("%d", &end);
    fflush(stdin);

    if(start > end){
        int tmp = start;
        start = e;
        e = tmp;
    }
    int sum = 0, count = 0;
    //number: 2 3 4 5
    //
    for(int number = start ; number <= end ; number++){
        //viết hàm kiểm tra number có phải nguyên tố hay không
        //nếu là số nguyên muốn in , đếm , tổng
        if(isPrime(number)){ //nếu number là số nguyên tố thì in ra
            printf("%5d", number);
            sum += number;
            count++;
        }
    }

    printf("\nSum = %d", sum);
    printf("\nCount = %d", count);
    return 0;
}

int isPrime(int number){
    if(number >= 2){
        for(int i = 2 ; i <= number - 1 ; i++){
            if(number % i == 0){
                return 0;
            }
        }
        return 1;
    }else{
        return 0;
    }
}



