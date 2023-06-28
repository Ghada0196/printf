#include "main.h"

/**
 * handle_percent - handle %%
 * @arg: not necessary
 *
 * Return: an integer
 */

int handle_percent(va_list content __attribute__((unused)))
{
	write_char('%');
	
	return (1);
}
