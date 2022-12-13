#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
	_putchar('0' + 8);
	_putchar('\n');

	return 0;
}
			
