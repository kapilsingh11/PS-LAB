//print 1-10 except 6
#include<stdio.h>
int main()
    {
        int i;
        
        for ( i = 1; i <=10; i++)
        {
                 
            if (i==6)
            {
                continue;
            }
        printf("%d \n",i);
        }
    return 0;    
    }

