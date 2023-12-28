#include <stdio.h>
#include <stdlib.h>

/*
11-Fibonacci
Dãy số hoàn hảo
nhập một số nguyên n
in ra màn hình số ở vị trị thứ n trong dãy fibonacci
*/

int main()
{
    //set up trạng thái n = 1
    int pre = 0, curr = 1;
    int sum = 1;
    int number;
    scanf("%d", &number);
    for(int i = 0 ; i <= number; i++){
       sum = pre + curr;
       pre = curr;
       curr = sum;
    }
    printf("%d o vi tri fibonaci la %d", number , sum);

    return 0;
}
