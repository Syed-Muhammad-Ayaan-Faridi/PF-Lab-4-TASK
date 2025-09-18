#include <stdio.h>
int main(void)
{
    // Declaration of Constants and Variable
    const int Smallprice = 8;           // Cost of a single small Pizza
    const int Mediumprice = 18;         // Cost of a single Medium Pizza
    const int Largeprice = 30;          // Cost of a single Large Pizza
    const int ThinCrust = 1;            // Cost of a Thin Crust Pizza
    const int StuffedCrust = 2;         // Cost of a Stuffed Crust Pizza
    const float TimeDiscount = 0.1;     // 10% discount
    float TotalPrice = 0.0;             // Final Bill
    char PizzaSize;                     // Small/Large/Medium
    int Number_of_Pizza;                // 1/2/3
    float TimeDiscountedPrice = 0.0;          //Store the Discount given based on Time
    int Time;                           // 0-23


    // Input from User
    printf("Enter the Size of Pizza [Small(S)/Medium(M)/Large(L)]: ");
    scanf(" %c", &PizzaSize);
    printf("Enter Number of Pizzas you want to Order (1/2/3): ");
    scanf("%d", &Number_of_Pizza);
    printf("Enter the Current Time between 0-23: ");
    scanf("%d", &Time);

    //Checking Size and Calculate Total Price
    switch (PizzaSize)
    {
    case 'S':
    case 's':
        //Display what user chose    
        printf("You have chosen Small Pizza\n");
        //Check Number of Pizza and Set Price
        if (Number_of_Pizza > 1)
        {
            printf("Check out our Multi Pizza Deals\n");
            switch (Number_of_Pizza)
            {
            case 2:
                TotalPrice = 15;
                break;
            case 3:
                TotalPrice = 21;
                break;
            }
        }
        else if (Number_of_Pizza == 1)
        {
            TotalPrice = Smallprice;
        }
        break;
    case 'M':
    case 'm':
        //Display what user chose
        printf("You have chosen Medium pizza\n");
        //Check Number of Pizza and Set Price
        if (Number_of_Pizza > 1)
        {
            printf("Check out our Multi Pizza Deals\n");
            switch (Number_of_Pizza)
            {
            case 2:
                TotalPrice = 34;
                break;
            case 3:
                TotalPrice = 50;
                break;
            }
        }
        else if (Number_of_Pizza == 1)
        {
            TotalPrice = Mediumprice;
        }

        break;
    case 'L':
    case 'l':
        //Display what user chose
        printf("You have chosen Large Pizza\n");
        //Check Number of Pizza and Set Price
        if (Number_of_Pizza > 1)
        {
            printf("Check out our Multi Pizza Deals\n");
            switch (Number_of_Pizza)
            {
            case 2:
                TotalPrice = 57;
                break;
            case 3:
                TotalPrice = 80;
                break;
            }
        }
        else if (Number_of_Pizza == 1)
        {
            TotalPrice = Largeprice;
        }
        break;
    default:
        printf("Invalid Size Entered!!!\n");
        break;
    }

    //Check for Time based Discount between 11AM to 2PM
    if (Time >= 11 && Time <= 14)
    {
        TimeDiscountedPrice = (TotalPrice*TimeDiscount);
        printf("Wow!!! you got a discount of $%.2f\n",TimeDiscountedPrice);
        TotalPrice -= TimeDiscountedPrice;
    }
    

    printf("Your Order will be Ready in 45 minutes\n");
    printf("Your Total Bill is %.2f\n",TotalPrice);
    return 0 ;
}