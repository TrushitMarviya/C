#include<stdio.h>
struct Book{
    int id ;
    char title[100];
    char author[100];
    char genre[100];
    char publisher[100];
    int publication_year;
    int price;
}book[1000];

main(){
int n;
printf("Enter Books Number:");
scanf("%d",&n);

for (int i = 0; i < n; i++)
{
    printf("Enter Book ID:");
    scanf("%d",&book[i].id);
    printf("Enter Book Title:");
    scanf("%s",&book[i].title);
    printf("Enter Book Author:");
    scanf("%s",&book[i].author);
    printf("Enter Book Genre:");
    scanf("%s",&book[i].genre);
    printf("Enter Book Publisher:");
    scanf("%s",&book[i].publisher);
    printf("Enter Book Publication Year:");
    scanf("%d",&book[i].publication_year);
    printf("Enter Book Price:");
    scanf("%d",&book[i].price);
}
for (int i = 0; i < n; i++)
{
    printf("%d\n %s\n %s\n %s\n %s\n  %d\n %d\n",book[i].id,book[i].title,book[i].author,book[i].genre,book[i].publisher,book[i].publication_year,book[i].price);
}
}