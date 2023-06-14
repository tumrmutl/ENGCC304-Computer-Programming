/*
    ผู้บริหารต้องการวิเคราะห์พัฒนาการของพนักงานในบริษัทและศักยภาพของพนักงานจากทักษะที่พัฒนาขึ้นของแต่ละคน ซึ่งแปลงค่าความสามารถของแต่ละคนออกมาเป็นค่า EXP โดยแบ่งอัตราการขึ้นเงินเดือนของแต่ละคนดังนี้
    EXP อยู่ในช่วง 0-1,000 		จะได้รับเงินเดือน x1
	EXP อยู่ในช่วง 1,000-2,000 	จะได้รับเงินเดือน x1.2
	EXP อยู่ในช่วง 2,000-3,000 	จะได้รับเงินเดือน x1.4
	EXP อยู่ในช่วง 3,000-4,000 	จะได้รับเงินเดือน x1.6
	EXP อยู่ในช่วง 4,000-5,000 	จะได้รับเงินเดือน x1.8
	EXP อยู่ในช่วง 5,000 ขึ้นไป	จะได้รับเงินเดือน x2
    โดยผู้บริหารมอบหมายให้ HR เป็นคนกรอกข้อมูลพนักงานในบริษัทและประเมินค่า EXP ของพนักงานแต่ละคน พร้อมสรุปจำนวนคนที่ได้รับเงินเดือนในแต่ละขั้น และระบุคนชื่อคนที่ได้เงินเดือนเยอะที่สุด และคนที่เงินเดือนน้อยที่สุด (หากกรอกเลข -1 ในช่อง Name จะถือเป็นการหยุดโปรแกรมและเตรียมแสดงผล)
    
    Test case:
        Employee 1 Name : 
            Atom
        EXP : 
            2500
        Employee 2 Name : 
            Aom
        EXP : 
            3230
        Employee 3 Name : 
            Aim
        EXP : 
            4560
        Employee 4 Name : 
            Jom
        EXP : 
            5505
        Employee 5 Name : 
            On
        EXP : 
            950
        Employee 6 Name : 
            Oom
        EXP : 
            3500
        Employee 7 Name : 
            Ky
        EXP : 
            2600
        Employee  Name : 
            -1
    Output:
        **** Salary Result ****
        x1.0 count 1
        x1.2 count 0
        x1.4 count 2
        x1.6 count 2
        x1.8 count 1
        x2.0 count 1
        The Employee get x2.0 is Jom
        The Employee get x1.0 is On

    Test case:
        Employee 1 Name : 
            Aey
        EXP : 
            9956
        Employee 2 Name : 
            J
        EXP : 
            4900
        Employee 3 Name : 
            A
        EXP : 
            4560
        Employee 4 Name : 
            Orio
        EXP : 
            200
        Employee 5 Name : 
            Vistra
        EXP : 
            1656
        Employee 6 Name : 
            Oh
        EXP : 
            2300
        Employee  Name : 
            -1
    Output:
        **** Salary Result ****
        x1.0 count 1
        x1.2 count 1
        x1.4 count 1
        x1.6 count 0
        x1.8 count 2
        x2.0 count 1
        The Employee get x2.0 is Aey
        The Employee get x1.0 is Orio
*/

