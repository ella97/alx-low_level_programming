#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
    int bytes;

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    bytes = atoi(argv[1]);
    if (bytes < 0)
    {
        printf("Error\n");
        return 2;
    }

    unsigned char *ptr = (unsigned char *)main;
    for (int i = 0; i < bytes; i++)
    {
        printf("%02x", ptr[i]);
        if (i < bytes - 1)
            printf(" ");
    }
    printf("\n");

    return 0;
}
