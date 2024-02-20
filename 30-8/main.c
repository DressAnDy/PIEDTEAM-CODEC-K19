#include <stdio.h>
#include <stdlib.h>


float geometric(int start , int end);
int main()
{
    printf("%f" , geometric(2,5));
    return 0;
}

float geometric(int start , int end){
    float count = 0;
    float fac = 1;
    for(int i = start ; i <= end ; i++){
        fac *= i;
        count++;
    }
    return pow(fac, 1.0/count);
}
