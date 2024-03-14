#include<stdio.h>
int main(){
    int unit,bill ;
printf("Enter Units:");
scanf("%d",&unit);
if (unit<=50 && unit>=0)
{
  bill=unit*.50;
      bill=(bill*0.2)+bill;
    printf("Bill is:%d",bill);
}

else if(unit<=150 && unit>=50)
{
    bill=50*0.50;
    bill=bill+(unit-50)*0.75;   
}
else if(unit<=250 && unit>=150)
{
    bill=50*0.50;
    bill=100*0.75+bill;
    bill=bill+(unit-150)*1.20;
}
else if (unit>=250)
{
    bill=50*0.50;
    bill=100*0.75+bill;
    bill=100*1.20+bill;
    bill=bill+(unit-250)*1.50;
}
   bill=bill*0.20+bill;
   printf("%d",bill);
return 0;
}