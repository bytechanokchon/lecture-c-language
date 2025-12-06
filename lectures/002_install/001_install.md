# Software Install
ในระบบปฏิบัติการ windows จะต้องติดตั้ง
1. C Compiler (Cygwin)
2. Visual Studio Code

## ขั้นตอนการติดตั้ง
- ดาวน์โหลด [Cygwin](https://www.cygwin.com/)
- ในหน้าเลือกแพ็คเกจของ Cygwin
    - เปลี่ยนตัวเลือก view เป็น Full
    - ค้นหาแพ็คเกจที่ต้องการ โดยจะต้องเลือกแพ็คเกจดังนี้
        - gcc-core (เลือก version ล่าสุด)
        - gdb (เลือก version ล่าสุด)
        - make (เลือก version ล่าสุด)
    - เมื่อติดตั้งเสร็จ ทำการเพิ่ม cygwin path (C:\cygwin64\bin) ไปที่ windows environment variable