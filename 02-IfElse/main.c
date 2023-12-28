#include <stdio.h>
#include <stdlib.h>

//02-if else
//Cau truc phan nhanh
int main()
{

    /*
    if(conditional){
        command block; //khoi menh lenh
    }else if(conditional){
        command block;
        }
    */

    int car = 5;
    printf("\nSai Gon");
    printf("\nCao Toc Lien Khuong");
    //gặp 1 biển báo



    if(car >= 7){
        printf("\nPren");
    }else if(car == 7){
        printf("\nSacom");
    }else{
        printf("\nMimosa");
    }
    printf("\nDa Lat");



    //Nói riêng về điều kiện
    //Comparision operator: toán tử điều kiện
    // == so sánh bằng
    // != không bằng
    // > < >= <=

    //Mathetic operator: toán tử toán hạng
    //+ - * / %

    //Toán tử tăng:

    //II - Logical operator: toán tử logic
    //Muốn đi bar thì cần gì
    //tuổi phải từ 18 trở lên
    //money trên 300
    int age = 25;
    int money = 11;







    //logical
    //And (&&) Or (||)


    if(age >= 18 && money > 300){
        printf("\nWelcome");
    }else{
        printf("\nCut");
    }



    if(age >= 18 || money > 300){
        printf("\nWelcome");
    }else{
        printf("\nCut");
    }


    //`

    //&& : tìm false , thấy false chốt false
    //||: tìm true, thấy true là chốt true

    int a = 9;
    int b = 0;

    if(a == 10 && b++ > 2){
        printf("\nTrue  a = %d , b = %d ", a ,b);
    }else{
        printf("\nFalse a = %d , b = %d " ,a ,b);
    }

    return 0;
}
