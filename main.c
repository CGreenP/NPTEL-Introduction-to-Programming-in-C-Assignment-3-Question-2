#include <stdio.h>
#include <stdlib.h>
int main()
{
    float n1,n2,n3,n4=0.0;
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    while(n4!=(-1.0))
    {
        scanf("%f",&n4);
        if(n4==(-1.0))
        {
            printf("%.1f ",(n3+n2+n1)/3);
            break;
        }
        printf("%.1f ",(n3+n2+n1)/3);
        n1=n2;
        n2=n3;
        n3=n4;
    }
    return 0;
}
