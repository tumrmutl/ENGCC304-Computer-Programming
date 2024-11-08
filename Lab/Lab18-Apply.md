## โจทย์
เขียนโปรแกรมภาษา C ที่สามารถจัดการข้อมูลคะแนนนักเรียนได้ โดยที่โปรแกรมจะ:
1. อ่านข้อมูลคะแนนนักเรียนจากไฟล์ scores.txt ซึ่งไฟล์นี้จะมีข้อมูลในรูปแบบ:
```bash
student_id score
101 85
102 90
103 78
...
```
โดยที่ student_id คือรหัสนักเรียน และ score คือคะแนนของนักเรียน (ไฟล์อาจมีจำนวนนักเรียนไม่เกิน 100 คน)
2. คำนวณหาคะแนนสูงสุด (Max) และคะแนนต่ำสุด (Min) โดยใช้ pointer ในการเข้าถึงข้อมูลใน array
3. เรียงลำดับคะแนนของนักเรียนจากต่ำไปสูง (Ascending Order) และแสดงผลในหน้าจอ
4. ให้ผู้ใช้สามารถป้อน `student_id` เพื่อค้นหาคะแนนของนักเรียนนั้น ๆ โดยใช้การ binary search เพื่อเพิ่มประสิทธิภาพ

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

## FIX CODE
```c++
void loadScores(char *filename, int student_ids[], int scores[], int *count);
void findMinMax(int scores[], int count, int *min, int *max);
void sortScores(int student_ids[], int scores[], int count);
int binarySearch(int student_ids[], int scores[], int count, int student_id);
```

## TEST CASE
### Input
```bash
-
```
### Output
```bash
-
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
