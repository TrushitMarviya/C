#include <stdio.h>
void main()
{
    int num, n = 2, ret = 0;
    printf("Enter a number: ");
    scanf("%d", &num);  
    if (num == 1)
    {
        ret = 0;
    }
    else if (num == 2)
    {
        ret = 1;
    }
    else
    {
        do
        {
            if (num % n != 0)
            {
                ret++;      
            }
            else
            {
                ret = 0;
                break;
            }
            n++;
        } while (n < num);
    }
    if (ret != 0)
    {
        printf("Prime number\n");
    }
    else
    {
        printf("Not a prime number\n");
    }
    main();
}