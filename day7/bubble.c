#include<stdio.h>
int main()
{
    int arr[5]={1,5,4,9,8};
    int temp;
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4-i;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
    }
}
    printf("Sorted array is:\n");
    for(x=5;x<5;x++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}