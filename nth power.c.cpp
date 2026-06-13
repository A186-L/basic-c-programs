#include <stdio.h>
int main()
{
    int num, p,Ans=1, i;
    printf("Enter the number:\t");
    scanf("%d", &num);
    printf("Enter the power:\t");
    scanf("%d", &p);
    for(i = 1; i <= p; i++)
    {
        Ans = Ans * num;
    }
    printf("Answer is %d",Ans
    );

    return 0;
}