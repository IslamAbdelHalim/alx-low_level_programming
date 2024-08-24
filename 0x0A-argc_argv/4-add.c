#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to print the name of program
 *
 * @argc: The counter of argument
 *
 * @argv: argument vector
 *
 * Return: 0 Always success
*/

int main(int argc, char *argv[])
{
    int i, sum;

    sum = 0;

    for (i = 1; i < argc; i++)
    {
        int num;
        char *arg = argv[i];
        int is_number = 1;

        for (int j = 0; arg[j] != '\0'; j++)
        {
            if (!isdigit(arg[j]))
            {
                is_number = 0;
                break;
            }
        }

        if (!is_number)
        {
            printf("Error\n");
            return (1);
        }
        else
        {
            num = atoi(arg);
            sum += num;
        }
    }
    printf("%d\n", sum);
    return (0);
}
