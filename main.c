#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf
#define B 200
#define F 50
#define P 500
#define S 140

int main()
{
    char order;
    int quant;
    float totalq;

    p("\n           MENU CODE:");
    p("                 PRICE:");
    p("\n\n            B = Burger");
    p("                 Rs. 200");
    p("\n            F = French Fries");
    p("           Rs. 50");
    p("\n            P = Pizza");
    p("                  Rs. 500");
    p("\n            S = Sandwiches");
    p("             Rs. 140");
    p("\n\n          ************************************************************");
    p("\n Enter order: ");
    s("%c", &order);
    p("\n Quantity: ");
    s("%d", &quant);

    switch(order){
    case 'B':
    case 'b':
             totalq=quant*B;
             p("\n Total cost: %.2f", totalq);
             break;
    case 'F':
    case 'f':
             totalq=quant*F;
             p("\n Total cost: %.2f", totalq);
             break;
    case 'P':
    case 'p':
             totalq=quant*P;
             p("\n Total cost: %.2f", totalq);
             break;
    case 'S':
    case 's':
             totalq=quant*S;
             p("\n Total cost: %.2f", totalq);
             break;
    default: p("\n INVALID ENTRY!");
    }

getch();
}
/*The program inputs the type of food and quantity. It finally displays the total charges for the order according to the following criteria:
    Burger=Rs. 200
    French fries= Rs. 50
    Pizza= Rs. 500
    Sandwiches= Rs. 140*/

