#include <stdio.h>
#include <string.h>

void Parser(char str[]);

int main()
{
    char str[500];
    printf("Enter the string to parser :");
    fgets(str, 500, stdin);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '\n')
        {
            str[i] = ' ';
        }
    }
    Parser(str);
    return 0;
}

void Parser(char str[])
{
    int l = strlen(str), index = 0, in = 0;

    // For removing the brackets
    for (int i = 0; i < l; i++)
    {
        if (str[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (str[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            str[index] = str[i];
            index++;
        }
    }
    str[index] = '\0';

    // For removing of first blank characters
    while (str[0] == ' ')
    {
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i + 1];
        }
    }

    // for removing of last blank characters

    while (str[strlen(str) - 1] == ' ')
    {
        str[strlen(str) - 1] = '\0';
    }
    printf("The new string is --%s--", str);
}