#include <stdio.h>
#define pCurrentSkill (skillOrder + usage)

int main()
{
    int num_SkillUsage = 0;
    char skillOrder;
    int skillTotalUsage = 0;
    
    int SFlag = 0;
    int LFlag = 0;
    int errorFlag = 0;

    scanf("%d", &num_SkillUsage);

    for (int usage = 0; usage < num_SkillUsage; usage++ )
    {
        scanf("%c", &skillOrder);
        if (!errorFlag)
        {
            if (skillOrder == 'L')
            {
                printf("L\n");
                LFlag = 1;
                skillTotalUsage++;
            }
            else if (skillOrder == 'S')
            {
                printf("S\n");
                SFlag = 1;
                skillTotalUsage++;
            }
            else if (skillOrder == 'K')
            {
                printf("K\n");
                if(!SFlag)
                {
                    errorFlag = 1;
                }
                else
                {
                    SFlag = 0;
                    skillTotalUsage--;
                }
            }
            else if (skillOrder == 'R')
            {
                printf("R\n");
                if(!LFlag)
                {
                    errorFlag = 1;
                }
                else
                {
                    LFlag = 0;
                    skillTotalUsage--;
                }

            }
            else
            {
                printf("N\n");
                skillTotalUsage++;
            }
        }
        else;
        

    }

    printf("%d", skillTotalUsage);

    return 0;
}