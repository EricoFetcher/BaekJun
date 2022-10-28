#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numofToy;
    int toySize;
    int pSizeofToyinOrder[1000];
    int maxToyNum;
    int maxSize;
    int reftToy;
    int countMaxSize;
    
    scanf("%d", &numofToy);
    //pSizeofToyinOrder = (int*) malloc(numofToy * sizeof(int *));
    
    numofToy;
    
    for(int trial = 0; trial < numofToy; trial++)
    {
        scanf("%d", &toySize);
        pSizeofToyinOrder[toySize]++;
        
        // 2 가 2개인지 3개인지 확인
        if(maxToyNum < pSizeofToyinOrder[toySize])
        {
            maxToyNum = pSizeofToyinOrder[toySize];
        }
        
        printf("%d\n", maxToyNum);
        
        if(maxSize < toySize)
        {
            maxSize = toySize; 
        }
    }
    
    printf("finishedInput\n");
    
    for(int trial = 0; trial < maxToyNum; trial++)
    {
        countMaxSize = 0;
        for(int count = 0; count < maxSize; count++)
        {
            if(pSizeofToyinOrder[count] != 0)
            {
                printf("tria: %d sizeofToy: %d\n", trial, pSizeofToyinOrder[count]);
                if(countMaxSize < pSizeofToyinOrder[count])
                {
                    countMaxSize = pSizeofToyinOrder[count];
                    numofToy--;
                    pSizeofToyinOrder[count]--;
                    printf("numofToy: %d\n", numofToy);

                }
            }
        }
        
    }
    
    printf("%d", numofToy);
    
    //free(pSizeofToyinOrder);
    return 0;
}


