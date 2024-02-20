#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
//36-arrayAssignmentWork
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void concatArrayV1(int arr1[], int size1, //mảng nguyên thủy
                   int arr2[], int size2,
                   int arr3[], int *size3);
void reverseArray(int array[], int size);
void reverseArrayV2(int array[], int size);

/*
concatArrayV1: nối mảng
hàm nhận vào mảng 1 , mảng 2 , mảng 3
    sau khi xử lý , mảng 1 và 2 không đổi
    mảng 3 sẽ trở thành mảng 1 + mảng 2

    mảng 3 đóng vai trò lưu thành phẩm
*/

int main()
{
    int arr1[100] =  {1,3,5,7};
    int size1 = 4;

    int arr2[100] = {2,4,6};
    int size2 = 3;

    int arr3[100] = {5,5,5,5,5};
    int size3 = 5;

    //in ra
    printf("\nMang 1 ne: ");
    outputArray(arr1 , size1);

    printf("\nMang 2 ne: ");
    outputArray(arr2 , size2);

    printf("\nMang 3 ne: ");
    outputArray(arr3 , size3);

    //xài hàm concat
    concatArrayV1(arr1 , &size1,  arr2 , &size2 , arr3 , &size3);
    printf("\nSau khi thay doi");
    printf("\nMang 1 ne: ");
    outputArray(arr1 , size1);

    printf("\nMang 2 ne: ");
    outputArray(arr2 , size2);

    printf("\nMang 3 ne: ");
    outputArray(arr3 , size3);

    printf("\nKet qua ne: ");
    reverseArrayV2(arr1, size1);
    outputArray(arr1 , size1);
    return 0;
}

void inputArray(int array[], int* size){
    printf("\nNhap kich thuoc di: ");
    scanf("%d", size);

    for(int i = 0 ; i <= *size - 1; i++){
        printf("\nNhap Array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}

void outputArray(int array[], int size){
    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%5d", array[i]);
    }
}

void concatArrayV1(int arr1[], int size1,
                    int arr2[], int size2, int arr3[], int* size3){
    //b1:
    //xóa mảng 3 để dùng lưu kết quả
    *size3 = 0;

    //b2:
    //Nhét mảng 1 vào mảng 3
    for(int i = 0 ;  i <= size1 - 1 ;i++){
        arr3[*size3] = arr1[i]; //nhét mảng
        (*size3++);
    }
    /*
    n1     :2 6 9 1
    index1 :0 1 2 3

    n3     :2 6 9 1
    index3 :0 1 2 3

    */

    //b3:
    //Nhét mảng 2 vào mảng 3
    for(int i = 0 ; i <= size2 - 1 ; i++){
        arr3[*size3] = arr2[i];
        (*size3)++;
    }
}


/*
reverse Array
hàm nhận vào 1 mảng array, đảo ngược các phần tử trong mảng

c1: nhét
    tạo 1 mảng tạm (lưu kết quả hành động nhét)
*/
void reverseArray(int array[], int size){
    int arrayTmp[100];
    int sizeTmp = 0;

    //nhét array vào arrayTmp nhưng theo chiều ngược
    for(int i = size - 1 ; i >= 0 ; i--){
        arrayTmp[sizeTmp] = array[i];
        sizeTmp++;
    }
    //sao chép arrayTmp vào array
    //sao chép đối xứng - cùng kích thước
    for(int i = 0 ; i <= sizeTmp - 1 ;  i++){
        array[i] = arrayTmp[i];

    }
}
void reverseArrayV2(int array[], int size){
    for(int i = 0 ; i <= (size/2) - 1 ; i++){
        //swap 2 thằng là i và size - i - 1;
        int tmp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = tmp;
    }
}
