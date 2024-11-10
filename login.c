#include<stdio.h>
main()
{
	char  userName[20]  ;
	int pswrd ,count =0;
//	printf("\033[0;33m");
	l1:
		count++;
		if(count==5)
		{
			locked();
			system("cls");
			count=0;
		}
		printf("\n\n\t\tenter your name: ");
		gets(userName);
		printf("\t\tEnter your password: ");
		scanf("%d",&pswrd);
		fflush(stdin);
		if(!strcmp(userName ,"zaid"))
		{
			if(pswrd == 1234)	
				printf("\t\tlogin successful");
			else
			{
				system("cls");
				printf("\n\n\t\tinvalid password");
				printf("\n\t\tTry again");
				goto l1;
			}	
		}
		else
		{
			system("cls");
			printf("\n\n\t\tinvalid user name");
			if(pswrd != 1234)
				printf(" and password");
			printf("\n\t\tTry again");
			goto l1;	
		}
}
locked()
{
       int second =30 ;	
	    usleep(1000 * 4000);		
        system("cls");
		printf("\n\n\n");
//		printf("\t\t\t locked for 30 second\n\n");
      	while(second !=0){
      		
        	printf("\r\t\t\ttry again in ");
            usleep(500 * 1700);
            printf("%d second",second);	           
            second--;
         
        }
}






