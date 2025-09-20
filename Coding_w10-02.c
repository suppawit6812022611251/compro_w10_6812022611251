#include <stdio.h>

int main() {
    float scores[3][3]; // กำหนดตัวแปร scores เป็น array 2 มิติ อย่างละ 3 ค่า
    float sum_student[3]    // กำหนดตัวแปร sum_student เป็น array จำนวน 3 ค่า
        = {0, 0, 0};    // ค่าเริ่มต้นเป็น 0
    float sum_subject[3]    // กำหนดตัวแปร sum_subject เป็น array จำนวน 3 ค่า
        = {0, 0, 0};    // ค่าเริ่มต้นเป็น 0
    char * subjects[] = {"Math", "Physics", "Chemistry"};   // กำหนดตัวแปร subjects เป็น array ของ string
    int a, b;   // กำหนดตัวแปร a,b

    for(a = 0; a < 3; a++) {    // ลูป for กำหนดให้ a = 0 ถ้า a < 3 ให้เพิ่มค่า a ทีละ 1
        printf("Enter scores for student %d:\n", a + 1);    // แสดงผลข้อความ Enter scores for student ...:
        for(b = 0; b < 3; b++) {    // ลูป for กำหนดให้ b = 0 ถ้า b < 3 ให้เพิ่มค่า b ทีละ 1
            printf("  %s: ", subjects[b]);  // แสดงผลข้อความ ...:
            scanf("%f", &scores[a][b]);  // รับค่าตัวแปร scores[a][b]
            sum_student[a] += scores[a][b]; // หาผลรวมคะแนนของนักเรียนคนที่ a
            sum_subject[b] += scores[a][b]; // หาผลรวมคะแนนของวิชาที่ b
}
}
    printf("\nScore Table:\n"); // แสดงผลข้อความ Score Table:
    printf("Student Math Physics Chemistry \n");    // แสดงผลข้อความ Student Math Physics Chemistry
    for(a = 0; a < 3; a++) {    // ลูป for กำหนดให้ a = 0 ถ้า a < 3 ให้เพิ่มค่า a ทีละ 1
        printf("  %d     ", a + 1);  // แสดงผลข้อความ ...
        for(b = 0; b < 3; b++) {    // ลูป for กำหนดให้ b = 0 ถ้า b < 3 ให้เพิ่มค่า b ทีละ 1
            printf("%.2f   ", scores[a][b]);    // แสดงผลค่าตัวแปร scores[a][b] โดยมีทศนิยม 2 ตำแหน่ง
}
     printf("\n");  // ขึ้นบรรทัดใหม่
}
    printf("\nAverage per subject: \n");    // แสดงผลข้อความ Average per subject:
    for(b = 0; b < 3; b++) {    // ลูป for กำหนดให้ b = 0 ถ้า b < 3 ให้เพิ่มค่า b ทีละ 1
        printf("%s: %.2f\n", subjects[b], sum_student[b] / 3.0);    // แสดงผลข้อความ ...: ... โดยมีทศนิยม 2 ตำแหน่ง
}
    return 0;   // คืนค่า 0
}