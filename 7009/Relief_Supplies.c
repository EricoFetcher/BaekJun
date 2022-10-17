#include <stdio.h>
#include <stdlib.h>

int data_set, calNum = 0;
int curNum = 1;
int *N, *T, *B, *S = NULL;
int ***Line_OrdArr;
    
void free(void);

void makeArray(void);

int main()
{


    scanf_s("%d", &data_set);

    N = (int *)malloc(data_set*sizeof(int));
    T = (int *)malloc(data_set*sizeof(int));
    B = (int *)malloc(data_set*sizeof(int));
    S = (int *)malloc(data_set*sizeof(int));
    Line_OrdArr = (int ***)malloc(data_set*sizeof(int));

    makeArray();
    
    free();

    return 0;
}

void free(void)
{
    free(N);
    free(T);
    free(B);
    free(S);
}

void makeArray(void)
{
    for(int D_Set_Num = 0; D_Set_Num < data_set; D_Set_Num++)
    {
        scanf_s("%d %d %d %d", (N + D_Set_Num), (T + D_Set_Num), (B + D_Set_Num), (S + D_Set_Num));

        Line_OrdArr[D_Set_Num] = (int**)malloc(*(N + D_Set_Num)*sizeof(int));

        //라인 순번
        for (int Column = 0; Column < *( N + D_Set_Num); Column ++)
        {
            Line_OrdArr[D_Set_Num][Column] = 
                        (int*)malloc( *(B + D_Set_Num) * *(T + D_Set_Num)) / *(N + D_Set_Num));

            calNum = curNum = Column + 1;

            for (int Row = 0; Row < *(B + D_Set_Num) * *(T + D_Set_Num)) / *(N + D_Set_Num; Row++)
            {
                
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

                curNum = calNum;
            }          

            
        }   

    }    
}