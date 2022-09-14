#include "main.h"

/**
 *print_alphabet - print alphabets in lowercase.
 */
int main(void)
{
	print_alphabet();

	    return (0);
}
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch < 'z'; ch++)
		_putchar(ch);

	_putchar('\n');

}
