#include "main.h"
/**
 * _abs - computes absolute integer value
 *
 * @num: An integer input
 *
 * Description: function returns absolute value of a number (num)
 *
 * Return: Absolute value of number (num)
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (num * -1);
	}
	else
	{
		return (num);
	}
}
