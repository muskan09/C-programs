#include<stdio.h>
void main ()
{
int number, last_digit, next_digit, total;

printf ("Enter the number whose sum of digits is to be calculated: ");
scanf ("%d", &number);

last_digit = number%10;
total = last_digit;

next_digit = (number/10) % 10;

total = total + next_digit;

next_digit = (number/100) % 10;

total = total + next_digit;

next_digit = (number/1000) %10;

total = total + next_digit;

next_digit = (number/10000) %10;

total = total + next_digit;


printf ("The sum of the digits of the entered number is: %d", total);

}



