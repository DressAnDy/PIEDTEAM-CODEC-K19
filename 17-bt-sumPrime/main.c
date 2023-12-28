#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, end;
    int isPrime = 1;
    int sumOfPrime = 0;
    printf("\nEnter start: ");
    scanf("%d", &start);

    printf("\nEnter end: ");
    scanf("%d", &end);

    for(int number = start ; number <= end ; number++){
        isPrime = 1;
        if(number >= 2){
            for(int i = 2 ; i <= number - 1 ; i++){
                if(number % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                sumOfPrime += number;
            }
        }
    }
    printf("\nSum of Prime: %d ", sumOfPrime);
    return 0;
}
