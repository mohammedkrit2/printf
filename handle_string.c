#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

int handle_string(char *str)
{
	int i = 0;
	
	if (str == NULL)
	{
		handle_string("(null)");
		return (0);
	}
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	return (i);
}
