#include<stdio.h>
int pw(int n,int p){
    int i, Ans=1;
    for(i=1;i<=p;i++){
     Ans= n * Ans;
    }
    return Ans;
}
int main(){
int num, pwr;
printf("Enter number :\t");
scanf("%d", & num);
printf("Enter power :\t");
scanf("%d", & pwr);
printf("The answer is%d", pw(num, pwr));
return 0;
}