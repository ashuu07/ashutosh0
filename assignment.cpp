#include<stdio.h>
float converter(int n, float curren);
main(){
	int n;
	float curren,x;
	printf("Converting the currency:\n");
	printf("INR=0    AUS=1\n");	
	printf("\n");
	scanf("%d", &n);
	if(n==0){
		printf("Enter INR:");
		scanf("%f",&curren);
		x=converter(n,curren);
	}
	else if(n==1){
		printf("Enter AUS:");
		scanf("%f",&curren);
		x=converter(n,curren);
	}
	printf("Nepali ruppees is %f",x);
}

float converter(int n, float curren){
	float NPR;
	if(n==0){
		NPR = 1.60 * curren;
		return NPR;
	}
	else if(n==1){
		NPR = 88.50 * curren;
		return NPR;
	}
}


