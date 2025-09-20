#include <stdio.h>
#include <string.h>

int main() {    
    char name1[30], name2[30];  // กำหนดตัวแปร name1, name2 เป็น array ของ char ขนาด 30 ตัวอักษร

    printf("Enter name of customer 1: ");   // แสดงผลข้อความ Enter name of customer 1:
    fgets(name1, sizeof(name1), stdin); // รับค่าตัวแปร name1
    name1[strcspn(name1, "\n")] = 0;    // ลบ newline character ออกจาก string

    printf("Enter name of customer 2: ");   // แสดงผลข้อความ Enter name of customer 2:
    fgets(name2, sizeof(name2), stdin); // รับค่าตัวแปร name2
    name2[strcspn(name2, "\n")] = 0;    // ลบ newline character ออกจาก string

    if(strcmp(name1, name2) == 0) {  // ถ้าค่าตัวแปร name1 เท่ากับ name2
        printf("Both of your names are the same, which is %s.\n", name1);   // แสดงผลข้อความ Both of your names are the same, which is ...
        printf("The length of the name is %u characters.\n", strlen(name1));    // แสดงผลข้อความ The length of the name is ... characters.
}   
    else {  // ถ้าค่าตัวแปร name1 ไม่เท่ากับ name2
        printf("Customer 1: %s (%u characters)\n", name1, strlen(name1));   // แสดงผลข้อความ Customer 1: ... (... characters)
        printf("Customer 2: %s (%u characters)\n", name2, strlen(name2));   // แสดงผลข้อความ Customer 2: ... (... characters)
}
    return 0;   // คืนค่า 0
}