	//    A
//   BA
//  CBA
// DCBA
//EDCBA
main()
{

	int i,j,k, x=65;
	for(i=1 ; i<=5; i++)
	{
		
		k=x;
		for(j=1 ; j<=5; j++)
		{
			if(j>=6-i){
				printf("%c",k--);
			}
			
			else
			{
				printf(" ");
			}	
		}
		x++;
		
		printf("\n");
	}
}
