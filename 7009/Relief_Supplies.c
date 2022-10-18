#include <stdio.h>
#include <stdlib.h>

int data_set, calNum = 0;
int curNum = 1;
int *N, *T, *B, *S = NULL;
int ***Line_OrdArr, **cnt = NULL;
    
void doFree(void);

void makeArray(void);

void countSuppliy(void);

int main()
{


    scanf("%d", &data_set);

    N = (int *)malloc(data_set*sizeof(int));
    T = (int *)malloc(data_set*sizeof(int));
    B = (int *)malloc(data_set*sizeof(int));
    S = (int *)malloc(data_set*sizeof(int));
    Line_OrdArr = (int ***)malloc(data_set*sizeof(int));
    cnt = (int **)malloc(data_set*sizeof(int));

    makeArray();

    countSuppliy();    
    
   // printf("%d", cnt[0][0]);
    doFree();

    return 0;
}

void doFree(void)
{
    free(N);
    free(T);
    free(B);
    free(S);
    
    for (int x = 0; x < )
}

void countSuppliy(void)
{
    for(int D_Set_Num = 0; D_Set_Num < data_set; D_Set_Num++)
    {
        for(int Column = 0; Column < *( N + D_Set_Num); Column ++)
        {
            for(int Row = 0; Row < *(B + D_Set_Num) * *(T + D_Set_Num) / *(N + D_Set_Num); Row++)
            {
               // printf("%d\n", Line_OrdArr[D_Set_Num][Column][Row]);
                
                #if 0
                if(Line_OrdArr[D_Set_Num][Column][Row] == *(S + D_Set_Num))
                    cnt[D_Set_Num][Column]++;
                #endif
            }
           // printf("---\n");
        }
    }
}

void makeArray(void)
{
    for(int D_Set_Num = 0; D_Set_Num < data_set; D_Set_Num++)
    {
        scanf("%d %d %d %d", (N + D_Set_Num), (T + D_Set_Num), (B + D_Set_Num), (S + D_Set_Num));

        Line_OrdArr[D_Set_Num] = (int**)malloc(*(N + D_Set_Num)*sizeof(int));
        cnt = (int*)malloc(*(N + D_Set_Num)*sizeof(int));

        //라인 순번
        for (int Column = 0; Column < *( N + D_Set_Num); Column ++)
        {
            Line_OrdArr[D_Set_Num][Column] = 
                        (int*)malloc( *(B + D_Set_Num) * *(T + D_Set_Num) / *(N + D_Set_Num));

            calNum = curNum = Column + 1;

            for (int Row = 0; Row < *(B + D_Set_Num) * *(T + D_Set_Num) / *(N + D_Set_Num); Row++)
            {
                printf("%d\n", curNum + *(N + D_Set_Num) - *(T + D_Set_Num));
                if (curNum + *(N + D_Set_Num) - *(T + D_Set_Num) > 0)
                {
                    while (calNum < *(N + D_Set_Num))
                        calNum -= *(T + D_Set_Num);
                        
                        calNum < 0 ? -calNum : calNum;
                }
                else
                {
                    calNum = *(N + D_Set_Num);
                }
                Line_OrdArr[D_Set_Num][Column][Row] = calNum;
                printf("%d\n", )
                curNum = calNum;
            }          
        }   
    }    
}