#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;

void inputArray(int array[], int *size);
int sumOfArray(int array[], int size);
int main()
{
    int arr[MAX];
    int size = 0;
    inputArray(arr,&size);
    int result = sumOfArray(arr , size);
    printf("\nSum = %d", result);
    return 0;
}
void inputArray(int array[], int *size){
    printf("\nNhap khich thuoc di: ");
    scanf("%d", size);

    for(int i = 0 ; i <= *size - 1 ; i++){
        printf("\nNhap array[%d] = ", i);
        scanf("%d", &array[i]);
    }

}
int sumOfArray(int array[], int size){
    int sum = 0;
    for(int i = 0 ; i <= size - 1 ; i++){
        if(i > 0){
            if(i % 2 == 0){
                sum += array[i];
            }
        }
    }
    return sum;
}
