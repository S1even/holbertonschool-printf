#include "main.h"

/**
 */

int _printf(const char *format, ...)
{
        int num_char = 0;
        va_list args;
        va_start(args, format);
        char opt[2];

        while (*format)
        {
                if (*format == '%')
                {
                        format++;
                        opt[2] = {*format, '\n'}
                        formatter = get_format_func(opt);

                        if (formatter)
                                num_char += formatter(args);
                }
                else
                {
                        _putchar(*format);
                        num_char++;
                }
                format++;
        }
        va_end(args);
        return (num_char);
}
