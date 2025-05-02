#include<stdio.h>
#include<stdlib.h>
#include <string.h>
/***************************** Macros ****************************************/
#define LOWER_PRIORITY_SENTTASK									1
#define HIGHER_PRIORITY_SENTTASK								2
#define RECIEVER_TASK_PRIORITY									3
#define STACKSIZE												1000
#define TASKSTRING												10
#define QUEUESIZE												3
#define NUMBEROF_ITTERATIONS									6
#define TIMESTRINGLENGTH										4
#define BASECASEOFASCIINUM									   '0'

static void createSenderString( unsigned char*textString,unsigned long timeTick)
{

	 unsigned char* Ptr_startString;
	 unsigned char timeString[4];
	 unsigned char*Ptr_endString;
	 unsigned long temp;
	 unsigned char numOfdigits=0;



	 if(timeTick>0)
	 {

	while(timeTick>0)
	{

	timeString[numOfdigits]=(timeTick%10)+BASECASEOFASCIINUM;
	timeTick/=10;
	numOfdigits++;
	}
	timeString[numOfdigits]='\0';

	Ptr_startString=timeString;

	Ptr_endString=timeString;

	while(*(Ptr_endString) != '\0')
		{
			Ptr_endString++;
		}

		Ptr_endString--;


	while(Ptr_endString - Ptr_startString > 0)
	    {
	        temp=*(Ptr_endString) ;
	        *(Ptr_endString) =*(Ptr_startString);
	        *(Ptr_startString)=temp;
	        Ptr_endString --;
	         Ptr_startString++;

	    }
	 }
	 else
	 {
		 timeString[numOfdigits]=0+BASECASEOFASCIINUM;
		 numOfdigits++;
		 timeString[numOfdigits]='\0';


	 }






	strcat(textString,timeString);


}
int main(void)
{
	 unsigned char textString[12]="Time is ";
	 unsigned long timeTick =500;

	createSenderString(textString,timeTick);

	printf("%s",textString);


}




