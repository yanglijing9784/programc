#include <stdio.h>
#include <stdarg.h>
#define false 0
#define PRINT_NONE         printf("\033[0m\n\n\n");fflush(stdout);
#define PRINT_RED          printf("\n\n\n\033[1;31;40m");
#define PRINT_GREEN        printf("\n\n\n\033[1;32;40m");
#define PRINT_YELLOW       printf("\n\n\n\033[1;33;40m");
#define PRINT_BLUE         printf("\n\n\n\033[1;34;40m");
#define PRINT_PURPLE       printf("\n\n\n\033[1;35;40m");
#define PRINT_CYAN         printf("\n\n\n\033[1;36;40m");
int logon = 1;
void yellow_printf(const char* format, ...)
{
    if(logon == false)return;

    va_list args;
    va_start(args, format);
    PRINT_YELLOW
        vprintf(format, args);
    PRINT_NONE
        va_end(args);
}

void red_printf(const char* format, ...)
{
    if(logon == false)return;

    va_list args;
    va_start(args, format);
    PRINT_RED
        vprintf(format, args);
    PRINT_NONE
        va_end(args);
}

void green_printf(const char* format, ...)
{
    if(logon == false)return;

    va_list args;
    va_start(args, format);
    PRINT_GREEN
        vprintf(format, args);
    PRINT_NONE
        va_end(args);
}

void purple_printf(const char* format, ...)
{
    if(logon == false)return;

    va_list args;
    va_start(args, format);
    PRINT_PURPLE
        vprintf(format, args);
    PRINT_NONE
        va_end(args);
}

void blue_printf(const char* format, ...)
{
    if(logon == false)return;

    va_list args;
    va_start(args, format);
    PRINT_BLUE
        vprintf(format, args);
    PRINT_NONE
        va_end(args);
}

void cyan_printf(const char* format, ...)
{
    if(logon == false)return;

    va_list args;
    va_start(args, format);
    PRINT_CYAN
        vprintf(format, args);
    PRINT_NONE
        va_end(args);
}
int main(void)
{
    printf("\033[33;5;4mhellowrodk\n\033[0m");
    green_printf("green");
    cyan_printf("cyan_printf");
    return 0;
}
