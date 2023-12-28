#include <stdio.h>
#include <stdlib.h>

//14-delBuffer
//nhập age và firstCharOfName , rồi in ra màn hình



int main()
{
    int age;
    char firstCharOfName;

    printf("\nNhap age: ");
    scanf("%d", &age);
    fflush(stdin); //xóa buffer
    printf("\nNhap firstCharOfName: ");
    scanf("%c", &firstCharOfName);


    //in ra màn hình
    printf("\nAge ne: %d", age);
    printf("\nfirstCharOfName ne: %c", firstCharOfName);


    return 0;
}
