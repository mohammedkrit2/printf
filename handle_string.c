#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int handle_string(char *str)
{
	int i = 0;
	
	if (str == NULL)
	{
		handle_string("(null)");
		return;
	}
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	return (i);
}
