#include <stdio.h>

int main(void)
{
    // Variable Declaration
    const int RegularcrustP = 0;
    const int ThincrustP = 1;
    const int StuffedcrustP = 2;
    int TotalPrice = 0;
    char userchar;

    // Take Fav Crust of User
    printf("Enter Your Favourite Crust [Regular(R)/Thin(T)/Stuffed(S)]: ");
    scanf("%c",&userchar);

    // Check and add price
    if (userchar == 'T')
    {
        TotalPrice = TotalPrice + ThincrustP;
    }
    else if (userchar = 'S')
    {
        TotalPrice = TotalPrice + StuffedcrustP;
    }
    //Display Final Total Cost
    printf("Updated Total Cost is: $%d\n", TotalPrice);
    return 0;
}