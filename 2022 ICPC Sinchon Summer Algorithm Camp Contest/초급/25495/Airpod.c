#include <stdio.h>
#include <stdlib.h>

#define newConnection (*(phoneNumber + trial) != currentConnection)
#define reConnection (*(phoneNumber + trial) == currentConnection)

int num_Connection = 0;
int trial = 0;
int currentConnection = 0;
int *phoneNumber = NULL;
int batteryUsageinPercentage = 0;
int prevusageinPercentage = 0;

void newConnection(void);

int main()
{
    scanf("%d", &num_Connection);
    phoneNumber = (int *)malloc(num_Connection * sizeof(int *));
    
    for(trial = 0; trial < num_Connection ; trial++ )
    {
        scanf("%d", phoneNumber + trial);
        
        if(newConnection)
        {
            batteryUsageinPercentage += 2;
            prevusageinPercentage = 2;
        }
        else if(reConnection)
        {
            batteryUsageinPercentage += prevusageinPercentage * 2;
            prevusageinPercentage *= 2;
        }
        
        currentConnection = *(phoneNumber + trial);

        newConnection();

        else;
        
    }
    
    printf("%d", batteryUsageinPercentage);
    
    free(phoneNumber);
    return 0;
}

void newConnection(void)
{
    if (batteryUsageinPercentage >= 100)
    {
        batteryUsageinPercentage = 0;
        currentConnection = 0;
        prevusageinPercentage = 0;
    }
    else;
}

