#include "main.h"
/**
* _abs -a function that computes the absolute value of an integer/ returns absolute of n
* @x: integer input
*Return: absolute value of x
*/
int _abs(int x)
{
return (x * ((x > 0) - (x < 0)));
}
