#include <stdio.h>
#include <stdlib.h>

/*
cntt: xu ly thong tin bang cong nghe
luu tru -> xu ly -> bao cao (report)

datatype: kieu du lieu
ky tu : char(Character) - 1 byte 'a' , '2'
so nguyen: int(integer) - 4 byte 4 , 1999 , 17.9 -> 17
so thuc: float(float) - 4 byte 17.9 -> 17.9
so thuc: double(long float) - 8 byte 9 , 17.9 , 123123123123123.123123123123

*/

//c la ngon ngu huong thu tuc
// procedure: tuan tu                   sequence: dong chay
//dau nhac he args
int main()
{
    //luu tru
    //luu ki tu dau tien trong ten cua minh
    //1. xac dinh kieu: char
    //2. xac dinh ten: dat co nghia
    //3. su dung cu phap cammbelCase: cu phap con lac da
    //          khong ky tu dac biet (tru $ _)
    //          khong co so o dau
    //          phai la danh tu
    //          = phep gan | assigment
    //
    //tao vi|ly|bien den luu

    char firstCharOfName = 'n';
    int age = 19;
    float pointOfMath = 7;
    double score = 9.8;

    //xem da luu gi
    //print format: in theo dinh dang, theo chuan
    printf("Anh Diep dep trai");
    //in ra ki tu dau tien trong ten cua minh
    printf("\n Ky tu dau tien la: %c",firstCharOfName);
    printf("\n Tuoi cua ban la: %i" , age);
    printf("\n Tuoi cua ban la: %d",age); //d : decimal
    //in ra diem toan
    printf("\n Diem toan cua ban la: %.2f", pointOfMath);
    //in ra score
    printf("\n Score: %.2lf",score);
    //in ra dia chi bien a
    printf("\n Dia chi cua age ne %u",&age);

    //ngoai le
    int number = 'A';
    char ch = 66;

    printf("\nNumber: %c", number);
    printf("\nChar: %c",ch);



    //tu duy lap trinh
    //tinh tong va thuong cua 2 bien so nguyen

    int number1 = 10;
    int number2 = 3;
    float result = (float)number1 / number2; //ep kieu
    printf("\n%d / %d: %f",number1 , number2 ,result);

    //swap : hoan vi
    //hoan vi 2 gia tri trong so nguyen

    int num1 = 15;
    int sting = 10;
    //c1:
    //int temp = sting; //temp = 10
    //sting = num1;     //sting = 15
    //num1 = temp;      //num1 = 10

    //c2:
    sting = sting + num1; //string 25
    num1 = sting - num1; //num1 = 25 - 15 = 10
    sting = sting - num1; //sting = 25 - 10 = 15


    printf("\nNumber1 = %d , Sting = %d", number1 , sting);

    return 0;
}
//return 0: tra ra 0 cho nguoi goi - window nhan duoc 0 thi chuong trinh dung roi
//null - biet kieu nhung khong biet gia tri
//void - khong co gi ca


//10 - enter '\n'
//32 - space ''
//47 '/'
//48 <-> 57 - Begin 0 End 9
//65 -> 90 (25 ki tu) A---Z
//97 <-> 122 (25 ki tu) a--z
