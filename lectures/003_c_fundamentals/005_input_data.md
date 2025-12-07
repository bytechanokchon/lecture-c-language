# Input Data
เราสามารถรับข้อมูลจากผู้ใช้ผ่าน terminal ได้ด้วยฟังก์ชัน scanf() โดยสามารถอ่านได้ทั้งข้อความและไฟล์
โดยสามารถระบุรูปแบบของข้อมูลที่ต้องการได้ดังนี้
- %s    - string
- %d    - integer
- %c    - character
- %f    - float
- %lf   - double (long float)

โดย scanf จะใช้หลักการ pointer ไปที่ variable

**กฏ 3 ข้อเกี่ยวกับ scanf**
1. จะส่งคืนจำนวนข้อมูลที่สามารถอ่านได้เสมอ
2. หากตัวแปรที่นำมาใช้รับข้อมูล เป็นชนิดตัวแปรพื้นฐาน (int, char, float) จะต้องมีเครื่องหมาย & ที่ชื่อตัวแปรเสทอ
3. หากใช้งานฟังก์ชันเพื่ออ่าน string และนำไปเก็บไว้ใน char[] ไม่ต้องใช้ &

หากต้องการนำเข้าข้อมูลหลาย ๆ ตัวพร้อมกันในบรรทัดเดียว scanf จะแบ่งข้อมูลออกจากกันด้วย whitespace (newlines, taps, spaces)

**ตัวอย่าง**

    #include<stdio.h>

    int main()
    {
        char str[100];
        int i;

        printf("Enter a value:");
        scanf("%s %d", str, &i);

        printf("\nYou entered: %s %d", str, i);

        return 0;
    }