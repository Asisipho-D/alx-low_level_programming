#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

char **strtow(char *str, char delimiter);
void free_str_arr(char **arr);

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow("      ALX School         #cisfun      ", ' ');
    if (tab == NULL)
    {
        printf("Failed to split the string\n");
        return (1);
    }

    print_tab(tab);
    free_str_arr(tab);
    return (0);
}

void free_str_arr(char **arr)
{
    int i;

    if (arr == NULL)
        return;

    for (i = 0; arr[i] != NULL; i++)
    {
        free(arr[i]);
    }
    free(arr);
}
