    #include <stdio.h>
    #include <stdlib.h>

    /*Nhập vào 1 số nguyen number
    kiểm tra xem số đó có phải là số nguyên tố không ?
    ------
    số nguyên tố là số chia hết cho 1 và chính nó
    ------
    số nguyên tố là số từ 2 trở lên, nếu mà number < 2 thì không phải số nguyên tố
    còn nếu từ 2 trở lên thì 'có thể' là số nguyên tố.
    ------
    Số nguyên tố là số không chia hết cho số nào từ 2 đến tiệm cận của nó
    */
    /*
    int main()
    {
        int n;
        printf("Enter n: ");
        scanf("%d", &n);

        if(n < 2){
            printf("So nay khong hop le");
        }else{
            for(int i = 2 ; i < n - 1 ; i++){
                if(n % i == 0){
                    printf("Day khong phai so nguyen to");
                    return 0;
                }

    */



    int main()
    {
        int number;
        printf("\nInput a numer: ");
        scanf("%d", &number);

        if(number >= 2){
                //Chạy từ 2 tới tiệm cận của number
            for(int i = 2 ; i <= number - 1 ; i++){
                if(number % i == 0){
                    printf("\n%d is not prime", number);
                    return 0;
                }
            }
            printf("\n%d is prime", number);

        }else{
            printf("\n%d is not prime", number);
        }
    return 0;
    }
