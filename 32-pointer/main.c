#include <stdio.h>
#include <stdlib.h>

//33-pointer

/*

*/

int main()
{
    int tt = 200; //biến bth: lưu giá trị bình thường
    int* hari = &tt; //biến pointer: lưu địa chỉ
    //của biền mà nó muốn điều khiển

    printf("\nValue tt: %d", tt); //200
    printf("\nAddress tt: %u", &tt); //6422036
    printf("\nValue hari: %u", hari); //6422036
    printf("\nAddress hari: %u", &hari); //6422032
    printf("\nHook hari: %d", *hari); //200
    *hari -= 150;
    printf("%\nValue tt: %d", tt);












    return 0;
}
