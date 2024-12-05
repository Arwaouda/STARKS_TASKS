#include<stdio.h>
int main(){
	int num;
	int count=1;
	printf("enter the number of lines:");
    scanf("%d",&num);   
	for (int i=1 ;i<=num ;i++){
    printf("%d %d %d PUM\n" ,count,count+1,count+2);
	count=count+4;
	}
}