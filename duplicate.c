#include<stdio.h>
int main()
{
    int i,a,j;
    printf("Enter the number: ");
    scanf("%d",&a);
    int b[a],c[a];
    
    for(i=0;i<a;i++)
        c[i]=0;
        
    for(i=0;i<a;i++)
        scanf("%d",&b[i]);
        
    for(i=0;i<a-1;i++)
        if(c[i]!=1)
    		for(j=i+1;j<=a;j++)
    			if(b[i]==b[j])
       			{ 
       				c[i]=c[i]+2;
         			c[j]=1;
         		}
    printf("\n");
    
    for(i=0;i<a;i++)
        if(c[i]>1)
        	printf("%d repeat %d times.\n",b[i],(c[i]/2)+1);

    return 0;
}
