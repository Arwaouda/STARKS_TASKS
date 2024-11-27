#include<stdio.h>
int main(){
	int n1;
	int n2;
	printf("enter the two numbers:");
	scanf("%d",&n1);
	scanf("%d",&n2);
	int sum=n1+n2;
	int sub=n1-n2;
	int multi=n1*n2;
	int div=n1/n2;
	printf("sum is %d\n",sum);
	printf("subtraction is %d\n",sub);
	printf("multiplication is %d\n",multi);
	printf("division is %d\n",div);
}
	