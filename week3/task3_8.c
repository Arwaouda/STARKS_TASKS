#include<stdio.h>
float min_num(float num1,float num2,float num3){
	float min=num1;
if(num2<min){
	min=num2;
}
if(num3<min){
	min=num3;
}
return min;
}
int main(){
	float num1;
	float num2;
	float num3;
printf("enter the first number ,the second number,the third number");  
	scanf("%f %f %f",&num1,&num2,&num3);
float x=min_num(num1,num2,num3);
printf("minimum number=%f\n",x);
}

	