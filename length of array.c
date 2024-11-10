	#include<stdio.h>
	main()
	{
		int a[] = {10,12,14,16,18,20,22} ;//, b[]={11,13,15,17,19,21};
		int n, i;
		n=( sizeof(a) / sizeof(a[0]) );
		printf("Length of array: %d\n", (int)( sizeof(a) / sizeof(a[0]) ));
		for(i=0 ; i<=n; i++){
			printf("Length of array: %d\n",a[i] );
		}
    
	}
