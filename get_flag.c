#include "main.h"

/**
 * get_flag - Calculates active flags
 * @s: character that holds the flag specifier
 * @f: pointer to the struct flags in which we turn the flags on
 *
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int get_flag(const char s, flags_t *f)
{
	int j = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			j = 1;
			break;
		case ' ':
			f->space = 1;
			j = 1;
			break;
		case '#':
			f->hash = 1;
			j = 1;
			break;
	}

	return (j);
}
