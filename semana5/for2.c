#include<stdio.h>
int main()
{
	float temp_C,temp_K;
	float Temp_C=100,final=200,delta;
	int n=10,i,T=1	;
	char op[2];
	while (T==1){
	delta=(final-Temp_C)/n;
	for(i=0;i<n;i++){
			temp_K=temp_C+273.15;
			printf("%f %f\n",temp_C,temp_K);
			temp_C=temp_C+delta;
			temp_C+=delta;
		}
		printf("Quieres hacerlo otra vez? \n1)si \n2)no\n ");
		scanf("%s",&op);
		if(OP=='n'||op=='N'){T=0;}
	}
}
