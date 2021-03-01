#include<stdio.h>
int main()
{
    int x=4,i,j,l,v=0,y=0;
    if(x>3&&x<=1000)
        scanf("%d",&x);
    int d[x][3],k[x];
    for(i=0; i<x; i++)
        for(j=0; j<3; j++)
            scanf("%d",&d[i][j]);
    for(i=0; i<x-2; i++)
    {
        for(j=0; j<3; j++)
        {
            if(j==0)
                k[i]+=(d[i][j]*4)+(d[i+1][j]*4)+(d[i+2][j]*4);
            else if (j==1)
                k[i]+=(d[i][j]*2)+(d[i+1][j]*2)+(d[i+2][j]*2);
            else if (j==2)
                k[i]+=(d[i][j])+(d[i+1][j])+(d[i+2][j]);

        }
    }
    l=k[0];
    for(i=0; i<x-2; i++)
    {
        if(l<k[i])
        {
            l=k[i];
            v=i;
        }
    }
    l=k[0];
    for(i=0; i<x-2; i++)
    {
        if(l>k[i])
        {
            l=k[i];
            y=i;
        }
    }
    printf("%d %d",v+1,y+1);
    return 0;
}
