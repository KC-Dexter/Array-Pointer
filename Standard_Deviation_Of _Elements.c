#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr,large;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    large=*(ptr);
    for(i=1;i<n;i++)
    {
        if(*(ptr+i)>large)
        large=*(ptr+i);
    }
    printf("The largest element is: %d", large);
    free(ptr);
    return 0;
}
