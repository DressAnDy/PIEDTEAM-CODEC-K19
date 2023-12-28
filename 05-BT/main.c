#include <stdio.h>
int main(){
    int e1,e2,e3;
    printf("\nPls , enter 3 edges");

    printf("\nEdges 1: ");
    scanf("%d", &e1);

    printf("\nEdges 2: ");
    scanf("%d", &e2);

    printf("\nEdges 3: ");
    scanf("%d", &e3);


    if(e1 + e2 > e3 && e1 + e3 > e2 && e2 + e3 > e1){
        if( e1 == e2 || e2 == e3 || e3 == e1 ){
            if(e1 == e2 && e2 == e3){
                printf("This is an equilateral triangle");
            }else if( e1*e1 + e2*e2 == e3*e3 || e1*e1 + e3*e3 == e2*e2 || e2*e2 + e3*e3 == e1*e1 ){
                printf("This is an isosceles right triangle");
            }else{
                printf("This is an isosceles triangle");
            }
        }else if( e1*e1 + e2*e2 == e3*e3 || e1*e1 + e3*e3 == e2*e2 || e2*e2 + e3*e3 == e1*e1 ){
            printf("This is a right triangle ");
        }else{
            printf("This is a regular triangle");
        }
    }else{
        printf("This is not triangle");
    }
    return 0;
}
