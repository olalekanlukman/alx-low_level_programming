#include "holberton"

/**
 * _isalpha - this checks for all aphabets
 * @c: this a to Z
 * Return: tis outputs 0 or 1
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
