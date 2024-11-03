## โจทย์
จงจัดโค้ดโปรแกรมให้อยู่ในรูปแบบมาตรฐาน Codex และแก้ไข Bug ของโปรแกรม

## FIX CODE
```c++
#include <stduio.h>
#include <math.h>

int isPrime(int num) {if(num<2)return 0;
for (int i = 2; i <= sqrt(num); i++) {
if (num % i == 0)return 0;}return 1;}
  int main() {
 int n;
    printf("Enter N : ");scanf("%d",&n);
int arr[n]; for(int i=0;i<n;i++){
    printf("Enter value[%d] : ",i);
  scanf("%d",&arr[i]);
      }
    printf("Index:  ");
   for (int i = 0;i < n;i++){
 printf("%2d ", i);
}printf("\n");
         printf("Array:  ");
  for(int i=0;i<n;i++){if (isPrime(arr[i]))
printf("%2d ", arr[i]); 
    else
printf("%2s ", "#"); 
    }
    printf("\n");return 0;
        }
```

## TEST CASE
### Input
```bash
Enter N: 4
Enter value[0]: 5
Enter value[1]: 7
Enter value[2]: 2
Enter value[3]: 1
```
### Output
```bash
Index:   0  1  2  3 
Array:   5  7  2  # 
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
