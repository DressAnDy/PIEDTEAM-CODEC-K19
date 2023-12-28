#include <stdio.h>
#include <stdlib.h>

/*
Nhập số nguyên n
tính n!

vd: nhập n = 5
tính 5! = 120
120 là kết quả của 5! = 5*4*3*2*1 => 1*2*3*4*4
*/

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);


    int factorial = 1;
    for(int i = 1; i <= n ; i++){
        factorial *= i;
    }
    printf("Giai thua cua %d la: %d", n , factorial);

    return 0;
}
