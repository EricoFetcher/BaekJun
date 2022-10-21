#include <stdio.h>
#include <stdlib.h>

int accumulatedTiredness = 0;
int num_accessories = 0;
int *tiredness = NULL;

int main()
{
    scanf("%d %d", &accumulatedTiredness, &num_accessories);
    tiredness = (int *)malloc(num_accessories * sizeof(int *));

    for(int input_tiredness = 0; input_tiredness < num_accessories; input_tiredness++)
    {
        scanf("%d", tiredness + input_tiredness);
    }

    

    free(tiredness);
    return 0;
}

void makeOrder()
{
    
}

void createAccessories(int * givenTiredness)
{
    accumulatedTiredness += *givenTiredness; 
}