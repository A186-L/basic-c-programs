// Umang Tandel
// 2503033111372062
#include<stdio.h>
int main(){
	int num1,num2,sum,sub,mul,div,mod;
	printf("Enter Number1:\t");
	scanf("%d",& num1);
	printf("Enter Number2:\t");
	scanf("%d",& num2);
	sum=num1+num2;
	printf("\n Addition of %d&%d is\t%d",num1,num2,sum);
    sub=num1-num2;
    printf("\n Subtraction of %d&%d is\t%d",num1,num2,sub);
    mul=num1*num2;
    printf("\n Multiplication of %d&%d is\t%d",num1,num2,mul);
    div=num1/num2;
    printf("\n Division of %d&%d is\t%d",num1,num2,div);
    mod=num1%num2;
    printf("\n Modulus of %d&%d is\t%d",num1,num2,sum);
return 0;
}
