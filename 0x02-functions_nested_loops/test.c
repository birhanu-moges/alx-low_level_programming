#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
	int n = 98;
	_putchar('0' +( n % 10));
	n = -44;
	_putchar('0' + (-n%10));
	_putchar('\n');

	return 0;
}
			
