#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;

void inputArray(int array[] , int *size);
int sumOfPrime(int array[], int size);

int main()
{
    int arr[MAX];
    int size = 0;
    inputArray(arr, &size);
    int result = sumOfPrime(arr, size);
    printf("\Sum = %d", result);
    return 0;
}

void inputArray(int array[], int *size){
    printf("\nNhap kich thuoc di: ");
    scanf("%d", size);

    for(int i = 0 ; i <= *size - 1 ; i++){
        printf("\nNhap array[%d]: ", i);
        scanf("%d", &array[i]);
    }

}

int sumOfPrime(int array[], int size){
    int sum = 0;
    for(int i = 0 ; i <= size - 1 ; i++){
        if(array[i] >= 2){
            int isPrime = 1;
            for(int j = 2 ; j <= array[i] - 1 ; j++){
                if(array[i] % j == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                sum += array[i];
            }
        }
    }
    return sum;
}
