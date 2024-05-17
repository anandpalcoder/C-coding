#include<stdio.h>
void treverse(int a[],int n)
{
    int k=0;
    while(n>k)
    {
        printf("%d",a[k]);
        k++;
    }
}
int main()
{
    int i,n,a[20];
    printf("how many number you want to treverse");
    scanf("%d",&n);
    if(n>20)
    {
        printf("the size is invaildetry again");
    }
    for(i=0;i<5;i++)
    {
        printf("enter the number:",i+1);
        scanf("%d",a[i]);
        }
        treverse(a,n);
        

    return 0;
}