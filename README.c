#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,j,t=0,c=0;
    for(i=2;i<=n;i++){
        j=i;
        while(j){
        t=j%10;
        j=j/10;
        if(t==2)
        {
            c++;
        }
        
        }
    
    }
    printf("%d",c);
        
    return 0;
}
