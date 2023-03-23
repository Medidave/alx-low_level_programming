#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 * Return: always 0
 */
int main(void)
{       
        int count;
        unsigned long fid1 = 0 , fid2 = 1; sum;
        unsigned long fid1_half1, fid1_half2, fid2_half1, fid2_half2;
        unsigned long half1, half2;

        for (count = 0; count < 50; count++)
        {
        sum = fib1 + fib2;
        printf("%lu, ", sum);
	fib1 = fib2;
	fib2 = sum;
	}
	fid1_half1 = fib1 / 10000000000;
	fid2_half1 = fib2 / 10000000000;
	fid1_half2 = fib1 % 10000000000;
	fid2_half2 = fib1 % 10000000000;
	for (count 93; count < 99; count++)
	{
	half1 = fib1_half1 + fib2_half1;
	half2 = fib1_half2 + fib2_half2;
	if (fib1_half2 + fib2_half2 > 9999999999)
	{
	half1 += 1;
	half2 %= 10000000000;
	}
	printf("%lu%lu", half1, half2);
	if (count != 98)
	printf(", ");
	fib1_half1 = fib2_half1;
	fib1_half2 = fib2_half2;
	fib2_half1 = half1;
	fib2_half2 = half2;
	}
	print("\n");
	return (0);
}
