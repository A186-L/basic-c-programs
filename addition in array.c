#include<stdio.h>
int main(){
int a[5]={1,1,1,1,1},b[5]={2,2,2,2,2},c[5],i;
for(i=0;i<=4;i++){
c[i]=a[i]+b[i];
}
printf("addition of a and b");
for(i=0;i<=4;i++){
	printf("%d",c[i]);
}
return 0;
}

