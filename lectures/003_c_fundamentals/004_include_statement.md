# Include Statement
เป็น preprocessor directive ซึ่งจะนำเข้าชุดคำสั่งจากโปรแกรมอื่นตามที่เราระบุ มาไว้ในโปรแกรมเรา

<mark>เป็นการบอกคอมไพลเลอร์ว่า โปรแกรมของเรา จำเป็นต้องการใช้งานบางฟังก์ชันจากไฟล์ header ที่่ระบุ</mark>

# Header File
เป็นไฟล์ที่ใช้ ประกาศ (declare) ฟังก์ชัน, ค่าคงที่, struct, typedef ฯลฯ โดยไฟล์ .c จะเป็นตัว implement  (define) การทำงานจริง และโปรแกรม/ไฟล์ .c อื่น ๆ สามารถเรียกใช้งานผ่าน header file ได้

<mark>เปรียบเสมือน interface ใน java โดยเป็นการทำสัญญาว่าไฟล์นี้จะมีฟังก์ชันที่ระบุแน่นอน แต่ไม่ต้องรู้การทำงานด้านใน</mark>

**ตัวอย่าง header file**

    // typedefs
    typedef struct names_st names;

    // function prototype
    void get_names(names *);
    void show_names(const names *);
    char * s_gets(char * st, int n);