#include <stdio.h>
#include <unistd.h>

int main(void)
{
    
password();
   
}
password()
{
	const int trigger = 500; // ms
    const int numDots = 5;
    const char prompt[] = "Loading";
    int i, k=0, lock =0;
	int pswrd, fpswrd, bul=0;
	FILE *fp;
	
	fp = fopen ("password.txt","r");
	do
	{
		fp = fopen ("password.txt","r");
		printf("\n\n\t\tenter password: ");
		scanf("%d",&pswrd);
		fscanf(fp,"%d",&fpswrd);
		
		printf("\n%d  %d",fpswrd,pswrd);
		if(fpswrd == pswrd)
		{
			 while (k < 2) {
		        // Return and clear with spaces, then return and print prompt.
		        system("cls");
		        printf("\n\n\n\n\t\t\tplease wait.\n");
		        printf("\r\r\t\t\t%s",/* sizeof(prompt) - 1 + numDots, "",*/ prompt);
		        fflush(stdout);
		
	       		 // Print numDots number of dots, one every trigger milliseconds.
		        for (i = 0; i < numDots; i++) {

		            usleep(trigger * 900);
//		            
		            fputc('.', stdout);
		            fflush(stdout);
		        }
	       		 k++;
	    	}
			
			bul = 0;
		}
		else
		{
			system("cls");
			printf("\n\t\twrong password\n\t\t  try again:\n");

			bul=1;
			lock++;
		}
		if(lock==5)
		{
			locked();
			lock=0;
		}
	}while (bul);

	
}
locked()
{
		const int trigger = 500; // ms
       int second =30 ;
					
        system("cls");

		printf("\n\n\n");
		printf("\t\t\t locked for 30 second\n\n");
      	while(second !=0){
      		
        	printf("\r\t\t\ttry again in ");

            usleep(trigger * 1700);
            printf("%d second",second);	           
            second--;
         
        }
}






