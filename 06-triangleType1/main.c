#include <stdio.h>
#include <stdlib.h>

//Nhap vao 3 so nguyen la a b
//Kiem tra xem a b c co tao thanh tam giac khong
//Neu co thi la tam giac gi ?

int main()
{
    int a, b, c;
    printf("\nEnter 3 number");


    printf("\nEnter a: ");
    scanf("%d", &a);

    printf("\nEnter b: ");
    scanf("%d", &b);

    printf("\nEnter c: ");
    scanf("%d", &c);

    //Nếu code chạy toi day nghia la a b c da co gia tri
    //Kiểm tra xem a b c có tạo thành tam giác không
    //Nếu có 2 cạnh bất kì ( nếu là tam giác thì
    if(a + b > c    && a + c > b && b + c > a){
        //Kiểm tra xem là tam giác gì
        if(a == b || b == c || c == a){
            if(a == b && b == c){
                printf("\nDay la tam giac deu");
            }else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
                printf("\nDay la tam giac vuong can");
            }else{
                printf("\nDay la tam giac can");
            }
        }else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
            printf("\nDay la tam giac vuong");
        }else{
            printf("\nTam giac thuong");
        }
    }else{
        printf("\nKhong phai la tam giac");
    }

    return 0;
}
