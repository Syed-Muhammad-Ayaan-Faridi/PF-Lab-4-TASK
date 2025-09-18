#include <stdio.h>

int main(void)
{
    // Declaration of Constants and Variable
    const int Smallprice = 8;           // Cost of a single small Pizza
    const int Mediumprice = 18;         // Cost of a single Medium Pizza
    const int Largeprice = 30;          // Cost of a single Large Pizza
    const int ThinCrust = 1;            // Cost of a Thin Crust Pizza
    const int StuffedCrust = 2;         // Cost of a Stuffed Crust Pizza
    const int DeliveryFee = 3;          // Home Delivery Charges
    const float ExtraCheeseprice = 1.5; // Cost of adding Extra Cheese
    const float TimeDiscount = 0.1;     // 10% discount
    const int StudentDiscount = 2;      // $2 Discount based on Student ID  
    int Time;                           // 0-23
    char Cheese;                        // YES OR NO
    float TotalPrice = 0.0;             // Final Bill
    char CrustType;                     // Regular/Thin/Stuffed
    char PizzaSize;                     // Small/Large/Medium
    int Number_of_Pizza;                // 1/2/3
    char StudentID;                     // Student status
    char DeliveryStatus;                // Stores whether Delivery fee is to be added or not
    float TimeDiscountedPrice = 0.0;          //Store the Discount given based on Time

    // Input from User
    printf("Enter the Size of Pizza [Small(S)/Medium(M)/Large(L)]: ");
    scanf(" %c", &PizzaSize);
    printf("Enter Number of Pizzas you want to Order (1/2/3): ");
    scanf("%d", &Number_of_Pizza);
    printf("Enter the Type of Crust [Regular(R)/Thin(T)/Stuffed(S)]: ");
    scanf(" %c", &CrustType);
    printf("Would you Like to have Extra Cheese [Yes(Y)/No(N)]: ");
    scanf(" %c", &Cheese);
    printf("Enter the Current Time between 0-23: ");
    scanf("%d", &Time);
    printf("Do you have Student ID [Yes(Y)/NO(N)]: ");
    scanf(" %c", &StudentID);
    printf("Would you like to Pickup(P) or Delivery(D): ");
    scanf(" %c", &DeliveryStatus);

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

    //Adjust Cost based on Type of Crust
    if (CrustType == 'T' || CrustType == 't')
    {
        printf("Thin Crust added for $%d each.\n",ThinCrust);
        TotalPrice += (ThinCrust*Number_of_Pizza);
    } else if (CrustType == 'S' || CrustType == 's')
    {
        printf("Stuffed Crust Added for $%d each.\n",StuffedCrust);
        TotalPrice += (StuffedCrust*Number_of_Pizza);
        //Check free Garlic Bread Criteria 
        if (Number_of_Pizza == 3)
        {
            printf("Bingo!!! you'll get free Garlic Bread\n");
        }
    }else
    {
        printf("No additional cost for Regular Crust\n");
    }

    //Check Additional Charges for Extra Cheese
    if (Cheese == 'Y' || Cheese == 'y')
    {
        printf("Extra Cheese added for $%.2f\n",ExtraCheeseprice);
        TotalPrice += ExtraCheeseprice;
    }

    //Check for Time based Discount between 11AM to 2PM
    if (Time >= 11 && Time <= 14)
    {
        TimeDiscountedPrice = (TotalPrice*TimeDiscount);
        printf("Wow!!! you got a discount of $%.2f\n",TimeDiscountedPrice);
        TotalPrice -= TimeDiscountedPrice;
    }
    
    //Check for Student ID Discount 
    if (StudentID == 'Y' || StudentID == 'y')
    {
        printf("You are Elligible of Student Discout of $%d\n",StudentDiscount);
        TotalPrice -= StudentDiscount;
    }

    //Chcek for Delivery Status 
    if (DeliveryStatus == 'D' || DeliveryStatus =='d')
    {
        printf("Delivery fee of your Area is $%d\n",DeliveryFee);
        TotalPrice += DeliveryFee;
    }else
    {
        printf("Receive your Order from our Pickup Zone. \n");
    }
    
    printf("Your Order will be Ready in 45 minutes\n");
    printf("Your Total Bill is %.2f\n",TotalPrice);

    

    return 0;
}