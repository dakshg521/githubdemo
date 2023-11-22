#include<stdio.h>
#include<conio.h>
int main()
{
 float p,tp,q;

 printf("Enter Quantity : ");
 scanf("%f",&q);

 printf("\nEnter Price per item : ");
 scanf("%f",&p);

 tp=q*p;

 if(q>1000)
 {
     tp=tp*0.9;
 }
 printf("\nTotal Price : %f",tp);
        printf("\n\nPATEL DHRUV - CE - 23TCEYM0\n\n");
 return 0;
}
