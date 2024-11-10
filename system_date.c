#include<stdio.h>
#include<windows.h>

//system time
//windows has its own systemtime structure wich stores information on the date and time 
//typedef struct_systemtime
//{
//	WORD wYear;
//	WORD wMonth;
//	WORD wDayOfWeak;
//	WORD wDay;
//	WORD wHour;
//	WORD wMinute;
//	WORD wSecond;
//	WORD wMillisecond;
//	
//} SYSTEMTIME;
void main()
{
	SYSTEMTIME stime;
	
	GetSystemTime(&stime);
	printf("%d / %d / %d   hour: %d   \n%d", stime.wDay, stime.wMonth,stime.wYear, stime.wHour, stime.wMinute);
	
}



