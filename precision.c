#include<stdio.h>

int main()
{
    int precision=0;
    scanf("Enter 1 for double precision, 0 for single precision:%d",&precision);
    if(precision)
    {
	#define fp double
    }
    else
    {
	#define fp float
    }
    fp avalue=1.23432890606980238530298509348530968309680322341;
    fp b = avalue*avalue;
    printf("Value:%30.20f", b);
   
    
    return 0;
}
