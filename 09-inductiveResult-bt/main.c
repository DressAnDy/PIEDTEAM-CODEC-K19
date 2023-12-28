#include <stdio.h>
#include <stdlib.h>
/* 09-inductiveResult
-Nhap vao 1 so nguyen n
Xuat ra man hinh ket qua cua 1^n + 2^n + .... + n^n

vd: ta nhập n = 5
thì phải in ra kết quả của 1^5 + 2^5 + 3^5 + 4^4 + 5^5.

*/

int main()
{
    int n;
    printf("\nEnter n: ");
    scanf("%d", &n);

    int sum = 0;
    for(int i = 1 ; i <= n ; i++){
        sum += pow(i,n);
    }
    printf("\nSum = %d", sum);


    return 0;
}
