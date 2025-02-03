#include<stdio.h>
  int decimal_to_binary(int num){
if(num==0)
	return 0;
if(num>1)
{
	decimal_to_binary(num/2);
  }
  printf("%d",num%2);
  }
int main(){
	int num;
	printf("enter the number");
    scanf("%d",&num);

decimal_to_binary(num);
}

	