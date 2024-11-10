#include<stdio.h>
struct voters
{
	int id_no;
	char name[20];
	char address[30];
	int age;
	
};
input_and_display(int n)
{
	struct voters vtr[n];
	int i , k=1; 
	for(i=0; i<n; i++)
	{
		printf("Enter %d record: \n\n",i+1);
		printf("enter id: ");
		scanf("%d",&vtr[i].id_no);
		fflush(stdin);
		printf("Enter name: ");
		gets(vtr[i].name);
		
		printf("Enter address: ");
		gets(vtr[i].address);
		printf("enter age: ");
		scanf("%d",&vtr[i].age);
		
		fflush(stdin);
		
	}
	printf("\n__________________________________________________\n");
	for(i=0; i<n; i++){
		
		if(vtr[i].age>=60)
		{
			printf("%d. id No: %d\t\tname: %s\n", k, vtr[i].id_no , vtr[i].name  );
			k++;
		}
	}
	
	
}
main()
{
	int num ;
	printf("how many voters you want to store: ");
	scanf("%d",&num);
	input_and_display(num);
	
}









