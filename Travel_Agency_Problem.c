// In this ques we will create a structure and input details of n drivers

#include <stdio.h>
#include <string.h>

struct Travel_Agency_Problem
{
    char Name[100];
    int DLN;
    char Route[500];
    int KMS;
};


int main()
{
    int n;
    printf("Enter the number you want to enter details of :");
    scanf("%d", &n);
    while (getchar() != '\n');
    

    struct Travel_Agency_Problem drivers[n];
    

    // Entering the details
    for (int i = 0; i < n; i++)
    {
        printf("Enter details of %d Driver \n", i);
        printf("Enter Name :");
        fgets(drivers[i].Name, 100, stdin);
        
        printf("Enter Driving Licence No. :");
        scanf("%d", &drivers[i].DLN);
        while (getchar() != '\n');

        printf("Enter Route :");
        fgets(drivers[i].Route, 500, stdin);

        printf("Enter approx KMS traveled :");
        scanf("%d",&drivers[i].KMS);
        while (getchar() != '\n');

        printf("\n\n");
    }

    // Printing the details
    for (int i = 0; i < n; i++)
    {
        printf("The Details of %d Driver :\n Name = %s Driving Licence No. = %d \n Route = %s KMS Traveled = %d \n\n",i,drivers[i].Name,drivers[i].DLN,drivers[i].Route,drivers[i].KMS);
    }
    return 0;
}
