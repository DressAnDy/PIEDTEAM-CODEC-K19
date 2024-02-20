#include <stdio.h>
#include <stdlib.h>

//28-checkPrimeV3
//không đầu vào , có đầu ra
int checkPrimeV3();
int main()
{
    char result = checkPrimeV3(); //call
    if(result == 1){
        printf("\nSNT");
    }else{
        printf("\nKhong phai SNT");
    }
    return 0;

}

int checkPrimeV3(){ //build
    int number;
    printf("\nEnter number: ");
    scanf("%d", &number);
    fflush(stdin);

    if(number >= 2){
        for(int i = 2 ; i <= number - 1 ; i++){
            if(number % i == 0){
                return 0;
            }
        }
        return 1;
    }else{
        return 0;
    }
}
