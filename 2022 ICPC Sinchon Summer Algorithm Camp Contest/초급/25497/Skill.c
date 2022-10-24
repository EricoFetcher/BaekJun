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
        scanf(" %c", &skillOrder);
        if (!errorFlag)
        {
            if (skillOrder == 'L')
            {
                LFlag++;
            }
            else if (skillOrder == 'S')
            {
                SFlag++;
            }
            else if (skillOrder == 'K')
            {
                if(!SFlag)
                {
                    errorFlag = 1;
                }
                else
                {
                    SFlag--;
                    skillTotalUsage++;
                }
            }
            else if (skillOrder == 'R')
            {
                if(!LFlag)
                {
                    errorFlag = 1;
                }
                else
                {
                    LFlag--;
                    skillTotalUsage++;
                }
            }
            else
            {
                skillTotalUsage++;
            }
        }
        else;
    }
    printf("%d", skillTotalUsage);
    return 0;
}