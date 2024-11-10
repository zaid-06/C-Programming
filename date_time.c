#include<stdio.h>
#include<time.h>
int main()
{
	FILE *fp;
	char a[20];
    fp = fopen("transactionHistory.txt", "a+");
    

    time_t t;   // not a primitive datatype
    time(&t);

    fprintf(fp,"%s", ctime(&t));
    fclose(fp);
    fp = fopen("transactionHistory.txt", "a+");
    scanf(fp,"%s", &a);
	
    printf("\n\n\t\t\tCoding is Fun !  %s",a);
    fclose(fp);
    return 0;
}
//// C program to demonstrate setdate() method 
//  
//#include <dos.h> 
//#include <stdio.h> 
//  
//int main() 
//{ 
//    struct date dt; 
//  
//    // This function is used to get 
//    // system's current date 
//    getdate(&dt); 
//  
//    printf("System's current date\n"); 
//    printf("%d/%d/%d", 
//           dt.da_day, 
//           dt.da_mon, 
//           dt.da_year); 
//  
//    printf("Enter date in the format (date month year)\n"); 
//    scanf("%d%d%d", &dt.da_day, &dt.da_mon, &dt.da_year); 
//  
//    // This function is used to change 
//    // system's current date 
//    setdate(&dt); 
//  
//    printf("System's new date (dd/mm/yyyy)\n") 
//        printf("%d%d%d", dt.da_day, dt.da_mon, dt.da_year); 
//  
//    return 0; 
//} 
