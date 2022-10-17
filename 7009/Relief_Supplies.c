#include <stdio.h>
#include <stdlib.h>

int main()
{

    int data_set, *N, *T, *B, *S = 0;
    
    scanf_s("%d", &data_set);
    N = (int *)malloc(data_set*sizeof(int));
    T = (int *)malloc(data_set*sizeof(int));
    B = (int *)malloc(data_set*sizeof(int));
    S = (int *)malloc(data_set*sizeof(int));

    for(int i = 0; i < data_set; i++)
    {
            scanf_s("%d %d %d %d", &N, &T, &B, &S)
    }
    
    

    return 0;
}
