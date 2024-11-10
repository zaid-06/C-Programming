
#include <stdio.h>
main()
{
	int vol;
	printf ("enter voltage: ");
	scanf("%d", &vol);
	if ( vol >= 150)
	{
		if(vol >= 150 && vol <= 300)
		printf(" on ");
		else 
		printf("high");
	}
	else
		printf("off");
	
}
