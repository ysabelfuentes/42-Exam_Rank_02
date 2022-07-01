#include <unistd.h>

int main (void)
{
	char alf;
	char m;
	int i;

	alf = 'a';
	i = 1;
	while (alf <= 'z')
	{
		if (i % 2 == 0)
		{
			m = alf - 32;
			write(1,&m,1);
		}
		else
			write(1,&alf,1);
		alf++;
		i++;
	}
	write(1, "\n", 1);
	
	char even; /* a partir de aqui otra forma*/
	char odd;

	even = 'B';
	odd = 'a';
	while (even <= 'Z')
	{
		write(1, &odd, 1);
		write(1, &even, 1);
		even += 2;
		odd += 2;
	}
	write(1, "\n", 1);
	return(0);
}
