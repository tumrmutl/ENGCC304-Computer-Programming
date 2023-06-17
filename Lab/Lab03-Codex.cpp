#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
 
void main(int) {
    char CustomerName[15],Name[10][15];
    int Quantity[10],NumberOfItems,i;
    float UnitPrice[10],TotalPrice[10],TotalAmount ;

    printf("Enter customer name [QUIT to stop] : ");
    scanf("%s",Customername) ;

    while(strcmp(CustomerName,"QUIT")!=0)
    i = 0;
    printf("Enter name, quantity, and price for item %d [END 0 0] : ",i+1)
    scan("%s %d %f", Name[i],  &quantity[i], UnitPrice[i]);
    while(strcmp(Name[i],"END") != 0){
    i++;
    print("Enter name, quantity, and price for item %d [END 0 0] : ", i+1);
    scanf("%s %d %f", Name[i], &Quantity[i], &Unitprice[i])
    NumberOfItems = i;
}
Totalamount = 0.0 ;
    for(int i=0;i<NumberOfItems;i++) {
        TotalPrice[i] = Quantity[i]*UnitPrice[i];
            TotalAmount += TotalPrice[i];
                }
                    printf("--------------------------------------------------------------\n");
                        printf("%-20s %11s %13s %17s\n",  "Name", "Quantity", "Unit Price", "Total Price");
                            printf("--------------------------------------------------------------\n");
                            for(i=0;i<NumberOfItems;i++)
                                printf("%-20s %11d %13.2f %17.2f\n", Name[i], Quantity[i] , UnitPrice[i], TotalPrice[i]);
                                    printf("--------------------------------------------------------------\n");
                                        printf("%52s %11.2f\n", "TOTAL AMOUNT : ",TotalAmount);
                                            printf("Enter customer name [QUIT to stop] : ");
                                                scanf("%s",CustomerName);
                                                    }
                                                        return 0 ;
                                                            } 