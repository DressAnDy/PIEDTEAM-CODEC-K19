#include <stdio.h>
#include <stdlib.h>

//24-printParttern
/*
nhập vào hight and width
in ra màn hình
vd: hight = 5 và width = 7

*******
*     *
*     *
*     *
*******
*/

int main()
{
    int row = 5;

    for(int i = 0 ; i <= row ; i++){
        for(int j = 0 ; j < row - i ; j++){
            printf("* ");
        }
        printf("\n");
    }



    return 0;
}
