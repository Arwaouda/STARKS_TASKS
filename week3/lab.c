
#include<stdio.h>
int calc_averg(int num1,int num2){
	static int count=0;
	++count;
int averge=(num1+num2)/2;
printf("count=%d\n",count);

return count;
}

