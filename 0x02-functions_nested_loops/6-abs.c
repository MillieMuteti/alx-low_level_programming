#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer
 * @num: The integer to compute its absolute value
 * Return: absolute value of integer
 */
int _abs(int num)
{
	if (num < 0)
	{
		num = (-1) * num;
	} else
	{
		num = num;
	}
	return (num);
}
