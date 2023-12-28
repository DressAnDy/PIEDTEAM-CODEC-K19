#include <stdio.h>
#include <stdlib.h>

//21-printFormat
/*
ép Nhập vào 1 ký tự thuộc Alphatbet thường
in ra ký tự đó dưới dạng ký tự , số , octal
*/


int main()
{
    char ch;
    do{
        printf("\nNhap 1 ky tu di: ");
        scanf("%c", &ch);
        fflush(stdin);
        if(ch < 97 || ch > 122){
            printf("\nNhap chu thuong di");
        }


    }while(ch < 97 || ch > 122);

    printf("\n%d %c %o", ch , ch , ch);
    return 0;
}
