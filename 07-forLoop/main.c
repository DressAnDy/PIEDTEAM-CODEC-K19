#include <stdio.h>
#include <stdlib.h>
//07-forLoop: vòng lập for
int main()
{
    /*
    for(khởi đầu ; điều kiện thoát ; bước nhảy ){
        command block
    }
    */
    //int i:

    for(int i = 1 ; i <= 3 ; i++){
        printf("\n%d Nguyen Hoang Nemmmm", i);
        //blockScope
    }
    return 0;
}
