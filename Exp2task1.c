include<stdio.h>

int main()
{
    int n;

    printf("enter a number:");
    scanf("%d",&n);
    if(n%2==0)
    {
          printf("the number %d is even.\n",n);
    }
    else
    {
        printf("the number %d is odd .\n",n);

    }

    return 0;
}

\*output
enter a number:59
the number 59 is odd .

Process returned 0 (0x0)   execution time : 14.282 s
Press any key to continue.
