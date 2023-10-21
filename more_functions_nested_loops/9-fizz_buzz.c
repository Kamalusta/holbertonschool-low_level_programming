#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int n = 1;
char *word;
while (n < 101)
{
int f = n % 3;
int b = n % 5;
if (f == 0 && b == 0)
{
word = "FizzBuzz";
printf("%s ", word);
}
else if (f == 0)
{
word = "Fizz";
printf("%s ", word);
}
else if (b == 0)
{
word = "Buzz";
printf("%s ", word);
}
else
printf("%d ", n);
n++;
}
printf("\n");
return (0);
}
