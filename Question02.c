#include <stdio.h>

int main(void)
{
    //Variable Declaration
    const int smallprice = 8;
    int TotalPrice = 0;
    int pizzanum;

    //Enter the number of pizza from user
    printf("Enter how many pizzas you want to order: ");
    scanf("%d",&pizzanum);

    //Check Number of Pizzas
    if (pizzanum > 1){
        printf("Check our multi-pizza deals.");
    }
    else{
        TotalPrice += smallprice;
        printf("Your Total is $%d",TotalPrice);
    }
    return 0;
}
