#include<stdio.h>
int main(){
int v,A,B,C;
	printf("enter the amout of shampoo ,the amount used by the father, the amout used by the mother ,the amount used by takashi:");
	scanf("%d %d %d %d",&v,&A,&B,&C);
	if(v<A)
		printf("f\n");
	v-=A;
	 if (v<B)
		printf("m\n");
	v-=B;
	if(v<C)
			printf("t\n");
	v-=C;
	
}
