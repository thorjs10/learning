#include <stdio.h>

int main()
{
    int i ,j ,n,k;
    printf("the number n :");
    scanf("%d",&n);
    if(n%2== 0 )
    { 
        printf("%d is even",n);
        k = n/2;
        
    }
    else
    {
        printf("%d is odd",n);
          k= n/2 +1;
          printf("\n");
    }
    
    printf("%d",k);
    printf("\n");

    for (i=0;i<=k;i++)
    {
        int z=2*k-1;
        for (j=0;j<n;j++)
        {
            if((j<i)||(j>(n-i-1)))
            { printf(" ");}
            else{
                printf("*");
            }
            
        }
        printf("\n");
    }
}