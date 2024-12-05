#include<stdio.h>
int main(){
int N,A,B;
int sum=0;
printf("enter the first number,the second number,the third number");
scanf("%d %d %d",&N,&A,&B);
for(int i=1;i<=N;i++){
	int digitsum=0;
	int num=i;
	while(num>0){
		digitsum=digitsum+(num%10);
		num/=10;
	}
	if(digitsum>=A&&digitsum<=B){
		sum+=i;
	}
}
printf("sum=%d\n",sum);
}

  

