#include <stdio.h>
#include <stdlib.h>

//27-computeArea

/*
Viết hàm nhận vào 2 cạnh dài và rộng
Tính diện tích hình chữ nhật
*/


float computeArea(float width , float height);

int main()
{
    float w,h;
    printf("\nEnter w: ");
    scanf("%f" , &w);

    printf("\nEnter h: ");
    scanf("%f" , &h);
    fflush(stdin);

    float s = computeArea(w ,h);
    printf("%f", s);

    return 0;
}

float computeArea(float width , float height){
    float area = width * height;
    return area;
}


