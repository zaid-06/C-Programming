
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

int current_year  ;

struct customer
{
    long long  acntNo;
    char name[20];
    int dob[3];
    char  address[40];
    long long  citizenshipNo;
    long long int   phoneNo;
    char  acntType[10];
    long long  int deposit;
    int dataOfDeposite;
	int pn;
};

Update()
{

    long long acntNumber;
    int choice ;
    int count=0 ;
    struct customer employee, emp;
	FILE *fp ,*fp2 ;
	system("cls");
	fp = fopen ("cstmrRcrd.txt","r+");
    fp2= fopen ("copy.txt","w+");
    printf("\n\n\t\tEnter account No of the customer: ");
    scanf("%d",&acntNumber);
    while(fread(&employee, sizeof(employee),1,fp)>0)
    {
        if(employee.acntNo == acntNumber)
        {
            emp= employee;
            count++;
        }
        else
        {
            fwrite(&employee, sizeof(employee),1,fp2);
        }
        
    }
    fclose(fp);
    fclose(fp2);
    system("cls");
    if(count!=0)
    {
        printf("\n\n[1] name\t\t\n\n[2] Account Number\t\t\n\n[3] Mobile Number\t\t\n\n[4] Address\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
		system("cls"); 
        switch (choice)
        {
            case 1:
            	
                printf("\n\n\n\t\tEnter new name: ");
                fflush(stdin);
            	gets(emp.name);
            	fflush(stdin);
                break;
            case 2: 
                printf("\n\n\n\t\tEnter nuw  ");
                scanf("%d",&emp.acntNo);          
				break;
             case 3:
			 	printf("\n\n\n\t\tEnter nuw mobile number: ");
			 	scanf("%d",&emp.phoneNo);
                break;
            case 4:
                printf("\n\n\n\t\tEnter new address: ");
            	fflush(stdin);
            	gets(emp.address);
            	fflush(stdin);
                break;
            default:
                printf("enter valid choice");
                break;
        }
    }
    else
    {
        system("cls");
        printf("\n\n\t\tthis account No of the customer is not found\n\n");
    }
    fp2= fopen ("copy.txt","a");
    fwrite(&emp, sizeof(emp),1,fp2);
    fclose(fp2);
    printf("\n____________________________________________________");
    	
}

createAccount()     // create new account for user
{
    struct customer employee ;   // employee is a object of type customer
    time_t t;
	FILE *fp ;                   // fp is a  pointer  of type file
	fp = fopen ("cstmrRcrd.txt","a");      
	system("cls");
	printf("\n\tenter account number: ");
	scanf("%d",&employee.acntNo);
	fflush(stdin);
    printf("\tenter your name: ");
	gets(employee.name);
	
    printf("\tenter you r date of birth: ");
    do{
    	printf("\tDay: ");
    	scanf("%d",&employee.dob[0]);   // dob Date Of birth
    	if(employee.dob[0]>32)
    	printf("invalid!\n");
	}while(employee.dob[0]>32);
	
	do{
    	printf("\tMonth: ");
    	scanf("%d",&employee.dob[1]);
    	if(employee.dob[1]> 12)
    	printf("Invalid!\n");
	}while(employee.dob[1]>12);

    do{
    	printf("\tYear: ");
    	scanf("%d",&employee.dob[2]);
    	if(employee.dob[2]>current_year)
    	printf("invalid!\n");
	}while(employee.dob[2]>current_year);
    fflush(stdin);
    printf("\tenter your adderess: ");
    gets(employee.address);
    fflush(stdin);
    printf("\tenter your phone number: ");
    scanf("%lli",&employee.phoneNo);
    fflush(stdin);
    printf("\tenter type of account: \n");
    printf("\tsaving / current : ");
    gets(employee.acntType);
    fflush(stdin);
    do{
    	printf("\tenter 1000 deposite or more than 1000: ");
    	scanf("%d",&employee.deposit);
    	if(employee.deposit<1000)
    	{
    		printf("invalid!");
		}
    	
	}while(employee.deposit<1000);
    
	fwrite(&employee, sizeof(employee),1,fp);
	fclose(fp);
	printf("\nAccount has been created successfully...\n");
	printf("\n_________________________________________________________");
    
}

customerList()     //to display all customer list
{
    system("cls");
    int age ;
	struct customer employee ,emp;
	FILE *fp ;
	fp = fopen ("cstmrRcrd.txt","r");
	
	if(fp == NULL)
	{
		printf("data not found");       
		exit(1);
	}

	while(fread(&employee, sizeof(employee),1,fp)>0)
	{
       
        printf("\nAccount number : %d", employee.acntNo);
        printf("\nname: %s",employee.name)	;
        age = current_year - employee.dob[2];
        printf("\nAge: %d",age);
        printf("\nAddress: %s", employee.address);
        printf("\nPhone number: %lli", employee.phoneNo);
        printf("\n_________________________________________________________\n");
	}
  
	fclose(fp);
}

trnsaction()   
{
    long long acntNumber;
    int choice  , temp;
    int count=0 ;
	unsigned long long wait ;
    long long int amount=0;
    struct customer employee, emp;
	FILE *fp ,*fp2 ;

	system("cls");
	fp = fopen ("cstmrRcrd.txt","r+");
    fp2= fopen ("copy.txt","w+");
    printf("\n\n\t\tEnter account No of the customer: ");
    scanf("%d",&acntNumber);
    while(fread(&employee, sizeof(employee),1,fp)>0)
    {
        if(employee.acntNo == acntNumber)
        {
            emp= employee;
            count++;
        }
        else
        {
            fwrite(&employee, sizeof(employee),1,fp2);
        }    
    }
    fclose(fp);
    fclose(fp2);
    system("cls");
    if(count!=0)
    {
        printf("\n\n\t\t\tDo you want\n\t\t\t[1] Deposit\n\t\t\t[2] withdraw\n");
        printf("\tenter your choice(1 for deposite 2 for withdraw): ");
        scanf("%d",&choice); 
        switch (choice)
        {
            case 1:
            	system("cls");
                printf("\n\n\n\t\tEnter the amount you want to deposite: ");
                scanf("%d",&amount);
                emp.deposit = emp.deposit + amount;//
                
            	
                system("cls");
                
            	printf("\n\n\n\t\t       Amount: %d",amount);
                printf("\n\t\t    Total balance: %d",emp.deposit);
                printf("\n\n\t\t  Deposited successfully... ");
                break;
            case 2: 
				system("cls");
                printf("\n\n\n\t\tenter the amount you want to withdraw: ");
                scanf("%d",&amount);
                if(emp.deposit >amount)
                {
                    emp.deposit = emp.deposit - amount;
                    process();
                    system("cls");
                    
                    printf("\n\n\n\t\t\t    amount: %d",amount);
                    printf("\n\t\t\t  Available balance: %d",emp.deposit);
                    printf("\n\n\t\tWithdrawn successfully....\n");
            
                }
                else
                {
                    printf("your deposited is %d\n",employee.deposit );
                    printf("you can't withdraw\n");
                }
                break;
            default:
                printf("enter viliad choice");
                break;
        }
    }
    else
    {
        system("cls");
        printf("\n\n\t\tthis account No of the customer is not found\n\n");
    }
    fp2= fopen ("copy.txt","a");
    fwrite(&emp, sizeof(emp),1,fp2);
    fclose(fp2);
    printf("\n____________________________________________________");

}

process()
{
	int i;
	system("cls");	        
    printf("\n\n\n\n\n\n\t\t\t\tprocessing");
    fflush(stdout);
    for (i = 0; i < 6; i++) {

        usleep(500 * 900);		            
        fputc('.', stdout);
        fflush(stdout);
    }
}

checkDetail()
{
    struct customer employee, emp;
    int acountNO;
    int count=0, count2=0 , age ;
	FILE *fp ;
    fp = fopen ("cstmrRcrd.txt","r+");
    if(fp == NULL)
    { 
        printf("don't have any customer\n");
        exit(1);
    }
    printf("enter your account number: ");
    scanf("%d",&acountNO);
     while(fread(&emp, sizeof(emp),1,fp)>0){
         if(emp.acntNo == acountNO)
         {
             count++;
            employee = emp;
         }
         count2=1;
     }
     fclose(fp);
   
     if(count==0)
     {
         system("cls");
        printf("customer not existed for this account number\n");

     }
    else
    {
        printf("\naccount number : %d", employee.acntNo);
        printf("\nname: %s",employee.name)	;
        printf("\ndate of birth: %d/%d/%d",employee.dob[0],employee.dob[1],employee.dob[2]);
        age = current_year - employee.dob[2];
        printf("\nAge: %d",age);

        printf("\nAddress: %s", employee.address);
        printf("\nPhone nnmber: %d", employee.phoneNo);
        printf("\nAccount type: %s",employee.acntType);
        printf("\nDeposit: %d",employee.deposit);  // 
        printf("\n_________________________________________________________\n");    
    }
      if(count2==0)
     printf("Don't hve any cuctomer in this bank");
}

deleteAccount()
{
    struct customer employee , emp;
    int acntNo, count=0;
	FILE *fp, *fp2 ;
	system("cls");
	printf("\n\n\n");
	fp = fopen ("cstmrRcrd.txt","r");
    fp2 = fopen ("copy.txt","w+");
    if(fp == NULL)
    {
        printf("\t\tdon't have any customer");
        exit(1);
    }

    printf("\t\tenter account number you want to delete: ");
    scanf("%d",&acntNo);
    while(fread(&employee, sizeof(employee),1,fp)>0){
         if(employee.acntNo != acntNo )
         {
             fwrite(&employee, sizeof(employee),1,fp2)   ;
         }
         else
         {
              emp = employee;
              count++;
         }     
     }
     fclose(fp);
     fclose(fp2);
     if(count==0)
     {
     	system("cls");
     	printf("\n\n\n");
        printf("\t\tCustomer not existed for this account number\n");
     }
     else
     {
     system("cls");
     remove("cstmrRcrd.txt");
     rename("copy.txt","cstmrRcrd.txt");
    printf("\n\n\t\tAccount No: %d\n",emp.acntNo);
    printf("\t\tName: %s\n", emp.name);
    printf("\n\t\tThis account is deleted successfully\n");
	}
    
}
password()
{
	const int trigger = 500; // ms
    const int numDots = 5;
    const char prompt[] = "Loading";
    int i, k=0, lock =0, l, pin, cofrmPin;
	int pswrd, fpswrd, bul=0;
	FILE *fp;
    l1:
    if (fp = fopen("password.txt", "r")){

		do
		{
			system("cls");
			l=25;
			printf("\n\n\t\t");
			while(l)               // to  design
			{
				printf("%c ",5);
				l--;
			}
			if(bul)     
			printf("\n\t\t\t\t  Wrong Pin\n\t\t\t\t  try again");  // if bul = 1 then this line will be print.. it means user entered wrong pin in below code
			printf("\n\n\t\t\t\tEnter Pin: ");
			scanf("%d",&pswrd);        //taking  password  by user  to match system/file password 
			fscanf(fp,"%d",&fpswrd);   // Fetching  password from system file
			
			printf("\n%d  %d",fpswrd,pswrd);
			if(fpswrd == pswrd)
			{
				 while (k < 2) {
			        system("cls");
			        l=25;
			        printf("\n\n\t\t");
		        	while(l)
					{
						printf("%c ",5);
						l--;
					}
			        printf("\n\n\t\t\t\tPlease Wait\n");
			        printf("\r\r\t\t\t\t%s",prompt);
			        fflush(stdout);
			
			        for (i = 0; i < numDots; i++) {
	
			            usleep(trigger * 900);		            
			            fputc('.', stdout);
			            fflush(stdout);
			        }
		       		 k++;
		    	}
				bul = 0;
			}
			else
			{
				bul=1;
				lock++;
			}
			if(lock==4)
			{
				locked();
				system("cls");
				lock=0;	
			}
		}while (bul);
		fclose(fp);	
	}	
	else
	{
		
		
		fp = fopen ("password.txt","w");
		l3:
			printf("\n\n\n\t\t\t Create a pin: ");
		scanf("%d",&pin);
		printf("\t\t\t  Confirm : ");
		scanf("%d",&cofrmPin);
		if(cofrmPin == pin)
		{
			
			fprintf(fp, "%d",pin);
			
		}
		else
		{
			system("cls");
			printf("\n\n\n\t\t\tWrong confirm pin\n\t\t\t  try again: ");
			goto l3;
		}
		
		fclose(fp);
		goto l1;
	}	
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

ATM()
{
    int choice;
    system("cls");
    printf("\n\n\n\t\t[1] Withdraw");
    printf("\t\t\t[2] Check balance\n");
    printf("\n\t\t[3] create a ATM pin & Change pin\n");
    printf("\n\t\t\tente choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        Withdraw();
  
        break;
    case 2:
    	viewbalance();
    	break;
    case 3:
		createChangePin();
		break;	
    default:
        break;
    }
}

Withdraw()
{
    struct customer employee, emp;
    FILE *fp ,*fp2;
    long long int amount ;
    int pin,count, k;
    system("cls");
    
    do
    {
        fp = fopen ("cstmrRcrd.txt","r+");
        fp2= fopen ("copy.txt","w+");
        // system("cls");
        count=1;
        k=1;
        printf("\n\t\t\tenter ATM pin: ");
        scanf("%d",&pin);
        system("cls");

        while(fread(&employee, sizeof(employee),1,fp)>0)
        {
            if(employee.pn == pin)
            {
                printf("\n\n\t\tenter amount you want to withdraw: ");
                scanf("%d",&amount);
                if(employee.deposit < amount)
                {
                	printf("You can not deposite\nYour current ballence is %d",employee.deposit);
                	fwrite(&employee, sizeof(employee),1,fp2); // check this line
				}
				else
				{
					employee.deposit = employee.deposit- amount;
	                process();
	                system("cls"); 
	                printf("\n\n\n\t\t    Withdrawn successfully\n\t\t            %d",amount);
	                printf("\n\t\t   available balance: %d",employee.deposit);
	                fwrite(&employee, sizeof(employee),1,fp2);  		
				}
                count=0;// wait 
                k=0;    // wait
            }
            
        }
        if(count==1)
        {
            system("cls");
            printf("\n\n\n\t\t\t   wrong pin\n\t\t\t   try again");
            printf("\n\t\tdo you want to back press 0. else 1.: ");
   			scanf("%d",&count);    
        }
        fclose(fp2);
        fclose(fp);
    } while (count);
    
    if(!k)
    {
        remove("cstmrRcrd.txt");
        rename("copy.txt","cstmrRcrd.txt");
    }
    printf("\n__________________________________________________________"); 
}
viewbalance()
{
	 struct customer emp;
    int pin;
    int count=0;
	FILE *fp ;
	do
	{
		system("cls");
		count =1;
		  fp = fopen ("cstmrRcrd.txt","r+");
	    if(fp == NULL)
	    {
	        printf("don't have any customer\n");
	        exit(1);
	    }
	
	    printf("\n\n\t\t\tenter ATM pin: ");
	    scanf("%d",&pin);
	    while(fread(&emp, sizeof(emp),1,fp)>0){
	        if(emp.pn == pin)
	        {
	         	system("cls");
	             count=0;
	            printf("\n\n\t\tname: %s",emp.name) ;
	            printf("\t\tbalance : %d",emp.deposit);
	        }
	         
	    }
	    fclose(fp);
   		if(count)
   		{
   			system("cls");
   			printf("\n\n\n\t\t\t\twrong pin");
   			printf("\n\tdo you want to back press 0. else 1.: ");
   			scanf("%d",&count);
   			
		}
	}while(count);
	printf("\n________________________________________________");

     
}
createChangePin()
{
	struct customer emp;
    int acntN, moNo, k=1;
    int count=0, count2;
	FILE *fp, *fp2 ;
	do
	{
		system("cls");
		count =1;
		count2=1;
		k=1;
		  fp = fopen ("cstmrRcrd.txt","r+");
		  fp2 =fopen ("copy.txt","w+");
	    if(fp == NULL)
	    {
	        printf("don't have any customer\n");
	        exit(1);
	    }
		printf("\n\n\t\tEnter account number: ");
		scanf("%d",&acntN);
		printf("\n\t\tEnter your mobile number: ");
		scanf("%d",&moNo);
	
	     while(fread(&emp, sizeof(emp),1,fp)>0){
	     	 count2 =2;
	         if(emp.acntNo == acntN)
	         {
	         	printf("\n%d",emp.acntNo);
	         	count2 =3;
	         	if(emp.phoneNo == moNo)
	         	{
	         		system("cls");
		            count=0;
		            count2=0;
		            k=0;
		          	printf("\n\n\n\t\t\tenter a pin : ");
		          	scanf("%d",&emp.pn);
		          	fwrite(&emp, sizeof(emp),1,fp2);
		          	printf("\n\n\t\t   ATM pin created successfully\n");
				 }
			
	         }
         	 else
			 	fwrite(&emp, sizeof(emp),1,fp2);
		 
	     }
	     fclose(fp);
	     fclose(fp2);
	     if(count2==3)
	     {
	     	system("cls");
	     	printf("\n\n\t\t\tWrong phone number.");
	     	
		 }
		 if(count2==2)
		 {
		 	system("cls");
		 	printf("\n\n\t\t\tWrong account number\n");
		 }
   		if(count)
   		{
   			printf("\n\t\tdo you want to back press 0. else 1.: ");
   			scanf("%d",&count);		
		}
	}while(count);
	if(!k)
	{
		remove("cstmrRcrd.txt");
		rename("copy.txt","cstmrRcrd.txt");
	}
	printf("\n________________________________________________");
}
changeAapLock()
{
    int pin, pin2, newPin ,pinCnfrm;
    FILE *fp;
    system("cls");
    fp = fopen ("password.txt","r+");
    fscanf(fp,"%d",&pin2);
    l11:
    printf("\n\n\n\t\tUse your aap pin and continue: ");
    scanf("%d",&pin);
    
    if(pin2==pin)
    {
    	fclose(fp);
    	fp = fopen ("password.txt","w+");	
        system("cls");
        l10:
        printf("\n\n\n\n\t\t\tenter new pin: ");
        scanf("%d",&newPin);
        printf("\n\t\t\tconfirm: ");
        scanf("%d",&pinCnfrm);
        if(pinCnfrm==newPin)
        {
            fprintf(fp,"%d",pinCnfrm);
            system("cls");
            printf("\n\n\n\t\t   created successfully.");
        }
        else
        {
            system("cls");
            printf("\n\n\n\n\t\t\twrong confirm pin: \n");
            goto l10;

        } 
    }
    else
    {
        system("cls");
        printf("\n\n\t\t\twrong applock pin");
        printf("\n\t\t\t   try again");
        goto l11;
    }
    fclose(fp);
    printf("\n\n________________________________________\n");
}

settings()   // application settings
{
	int choice;
	system("cls");
	printf("\n\n\n\t\t[1] Change applock");
	printf("\n\t\t[2] change theme\n");
	printf("\n\n\t\t\tenter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		  changeAapLock();  // we are calling change app lock function 
		  break;
		case 2: 
			break;
		default:
			printf("invilid choice");	  
	}
	
}

main()
{
    int choice , k=0;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    current_year = tm.tm_year + 1900;
   	printf("\033[0;39m");
    password();
    l6:
    system("cls");
    printf("\n\n\t\t            BANKING MANAGEMENT\n\n");
    printf("\t\t%c%c%c%c%c%c%c%c WELCOME TO THE MAIN MENU %c%c%c%c%c%c%c%c\n\n",6,17,219,178,178,178,178,178,178,178,178,178,178,219,16,6);
    printf("\t[1] Create a new account\n");
    printf("\t[2] View customer list\n");
    printf("\t[3] Transaction with passbook\n");
    printf("\t[4] Check the detail of existing account\n");
    printf("\t[5] Delete account\n");
    printf("\t[6] ATM feature\n");
    printf("\t[7] Settings\n");
    printf("\t[8] Update\n");
    printf("\t[9] Exit \n");
    printf("\n\t\tenter your choice: ");
    scanf("%d",&choice);
    l7:
    switch(choice)
    {
        case 1:
            createAccount();
            break;
        case 2:
            customerList();
            break;
        case 3:
            trnsaction();
            remove("cstmrRcrd.txt");
            printf("\nhello\n");
            rename("copy.txt" ,"cstmrRcrd.txt" );
            break;
        case 4:
            checkDetail();
            break;
        case 5:
            deleteAccount();  
            break; 
        case 6:
		     ATM();
			 break; 
		case 7: 
			settings();
			break;	    
        case 8: 
            Update();
            remove("cstmrRcrd.txt");
            rename("copy.txt" ,"cstmrRcrd.txt" );
            break;
        case 9:	
        	exit (0);
            
    }
    printf("\nenter 1 to go to main menu and 0 for exit: ");
    scanf("%d",&choice);
    if(choice== 1 )
    goto l6; 
    else
    {
        system("cls");
        goto l7;
    }
    
}





