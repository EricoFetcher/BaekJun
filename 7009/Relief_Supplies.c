#include <stdio.h>
#include <stdlib.h>

int data_set = 0;
int curNum = 1;
int lastNum = 0;
int *N, *T, *B, *S = NULL;
int ***Line_OrdArr = NULL; 
int **cnt = NULL;
int endFlag = 0;
    
#define pBox (B + D_Set_Num)
#define pType (T + D_Set_Num)
#define pPeopleNum (N + D_Set_Num)
#define MaxRow (*pBox * *pType / *pPeopleNum + 1)
#define pSupply (S + D_Set_Num)

void doFree(void);

void makeArray(void);

void countSuppliy(void);

int main()
{

    printf("%d\n", curNum);
    //scanf("%d", &data_set);
    data_set = 1;

    N = (int *)malloc(data_set*sizeof(int));
    T = (int *)malloc(data_set*sizeof(int));
    B = (int *)malloc(data_set*sizeof(int));
    S = (int *)malloc(data_set*sizeof(int));
    Line_OrdArr = (int ***)malloc(data_set*sizeof(int **));
    cnt = (int **)malloc(data_set*sizeof(int *));

    makeArray();

    countSuppliy();    
    
    printf("cnt: %d\n", cnt[0][0]);
    doFree();

    return 0;
}

void doFree(void)
{
    free(N);
    free(T);
    free(B);
    free(S);
    
    for (int D_Set_Num = 0; D_Set_Num < data_set; D_Set_Num++)
    {
        for(int Column = 0; Column < *pPeopleNum; Column ++)
        {
            free(Line_OrdArr[D_Set_Num][Column]);
        }
    }

    for (int D_Set_Num = 0; D_Set_Num < data_set; D_Set_Num++)
    {
        free (Line_OrdArr[D_Set_Num]);
        free (cnt[D_Set_Num]);
    }

    free(Line_OrdArr);
    free (cnt);
}

void countSuppliy(void)
{
    for(int D_Set_Num = 0; D_Set_Num < data_set; D_Set_Num++)
    {
        for(int Column = 0; Column < *pPeopleNum; Column ++)
        {
            for(int Row = 0; Row < MaxRow; Row++)
            {
                if (Line_OrdArr[D_Set_Num][Row][Column] == *pSupply)
                {
                    cnt[D_Set_Num][Column]++;
                }
            }
        }
    }
}

void makeArray(void)
{
    for(int D_Set_Num = 0; D_Set_Num < data_set; D_Set_Num++)
    {
        //scanf("%d %d %d %d", (N + D_Set_Num), pType, pBox, (S + D_Set_Num));
        *N = 4;
        *T = 3;
        *B = 6;
        *S = 1;
        Line_OrdArr[D_Set_Num] = (int**)malloc(MaxRow * sizeof(int *));
        cnt[D_Set_Num] = (int*)malloc(*pPeopleNum * sizeof(int));

        for (int Row = 0; Row < MaxRow; Row++)
        {
             Line_OrdArr[D_Set_Num][Row] = 
                        (int*)malloc( *pPeopleNum * sizeof(int));

            for(int Column = 0; Column < *pPeopleNum; Column++)
            {
                if(!endFlag)
                {
                    if(curNum > *pType)
                    {
                        curNum = 1;
                        lastNum++;
                    }
                    else;
                    printf("lastNum: %d\n", lastNum);
                    
                    if(lastNum < *pBox)
                    {
                        Line_OrdArr[D_Set_Num][Row][Column] = curNum;
                        printf("Row: %d, Column: %d, curNum: %d \n", Row, Column, curNum);
                        curNum++;
                    }
                    else
                    {
                        curNum = 1;
                        lastNum = 1;

                        endFlag = 1;
                    }
                }
            }
            endFlag = 0;
        }
    }
}