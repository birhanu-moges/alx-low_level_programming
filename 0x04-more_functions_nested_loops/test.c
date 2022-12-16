#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void recursive(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	if (n / 10 ==0)
		_putchar(n + '0');
	else
	{
	
		recursive(n / 10);
		_putchar(n % 10+ '0');
	}
	


}

int main(void)
{
	recursive(98);
	_putchar('\n');
	recursive(402);
	 _putchar('\n');
	recursive(1024);
	_putchar('\n');
	recursive(0);
	_putchar('\n');
	recursive(-98);

	return (0);
}	
