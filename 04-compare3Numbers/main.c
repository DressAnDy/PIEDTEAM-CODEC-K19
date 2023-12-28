#include <stdio.h>
#include <stdlib.h>

/*
    nhập từ bàn phím 3 số nguyên lần lượt là a,b,c

    xuất ra màn hình tên biến có giá trị lớn nhất

    mô tả phần mềm:


    nhap a: 10
    nhap b: 20
    nhap c: 30

    OUTPUT:
    Case 1 : c lớn nhất lần lượt
    Case 2 ( a= 20) : a va c lớn nhất
    Case 3 ( a = b = c ): a  b c bằng nhau
        (a == c && c > b)
        (a == b && a > c)
        ( a > b && a > c)
        ( a >= b && a >= c) ( b >= a && b >= c) else

        else a = b = c;


int main()
{
    int a,b,c;
    printf("Pls,enter 3 numbers: ")



    return 0;
}


05-Nhập vào 3 số nguyên đại diện lần lượt là a,b,c
        giả sử đó là 3 cạnh , kiểm tra xem 3 cạnh đó có tạo thành tam giác ko
        nếu có thì là tam giác gì ( vuông , cân , đều , thường)
