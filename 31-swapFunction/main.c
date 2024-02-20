#include <stdio.h>
#include <stdlib.h>

/*
31-swapFunction
*/
/*
viet ham nhan vao numberA , numberB
Nhiem vu cua ham la doi gia tri 2 bien tren
*/


/*ở ngoài main: chúng ta gọi hàm và truyền vào biến với mong muốn
sau khi hàm chạy giá trị bên trong sẽ thay đổi , in ra màn hình xem có đổi không ?
*/

void swapNumber(int numberA, int numberB);
void swapNumberV2(int* numberA, int* numberB);
int main()
{
    int numberA , numberB;
    printf("\nEnter number A: ");
    scanf("%d", &numberA);

    printf("\nEnter number B: ");
    scanf("%d", &numberB);

    swapNumber(numberA , numberB);
    swapNumberV2(&numberA , &numberB);
    printf("\nNumber A main : %d", numberA);
    printf("\nNumber B main : %d", numberB);
    return 0;
}

//pass by value: truyền tham trị , nên trong hàm thay đổi
//ở ngoài không có gì xảy ra cả
void swapNumber(int numberA, int numberB){
    int tmp = numberA;
    numberA = numberB;
    numberB = tmp;

    printf("\nNumber A func : %d", numberA);
    printf("\nNumber B func  : %d", numberB);
}

void swapNumberV2(int* numberA, int* numberB){
    int tmp = *numberA;
    *numberA = *numberB;
    *numberB = tmp;



}
