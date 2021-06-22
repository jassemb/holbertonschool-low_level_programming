#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char ch[100]="Holberton";
        int i;
        for (i = 0; i <=9; i++)
                putchar(ch[i]);
        putchar('\n');
}
