#include <stdio.h>
#include <stdlib.h>

/*
Nhập vào 3 số thực đại diện cho a b c là hệ số của phương trình ax^2 + bx + c = 0
tìm nghiệm của phương trình trên
delta = b^2 - 4ac
> 0 (2 nghiem pb)
< 0 không có nghiệm
= 0 có nghiệm phức

*/

int main()
{
    //Nhập vào a b c
    float a, b, c;

    printf("\nEnter a: ");
    scanf("%f", &a);

    printf("\nEnter b: ");
    scanf("%f", &b);

    printf("\nEnter c: ");
    scanf("%f", &c);

    //Tính delta
    float delta;
    delta = (pow(b,2) - (4*a*c));
    if(a == 0){//bx + c = 0
        if(b == 0){ //c = 0
            if(c == 0){
                printf("\nPt co vo so nghiem");
            }else{
                printf("\nPt vo nghiem");
            }
        }else{
            float x = ((-c) / b ); //Tính trường hợp a = 0
            printf("Phuong trinh nay co dang la bac nhat la %f",x);
        }
    }else{ //ax^2 + bx + c = 0
        if(delta < 0){
            printf("Phuong trinh vo nghiem");
        }else if(delta > 0){
            float x1 = ((-b) + sqrt(delta) / (2*a));
            float x2 = ((-b) - sqrt(delta) / (2*a));
            printf("\nPhuong trinh co 2 nghiem phan biet : ");
            printf("\nNghiem x1 = %f", x1);
            printf("\nNghiem x2 = %f", x2);
        }else if(delta == 0){
            float x3 = ( (-b) / 2*a );
            printf("\nPhuong trinh co nghiem kep la %f", x3);
        }
    }
    return 0;
}
