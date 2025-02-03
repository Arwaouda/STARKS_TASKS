#include<stdio.h>
int reverse_num(int num){
int reversednum=0;

while(num!=0)
{
	reversednum=reversednum*10+(num%10);
	num=num/10;
	
}
return reversednum;
}
int main(){
	int num;
	printf("enter number");
    scanf("%d",&num);
int x=reverse_num(num);
printf("reversed number=%d\n",x);
}
	

