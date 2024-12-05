#include<stdio.h>
int main(){
int N,M;
printf("enter the first number ,the second number");  
scanf("%d %d",&N,&M);
while(N<=0||M<=0){
	break;
}
 if(M>=N){
int sum=0;
for (int i=N;i<=M;i++){
printf("%d \n", i);
sum+=i;}
printf("sum=%d\n",sum);
}
 else if(M<=N){
int sum=0;
for (int i=M;i<=N;i++){
printf("%d \n", i);
sum+=i;
}
printf("sum=%d\n",sum);
}
}


