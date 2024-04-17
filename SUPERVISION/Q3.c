#include<stdio.h>
enum week{
    Sunday , Monday , Tuesday , Wednesday ,Thursday ,Friday ,Saturday 
}day[7];
int main(){

for (int i = Sunday; i <= Saturday; i++)
{
    printf("%d\n",i);
}
return 0; 
}