#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
    va_list args;
    va_start(args, format);

    char *separator = "";
    unsigned int i = 0;

    while (format && format[i])
    {
        if (format[i] == 'c')
        {
            printf("%s%c", separator, va_arg(args, int));
        }
        else if (format[i] == 'i')
        {
            printf("%s%d", separator, va_arg(args, int));
        }
        else if (format[i] == 'f')
        {
            printf("%s%f", separator, va_arg(args, double));
        }
        else if (format[i] == 's')
        {
            char *str = va_arg(args, char *);
            if (str == NULL)
            {
                str = "(nil)";
            }
            printf("%s%s", separator, str);
        }
        separator = ", ";
        i++;
    }

    printf("\n");

    va_end(args);
}
