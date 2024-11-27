#include<stdio.h>
int main(){
	float n1;
	float n2;
	float x;
printf("enter num1:");
scanf("%f",&n1);
printf("enter num2:");
scanf("%f",&n2);
printf("the two numbers before swap is %f %f\n",n1,n2);
x=n1;
n1=n2;
n2=x;
printf("the two numbers after swap is %f %f\n",n1,n2);
}

