#include <stdio.h>
#include <stdlib.h>
//15-doWhile-while
//Loop: vòng lặp
//For| do while | while
//do while: làm rồi mới hỏi dk (dụ người ta nhập , hoặc không có kết thúc , không quan tâm bước nhảy)
//for: xét dk rồi làm
int main()
{
    /*
    int i = 15;

    do{
        printf("\nI lop du %d", i);
        i++;
    }while(i <= 10);
    */

    /*
    int a;
    for(;;){
        printf("\nNhap a di:");
        scanf("%d", &a);
        if(a == 15){
            break;
        }
    }
    */

    /*
    int a;
    do{
        printf("\nNhap a di: ");
        scanf("%d", &a);
    }while(a != 15);
    */

    int i = 1;
    while(i <= 10){
        printf("\nI lop do %d", i);
        i++;
    } //thường dùng với boolean --> True hoặc False























    return 0;
}
