#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;

void inputArray(int array[], int *size);
float trungBinhCong(int arr[], int size);
int main()
{
    int arr[100];
    int size = 0;
    inputArray(arr, &size);
    printf("%.2f", trungBinhCong(arr, size));
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

float trungBinhCong(int array[], int size){
    float sum = 0;
    float count = 0;
    float trungBinhCong;
    for(int i = 0 ; i <= size - 1 ; i++){
        sum += array[i];
        count++;
    }
    trungBinhCong = sum / count;

    return trungBinhCong;
}
