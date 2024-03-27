    #include<stdio.h>
    main(){
        int n,fact=1;
        printf("Enter Number:");
        scanf("%d",&n);
        for ( int i = n; i >=1; i--)
        {
        fact=fact*i;
        }
        printf("Sum is :%d",fact);            

    }