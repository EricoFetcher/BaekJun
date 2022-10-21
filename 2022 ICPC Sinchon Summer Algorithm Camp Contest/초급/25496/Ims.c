#include <stdio.h>
#include <stdlib.h>



int main()
{
    int accumulatedTiredness = 0;
    int num_accessories = 0;
    int maxNum_acces = 0;
    int counting[201] = {0};
    int max = 0;
    int tiredness = 0;
    int endflag = 0;
    
    scanf("%d %d", &accumulatedTiredness, &num_accessories);

    for(int num = 0; num < num_accessories; num++)
    {
        scanf("%d", &tiredness);
        counting[tiredness]++;
        
        if(tiredness > max)
        {
            max = tiredness;
        }
    }

    if(accumulatedTiredness == 200)
    {
        printf("0");
        endflag = 1;
    }

    for(tiredness = 0; tiredness < max + 1; tiredness++)
    {
        if(counting[tiredness] != 0)
        {
            for(int i = 0; i < counting[tiredness]; i++)
            {
                if(!endflag)
                {
                    accumulatedTiredness += tiredness;
                    maxNum_acces++;
                    
                    //printf("tiredness: %d, acc: %d\n", tiredness, accumulatedTiredness);
                    
                    if (accumulatedTiredness >= 200)
                    {
                        printf("%d", maxNum_acces);
                        endflag = 1;
                    }
                }
                else;
                
                
                
            }

        }
    }

    if(!endflag)
    {
        printf("%d", maxNum_acces);
    }

    return 0;
}
