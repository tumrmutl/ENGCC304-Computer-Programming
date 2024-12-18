## โจทย์
เขียนโปรแกรมภาษา C ที่สามารถจัดการข้อมูลคะแนนนักเรียนได้ โดยที่โปรแกรมจะ:
<br /><br />1. อ่านข้อมูลคะแนนนักเรียนจากไฟล์ scores.txt ซึ่งไฟล์นี้จะมีข้อมูลในรูปแบบ:
```bash
student_id score
101 85
102 90
103 78
...
```
โดยที่ student_id คือรหัสนักเรียน และ score คือคะแนนของนักเรียน (ไฟล์อาจมีจำนวนนักเรียนไม่เกิน 100 คน)
<br /><br />2. คำนวณหาคะแนนสูงสุด (Max) และคะแนนต่ำสุด (Min) โดยใช้ pointer ในการเข้าถึงข้อมูลใน array
<br />3. เรียงลำดับคะแนนของนักเรียนจากต่ำไปสูง (Ascending Order) และแสดงผลในหน้าจอ
<br />4. ให้ผู้ใช้สามารถป้อน `student_id` เพื่อค้นหาคะแนนของนักเรียนนั้น ๆ โดยใช้การ binary search เพื่อเพิ่มประสิทธิภาพ

### ข้อกำหนด
- สร้างฟังก์ชันดังต่อไปนี้:
    - `void loadScores(char *filename, int student_ids[], int scores[], int *count);` สำหรับอ่านข้อมูลจากไฟล์ `scores.txt` และเก็บข้อมูลใน array โดยใช้ pointer
    - `void findMinMax(int scores[], int count, int *min, int *max);` สำหรับหาค่าต่ำสุดและสูงสุดของคะแนนใน array
    - `void sortScores(int student_ids[], int scores[], int count);` สำหรับเรียงลำดับคะแนนจากต่ำไปสูง (เรียงลำดับ `student_ids` ตามไปด้วย)
    - `int binarySearch(int student_ids[], int scores[], int count, int student_id);` สำหรับค้นหาคะแนนของนักเรียนโดยใช้ binary search
- โปรแกรมจะแสดงเมนูให้ผู้ใช้เลือก:
    - โหลดข้อมูลคะแนนจากไฟล์
    - แสดงคะแนนสูงสุดและต่ำสุด
    - เรียงลำดับคะแนนจากต่ำไปสูง
    - ค้นหาคะแนนตามรหัสนักเรียน
    - ออกจากโปรแกรม

### ตัวอย่างการใช้งานโปรแกรม
```
Student Score Management
1. Load Scores from File
2. Show Min and Max Scores
3. Sort Scores in Ascending Order
4. Search Score by Student ID
5. Exit
Choose an option: 1

Scores loaded successfully!

Student Score Management
1. Load Scores from File
2. Show Min and Max Scores
3. Sort Scores in Ascending Order
4. Search Score by Student ID
5. Exit
Choose an option: 2

Minimum Score: 65
Maximum Score: 92

Student Score Management
1. Load Scores from File
2. Show Min and Max Scores
3. Sort Scores in Ascending Order
4. Search Score by Student ID
5. Exit
Choose an option: 3

Sorted Scores:
Student ID: 103, Score: 65
Student ID: 101, Score: 78
Student ID: 102, Score: 90
...

Student Score Management
1. Load Scores from File
2. Show Min and Max Scores
3. Sort Scores in Ascending Order
4. Search Score by Student ID
5. Exit
Choose an option: 4

Enter Student ID to Search: 102
Score for Student ID 102: 90

Student Score Management
1. Load Scores from File
2. Show Min and Max Scores
3. Sort Scores in Ascending Order
4. Search Score by Student ID
5. Exit
Choose an option: 5

Exiting the program. Goodbye!
```

### แนวทางการทำงาน
- โหลดข้อมูลจากไฟล์โดยใช้ฟังก์ชัน loadScores และเก็บข้อมูลใน array
- ใช้ pointer เพื่อจัดการ array ในฟังก์ชัน findMinMax เพื่อหาคะแนนสูงสุดและต่ำสุด
- ใช้การเรียงลำดับข้อมูลด้วยฟังก์ชัน sortScores
- ค้นหาคะแนนของนักเรียนด้วยฟังก์ชัน binarySearch เพื่อเพิ่มประสิทธิภาพในการค้นหา

### ข้อมูลในไฟล์
ไฟล์ score.txt
```bash
101 85
102 90
103 78
104 92
105 65
```

## FIX CODE
```c++
void loadScores(char *filename, int student_ids[], int scores[], int *count);
void findMinMax(int scores[], int count, int *min, int *max);
void sortScores(int student_ids[], int scores[], int count);
int binarySearch(int student_ids[], int scores[], int count, int student_id);
```

## TEST CASE : Load Scores from File
### Input
```bash
Choose an option: 1
```
### Output
```bash
Scores loaded successfully!
```

## TEST CASE : Show Min and Max Scores
### Input
```bash
Choose an option: 2
```
### Output
```bash
Minimum Score: 65
Maximum Score: 92
```

## TEST CASE : Sort Scores in Ascending Order
### Input
```bash
Choose an option: 3
```
### Output
```bash
Sorted Scores:
Student ID: 105, Score: 65
Student ID: 103, Score: 78
Student ID: 101, Score: 85
Student ID: 102, Score: 90
Student ID: 104, Score: 92
```

## TEST CASE : Search Score by Student ID (Student Found)
### Input
```bash
Choose an option: 4
Enter Student ID to Search: 102
```
### Output
```bash
Score for Student ID 102: 90
```

## TEST CASE : Search Score by Student ID (Student Not Found)
### Input
```bash
Choose an option: 4
Enter Student ID to Search: 999
```
### Output
```bash
Student ID 999 not found.
```

## TEST CASE : Exit Program
### Input
```bash
Choose an option: 5
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
