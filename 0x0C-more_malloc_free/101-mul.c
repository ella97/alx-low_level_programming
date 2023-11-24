#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two positive numbers
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    for (int i = 0; num1[i]; i++)
    {
        if (num1[i] < '0' || num1[i] > '9')
        {
            printf("Error\n");
            return (98);
        }
    }

    for (int i = 0; num2[i]; i++)
    {
        if (num2[i] < '0' || num2[i] > '9')
        {
            printf("Error\n");
            return (98);
        }
    }

    int len1 = 0, len2 = 0;
    while (num1[len1])
        len1++;
    while (num2[len2])
        len2++;

    int *result = malloc(sizeof(int) * (len1 + len2));
    if (result == NULL)
        return (98);

    for (int i = 0; i < len1 + len2; i++)
        result[i] = 0;

    for (int i = len1 - 1; i >= 0; i--)
    {
        for (int j = len2 - 1; j >= 0; j--)
        {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + result[i + j + 1];
            result[i + j] += sum / 10;
            result[i + j + 1] = sum % 10;
        }
    }

    int start = 0;
    while (start < len1 + len2 && result[start] == 0)
        start++;

    if (start == len1 + len2)
        putchar('0');
    else
    {
        for (int i = start; i < len1 + len2; i++)
            putchar(result[i] + '0');
    }

    putchar('\n');
    free(result);
    return (0);
}
