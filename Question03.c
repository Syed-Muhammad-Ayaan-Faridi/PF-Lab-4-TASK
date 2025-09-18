#include <stdio.h>

int main(void)
{
    //Variable Declaration
    const int singleprice = 8;
    const int doubleprice = 15;
    const int tripleprice = 21;
    int TotalPrice = 0;
    int pizzanum;

    //Enter the number of pizza from user
    printf("Enter how many pizzas you want to order: ");
    scanf("%d",&pizzanum);

    //Print Total cost of Pizza
    switch (pizzanum)
    {
    case 1:
        TotalPrice = TotalPrice + singleprice;
        printf("Your Total is $%d \n",TotalPrice);
        break;
    case 2:
        TotalPrice += doubleprice;
        printf("Your Total is $%d \n",TotalPrice);
        break;
    case 3:
        TotalPrice += tripleprice;
        printf("Your Total is $%d \n",TotalPrice);
        break;
    }
    return 0;
}