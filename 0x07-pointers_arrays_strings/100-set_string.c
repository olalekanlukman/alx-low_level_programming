#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a cha r
 * @s: pointer to pointer we need to set to
 * @to: string to set
 */

void set_string(char **s, char *to)
{
	*s = to;
}
