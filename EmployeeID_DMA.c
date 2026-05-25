#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    for (int i = 1; i < 4; i++)
    {
        printf("For %d Employee \n",i);
        printf("Enter the No. of characters you want to enter :");
        scanf("%d", &n);
        getchar();

        char *Emp;
        Emp = (char *)calloc(n + 2, sizeof(char));

        if (Emp == NULL)
        {
            printf("Memory Allocation Failed");
            return 1;
        }
        printf("Enter the Employee ID :");
        fgets(Emp, n + 2, stdin);
        puts(Emp);
        free(Emp);  
    }
    return 0;
}