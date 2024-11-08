## โจทย์
จงเขียนฟังก์ชันการตัดเกรดในแต่ละรายวิชาของนักเรียนจำนวน 3 คน โดยนักเรียนแต่ละคนจะมีข้อมูลดังต่อไปนี้
ชื่อ, นักศักศึกษา, คะแนนในวิชาที่ 1, คะแนนในวิชาที่ 2, คะแนนในวิชาที่ 3, คะแนนในวิชาที่ 4, คะแนนในวิชาที่ 5
แสดงได้ดังโครงสร้างข้อมูลต่อไปนี้

## FIX CODE
```c++
struct Student {
    char Name[20] ;
    char ID[5] ;
    float ScoreSub1 ;
    float ScoreSub2 ;
    float ScoreSub3 ;
    float ScoreSub4 ;
    float ScoreSub5 ;
} typedef S ;
```

## TEST CASE
### Input
```bash
Enter the details of 3 students :
Student 1:
Name: 
John Doe
ID: 
101
Scores in Subject 1: 
77
Scores in Subject 2: 
64
Scores in Subject 3: 
66
Scores in Subject 4: 
54
Scores in Subject 5: 
56

Student 2:
Name: 
Jane Smith
ID: 
102
Scores in Subject 1: 
43
Scores in Subject 2: 
70
Scores in Subject 3: 
76
Scores in Subject 4: 
77
Scores in Subject 5: 
80

Student 3:
Name: 
Mark Johnson
ID: 
103
Scores in Subject 1: 
77
Scores in Subject 2: 
74
Scores in Subject 3: 
76
Scores in Subject 4: 
81
Scores in Subject 5: 
69
```
### Output
```bash
Student 1:
Name: John Doe
ID: 101
Scores: 77 64 66 54 56
Grades: B+ C C+ D D+
Average Scores: 63.4

Student 2:
Name: Jane Smith
ID: 102
Scores: 43 70 76 77 80
Grades: F B B+ B+ A
Average Scores: 69.2

Student 3:
Name: Mark Johnson
ID: 103
Scores: 77 74 76 81 69
Grades: B+ B B+ A C+
Average Scores: 75.4
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
