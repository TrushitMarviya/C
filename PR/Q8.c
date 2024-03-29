#include<stdio.h>
main(){ 
for (int i = 1; i <=5; i++)
{
    for (int s=i;s>=1;s--)
    {
        printf(" ");
    }
for (int j=5;j>=i;j--)
{
    if (i==2&&(j<5&&j>2)||i==3&&(j<5&&j>3))
    {
        printf("  ");
    }
else{
    printf("* ");
}
}
    printf("\n");
}
 return 0;
}