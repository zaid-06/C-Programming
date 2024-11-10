#include<stdio.h>
main()
{
	#define country "india"

	#ifdef country
	   printf("%s is a great country" ,country);
	#endif
	#ifndef country 
	   printf("%s",country);
	#endif
	
}

