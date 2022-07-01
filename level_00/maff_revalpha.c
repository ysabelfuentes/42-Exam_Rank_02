#include <unistd.h>

int main(void)
{
	char alfa;
	char aux;
	int i;

	alfa = 'z';
	i = 1;
	
	while(alfa >= 'a')
	{
 		if (i%2== 0)
		{
			aux = alfa - 32;
			write(1,&aux,1);
		}
		else
			write(1,&alfa,1);
		alfa--;
		i++;
	}
	return(0);
}

