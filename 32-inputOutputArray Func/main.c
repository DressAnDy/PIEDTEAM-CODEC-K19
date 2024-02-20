#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
//32-inputOutputArrayFunc
//inputArray: nhập mảng - hàm có nhiệm vụ nhập giá trị cho mảng
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int main()
{
   int arrMain[100];//tạo ra 100 có tên arrMain
   int sizeMain = 0; //kích thước giả
   //nhập mảng

    inputArray(arrMain , &sizeMain);
    printf("\nMang vua nhap ne: ");
    outputArray(arrMain , sizeMain);

   return 0;
}

void inputArray(int array[], int *size){

    printf("\nNhap kich thuoc: ");
    scanf("%d", size);

    for(int i = 0 ; i <= *size - 1 ; i++){
        printf("\nNhap array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}


void outputArray(int array[], int size){
    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%5d", array[i]);
    }
}

//size => &sizeMain
//&size => khong can quan tam
// *size => sizeMain

/*
Nếu trong hàm là con trỏ:
value => *tên
address => tên
*/
