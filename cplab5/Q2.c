
#include<stdio.h>

 int main()
 {
     int n,a[100],len;
     int i=0;
     int gcdval;
     printf("Enter integers :");
     while(1>0)
     {  
        scanf("%d",&n);
        if(n>0)
        {
            a[i]=n;
            i++;
        }
        else
        {
            break;
        }
     }
    len=i;
    printf("\n");
    gcdval=a[0];
    int j=1;
    while(j<len)
    {
        if(a[j]%gcdval==0)
        {
            j++;
        }
        else
        {
            gcdval=a[j]%gcdval;
            j++;
        }
    }
     printf("GCD :%d",gcdval);
     printf("\n");
     return 0;
 }

return 0;
 }

 
