#include <stdio.h>

int main() {
    int a, b;   //กำหนดตัวแปร a,b
    float score, sum = 0, avg;  //กำหนดตัวแปร score,sum,avg
    printf("Enter number of student: ");    //แสดงผลข้อความ Enter number of student:
    scanf("%d", &a);    //รับค่าตัวแปร a
    
    printf("Enter %d student scores (one per line): \n", a);    //แสดงผลข้อความ Enter ... student scores (one per line):
    for(b = 1; b <= a; b++ ) {  //ลูป for กำหนดให้ b = 1 ถ้า b <= a ให้เพิ่มค่า b ทีละ 1
        printf("Score %d: ", b);    //แสดงผลข้อความ Score ...:
        scanf("%f", &score);    //รับค่าตัวแปร score
        sum += score;   
    }avg = sum / a; //หาค่าเฉลี่ย

    printf("\nNumber of students = %d\n", a);   //แสดงผลข้อความ Number of students = ...
    printf("Average score = %.2f\n", avg);  //แสดงผลข้อความ Average score = ...

    return 0;   //คืนค่า 0
}