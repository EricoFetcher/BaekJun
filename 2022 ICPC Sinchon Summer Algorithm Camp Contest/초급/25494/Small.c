#include <stdio.h>
#include <stdlib.h>

int num_testCase = 0;
int *a, *b, *c = NULL;
int temp = 60;

int main()
{
    scanf("%d", &num_testCase);

    a = (int *) malloc(num_testCase * sizeof(int *));
    b = (int *) malloc(num_testCase * sizeof(int *));
    c = (int *) malloc(num_testCase * sizeof(int *));
    
    for(int scanf_num = 0; scanf_num < num_testCase; scanf_num++ )
    {
        scanf("%d %d %d", a + scanf_num, b + scanf_num, c + scanf_num);
        if (a[scanf_num] < temp)
        {
            temp = a[scanf_num];
        }

        if (b[scanf_num] < temp)
        {
            temp = b[scanf_num];
        }

        if (c[scanf_num] < temp)
        {
            temp = c[scanf_num];
        }

        printf("%d\n", temp);
        temp = 60;
    }

    free(a);
    free(b);
    free(c);
    

    return 0;
}
