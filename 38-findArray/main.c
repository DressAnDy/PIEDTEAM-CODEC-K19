#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;

//38-findArray
/*
    find first index: tìm vị trí đầu tiên của key trong mảng
    hàm nhận vào 1 mảng array, hàm nhận thêm key
    tìm trị của đầu tiên phát hiện key
*/

/*
*find list index

    Nhận vào 1 mảng array, và key , 1 mảng arrayR
Hàm này tìm các vị trí xuất hiện keu bên trong array và lưu vào arrayR
    hint : nhét có chọn lọc
    -arrR:
*/

void findListIndex(int array[], int size , int key, int arrayR[], int *sizeR);
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findArray(int array[], int size , int key);


int main()
{
    int array[100] = {1,2,3,4,5,6,7,8};
    int size = 8;
    /*
    inputArray(arr , &size);
    outputArray(arr , size);

    printf("\n%d o tri vi dau tien trong mang la %d", key , findArray(arr, size ,key));
    */
    int arrayResult[100] = {1,2,3,4,5,6,7};
    int sizeResult = 7;
    findListIndex(array, size , 6 , arrayResult , &sizeResult);
    if(sizeResult == 0){
        printf("\nKhong tim thay");
    }else{
        printf("\nNhung vi tri xuat hien la: ");
        outputArray(arrayResult, sizeResult);
    }

    return 0;
}


void inputArray(int array[], int *size){
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);

    for(int i = 0 ; i <= *size - 1 ; i++){
        printf("\nNhap Array[%d]: ", i);
        scanf("%d", &array[i]);
    }

}
void outputArray(int array[], int size){
    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%5d", array[i]);
    }

}

int findArray(int array[], int size , int key){
    for(int i = 0 ; i <= size - 1 ; i++){
        if(array[i] == key){
            return i;
        }
    }
    return -1; //tìm như con chó rách mà ko có thì trả -1
}

void findListIndex(int array[], int size , int key, int arrayR[], int *sizeR){
    //duyệt mảng , đi qua từng phần tử
        *sizeR = 0;
    for(int i = 0 ; i <= size - 1 ; i++){
        if(array[i] == key){
            arrayR[*sizeR] = i;
            (*sizeR)++;
        }
    }



}
