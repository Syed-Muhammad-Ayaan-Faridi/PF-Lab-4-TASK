#include <stdio.h>
#include <string.h>

int main(void)
{
    // Variable Declaration
    char PizzaSize[100];

    // Taking Size of pizza as Input
    printf("Pizza Sizes Available: Small,Medium,Large \n");
    printf("Enter the Pizza Size: ");
    scanf(" %s", PizzaSize);
    
    // Chceking if Valid size entered
    if ((strcmp(PizzaSize,"Small") == 0) || (strcmp(PizzaSize,"Medium") == 0) || (strcmp(PizzaSize,"Large") == 0))
    {
        printf("Bingo!! You have chosen %s Size.\n",PizzaSize);
    }
    else if ((strcmp(PizzaSize,"small") == 0) || (strcmp(PizzaSize,"medium") == 0) || (strcmp(PizzaSize,"large") == 0))
    {
        printf("Bingo!! You have chosen %s Size.\n",PizzaSize);
    }
    else
    {
        printf("Invalid Size\n");
    }
    
    return 0;
}