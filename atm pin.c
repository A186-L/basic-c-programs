#include<stdio.h>
int main(){
	int pin, a=2208;
	int i;
	for(i=1; i<=3;i++){
		printf("Enter PIN:");
		scanf("%d",&pin);
		
		if(pin==a){
			printf("the pin is correct on attempt%d\n",i);
			break;
		}
		else{
			printf("wrong PIN");
			continue;
		}
		return 0;
	}
}
