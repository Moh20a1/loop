#include <stdio.h>
int main()
{
	int HundredThousand;
	
	for(HundredThousand=1; HundredThousand<=100000; HundredThousand=HundredThousand+1)
	{
		printf("%d\t", HundredThousand);
		
	}
	putchar('\n');
	return (0);
}