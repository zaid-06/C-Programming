#include<stdio.h>
#include<string.h>
main()
{
       char arr[7][100] = { "mon", "tue", "wed", "thu","fri", "str","sun"};
       char ar[] = "sun";
       
       int k = 2, a  , i, cnt = 0;
       for (i =0 ; i< 7 ; i++)
       {
       	cnt ++;
       	if (!strcmp(ar , arr[i] ))
       	{
       		break;
		}
	   }
       a = k % 7 ;
        a = cnt + a;
       if(a > 7)
       	a = a - 7 ;
     	a --;	
   	  printf("%s", arr[a]);
       
}
