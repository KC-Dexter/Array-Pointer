#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    float *ptr,sum=0,avg;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    ptr=(float *)malloc(n*sizeof(float));
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%f",(ptr+i));
        sum+=*(ptr+i);
    }
    avg=sum/n;
    printf("The average of the elements is: %.2f", avg);
    free(ptr);
    return 0;
}
