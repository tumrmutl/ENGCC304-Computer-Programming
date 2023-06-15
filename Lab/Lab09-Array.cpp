/*
    จงเขียนโปรแกรม POS อย่างง่าย เพื่อสั่งซื้อสินค้าจากร้านขายของชำ โดยที่
    - โปรแกรมสามารถรับชื่อของผู้ซื้อได้
    - โปรแกรมสามารถกรอกค่าไปเรื่อยๆ ได้ จนกว่าจะเจอคำสั่งว่า END 0 0 จึงจะหยุดการรับคำสั่งสินค้า และจะทำการสรุปรายการคำสั่งซื้อว่าผู้ซื้อได้สั่งซื้อสินค้าอะไรไปบ้าง ในราคาเท่าไหร่
    - ในขั้นตอนการสอบถามชื่อ หากผู้ใช้กรอกว่า QUIT หรือ quit ให้โปรแกรมหยุดการทำงานทันที

    Test case:
        Enter customer name [ QUIT to stop ] :
            Sam
        Enter name, quantity, and unit price for item 1 : 
            Jeans 100 400.00
        Enter name, quantity, and unit price for item 2 : 
            Shirt 200 325.25
        Enter name, quantity, and unit price for item 3 : 
            Socks 1000 80.50
        Enter name, quantity, and unit price for item 4 : 
            END 0 0
        -----------------------------------------------
        Name      Unit Price     Quantity  Total Price
        -----------------------------------------------
        Jeans      400.00        100        40000.00
        Shirt      325.25        200        65050.00
        Socks       80.50       1000        80500.00
        -----------------------------------------------
                              TOTAL AMOUNT: 18550.00

        Enter customer name [ QUIT to stop ] :
            Alice
        Enter name, quantity, and unit price for item 1 : 
            Pencil 50 8.25
        Enter name, quantity, and unit price for item 2 : 
            Ruler 75 10.50
        Enter name, quantity, and unit price for item 4 : 
            END 0 0
        -----------------------------------------------
        Name      Unit Price     Quantity  Total Price
        -----------------------------------------------
        Pencil       8.25         50          415.50
        Ruler       10.50         75          787.50
        -----------------------------------------------
                              TOTAL AMOUNT:  1500.00

        Enter customer name [ QUIT to stop ] :
            QUIT
*/

#include <stdio.h>

int main() {

    //--| YOUR CODE HERE

    return 0 ;
}//end main function