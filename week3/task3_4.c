#include<stdio.h>
int is_perfect(int n){
int sum=0;
for(int i=1;i<n;i++){
	if (n%i==0)
	{
		sum=sum+i;
	}
}
	return n==sum;
}
int main() {
	for(int i=1;i<=100;i++){
		if (is_perfect(i))
printf("num=%d\n",i);
	}
}