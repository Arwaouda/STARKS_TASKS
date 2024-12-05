#include<stdio.h>
int main(){
int a,b;
int years=0;
printf("enter the weight of limak,the weight of bob");  
scanf("%d %d",&a,&b);
while(a<=b){
	a*=3;
	b*=2;
	years++;
}
printf("years=%d\n",years);
}


