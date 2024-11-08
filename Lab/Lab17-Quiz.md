## โจทย์
ให้นักศึกษาเขียนโปรแกรมภาษาซีที่สามารถจัดการข้อมูลหนังสือในห้องสมุดได้ โดยโปรแกรมจะสามารถ:
- เพิ่มข้อมูลหนังสือใหม่
- ค้นหาหนังสือตามชื่อ
- แสดงรายชื่อหนังสือทั้งหมดที่มีในห้องสมุด

ข้อมูลของหนังสือแต่ละเล่มจะถูกเก็บใน structure โดยมีรายละเอียดดังนี้:
- Book ID (int) - รหัสหนังสือ
- Title (string) - ชื่อหนังสือ
- Author (string) - ผู้แต่ง
- Year (int) - ปีที่พิมพ์

ใช้ array ในการเก็บข้อมูลหนังสือทั้งหมด และเขียน function เพื่อจัดการการทำงานต่าง ๆ ที่เกี่ยวกับการเพิ่ม ค้นหา และแสดงข้อมูลหนังสือ

ข้อกำหนด
1. Function:
    - void addBook(Book books[], int *count); - สำหรับเพิ่มข้อมูลหนังสือใหม่
    - void searchBook(Book books[], int count, char title[]); - สำหรับค้นหาหนังสือตามชื่อ
    - void displayBooks(Book books[], int count); - สำหรับแสดงรายชื่อหนังสือทั้งหมด
2. โปรแกรมควรจะมีเมนูให้เลือกทำงาน โดยให้ผู้ใช้สามารถเลือก:
    - เพิ่มหนังสือใหม่
    - ค้นหาหนังสือตามชื่อ
    - แสดงรายชื่อหนังสือทั้งหมด
    - ออกจากโปรแกรม
3. ในกรณีการค้นหาหนังสือ:
    - หากพบหนังสือที่ค้นหา ให้แสดงข้อมูลของหนังสือนั้น
    - หากไม่พบ ให้แสดงข้อความว่า "Book not found."

## FIX CODE
```c++
void addBook(Book books[], int *count) ;
void searchBook(Book books[], int count, char title[]) ;
void displayBooks(Book books[], int count) ;
```

## TEST CASE : Adding a New Book
### Input
```bash
Choose an option: 1
Enter Book ID: 101
Enter Title: The C Programming Language
Enter Author: Brian W. Kernighan and Dennis M. Ritchie
Enter Year: 1978
```
### Output
```bash
Book added successfully!
```

## TEST CASE : Display All Books
### Input
```bash
Choose an option: 3
```
### Output
```bash
Book ID: 101
Title: The C Programming Language
Author: Brian W. Kernighan and Dennis M. Ritchie
Year: 1978
```

## TEST CASE : Search for a Book by Title (Book Found)
### Input
```bash
Choose an option: 2
Enter Title to Search: The C Programming Language
```
### Output
```bash
Book ID: 101
Title: The C Programming Language
Author: Brian W. Kernighan and Dennis M. Ritchie
Year: 1978
```

## TEST CASE : Search for a Book by Title (Book Not Found)
### Input
```bash
Choose an option: 2
Enter Title to Search: Introduction to Algorithms
```
### Output
```bash
Book not found.
```

## TEST CASE : Exit Program
### Input
```bash
Choose an option: 4
```
### Output
```bash
Exiting the program. Goodbye!
```

## มาตรฐานการตรวจตามหลักการเรียนรู้ของบลูม
| ลำดับการเรียนรู้ | เกณฑ์การวัด | คะแนน |
| -------- | -------- | -------- |
| รู้จำ | เห็นโครงสร้างของโค้ดโปรแกรมชัดเจน ได้มาตรฐาน | 1 pts |
| เข้าใจ | แก้ไขปัญหาได้ตามที่โจทย์กำหนด | 1 pts |
| ประยุกต์ใช้ | สามารถผ่านเงื่อนไขได้ทุก testcase | 1 pts |
| วิเคราะห์ | หาจุดผิดของโปรแกรมได้ | 1 pts |
| ประเมินค่า | โปรแกรมเสร็จสมบูรณ์ระยะเวลาที่กำหนด | 1 pts |
| สร้างสรรค์ | แก้ไขสถานการณ์ของโจทย์ | 1 pts |
||<p style='text-align: right !important;'>**รวม**</p>|**6 pts**|
