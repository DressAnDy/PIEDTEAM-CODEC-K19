#include <stdio.h>
#include <stdlib.h>

void printOdd();
int main()
{
    printOdd();
    return 0;
}

void printOdd(){
    int n;
    printf("\nEnter n: ");
    scanf("%d", &n);
    fflush(stdin);

    for(int i = 1; i <= n ; i++){
        if(i % 2 != 0){
            printf("%5d", i);
        }
    }
}
