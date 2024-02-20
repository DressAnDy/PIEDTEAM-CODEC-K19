#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
//32-inputOutputArray
//Hằng số: tên:  viết hoa , danh từ , snake_case
int main()
{
    int arr[max];
    int size; //kich thuoc fake
    //inputArray
    printf("\nNhap kich thuoc ban muon di: ");
    scanf("%d", &size);


    for(int i = 0 ; i <= size - 1 ; i++){
        printf("\nNhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    //outputArray
    printf("\nMang vua nhap la: ");
    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%5d", arr[i]);
    }


    return 0;
}
