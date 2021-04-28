#include <stdio.h>

int main()
{
    int n,list[50],comp[50],i,j,k,temp;
    
    printf("Enter the no. of files: ");
    scanf("%d",&n);
    printf("Enter values: ");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&list[i]);
    }
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++){
            if(list[i]>list[j])
            {
                temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
        }
    }
    
i=0;k=0;
    
comp[k]=list[i]+list[i+1];
i=2;
while(i<n)
{
    k++;
    if((comp[k-1]+list[i])<=(list[i]+list[i+1]))
    {
    comp[k]=comp[k-1]+list[i];
    }
    else
    {
    comp[k]=list[i]+list[i+1];
    i=i+2;
    while(i<n)
    { 
    k++;
    if((comp[k-1]+list[i])<=(comp[k-2]+list[i]))
        {
        comp[k]=comp[k-1]+list[i];
        }
    else
        {
        comp[k]=comp[k-2]+list[i];
        }
    i++;
        }
        }
    i++;
}
        
k++;
comp[k]=comp[k-1]+comp[k-2];

printf("Merged pattern:\n");
for(k=0;k<n-1;k++)
{
    printf("%d \n",comp[k]);
}
    return 0;
}
