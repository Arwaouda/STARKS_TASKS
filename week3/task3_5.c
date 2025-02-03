#include <stdio.h>
int prime_num(int num){
	if (num<2){
		return 0;
	}
 for (int i=2;i<num;i++){
 if (num%i==0)
return 0;
	}
	return 1;
}

int main(){
    int num;
    printf("Enter the number ");
    scanf("%d", &num);
int x=prime_num(num);
if(x)
printf("%d is a prime number\n",num);
else
printf("%d is not a prime number\n",num);
	
}
	
	
