#include<stdio.h>
int main(){
    int arr[5]={6,7,3,8,5};
    int key=8;
    int found = 0;
    for(int i=0; i<5;i++)
    {
        if(arr[i]==key){
        
            printf("Element found at index %d\n", i);
            found = 1;
      
        }
       break;
        if(!found){
            printf("Element not found\n",key);
        }
    }
    return 0;
}
