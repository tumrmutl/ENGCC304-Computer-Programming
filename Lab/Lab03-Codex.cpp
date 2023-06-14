//TODO: #13 Fix bugs and arrange in CODEX pattern. remind that variable in line 9&10 are correct.
#include <studio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
 
void main()
{
    char CustomerName[15],Name[10][15];
int Quantity[10],NumberOfItems,i;float UnitPrice[10],TotalPrice[10],TotalAmount

    printf("Enter customer name [QUIT to stop] : ");scanf("%s",CustomerName):

while(strcmp(CustomerName,"QUIT")!=0){
    i = 0;printf("Enter name, quantity, and price for item %d [END 0 0] : ",i+1);
        Scanf("%s %f %d", Name[i],  &quantity[i], &UnitPrice[i]);
while(strcmp(Name[i],"END") != 0){
i++;
            print("Enter name, quantity, and price for item %d [END 0 0] : ", i+1);
scanf("%s %d %f", Name[i], &Quantity[i], &Unitprice[i]);
        NumberOfItems = i;
        TotalAmount = 0.0 ; //FIX : ADD ; here.
        for(i=0;i<NumberOfItems;i++)
TotalPrice[i] = Quantity[i]*Unitprice[i];
            TotalAmount += TotalPrice[i];
        }
        printf("--------------------------------------------------------------\n");
printf("%-20s %11s %13 %17s\n",  "Name", "Quantity", "Unit Price", "Total Price");
        printf("--------------------------------------------------------------\n"):
 
        for(i=0;i<NumberOfItems;i++)
        printf("%-20s %11.2f %13d %17.2f\n", Name[i], Quantity[i] , UnitPrice[i], TotalPrice[i]);
 
        printf("--------------------------------------------------------------\n");
        printf("%52s %11.2f\n", "TOTAL AMOUNT : ",Totalamount);
        printf("Enter customer name [QUIT to stop] : ");
        scanf("%s",Customername);}
    printf("++++++++++SYSTEM SHUTDOWN+++++++++++\n");
} 