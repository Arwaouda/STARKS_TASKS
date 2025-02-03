#include<stdio.h>
int qualityPoints(int averge){
	if (averge>=90&&averge<=100){
		return 4;
	}
	else if (averge>=80&&averge<=89){
		return 3;
	}
	else if (averge>=70&&averge<=79){
		return 2;
	}
	else if (averge>=60&&averge<=69){
		return 1;
	}
	else 
	return 0;
return averge;
}
int main(){
	int average;
	printf("enter degree");
    scanf("%d",&average);
int x= qualityPoints( average);
printf("aveage=%d\n",x);
}

	
	
		