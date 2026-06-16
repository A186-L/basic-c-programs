#include <stdio.h>

int linearSearch(int arr[], int size, int key);
int main()
{
    int arr[10]={9,7,6,5,1,3,2,8,0,4};
    int index, key;

    printf("Which elements to find?\t ");
    scanf("%d", &key);
 index=linearSearch(arr,10,key);
 if(index==-1){
    printf("Key not found");}
    else{
    printf("Element found at %d", index);
    }
 return 0;
}
int linearSearch(int arr[], int size, int key){
int i;
 for(i=0;i<size;i++){
 if(arr[i]==key){
 return i;
}
}
return -1;
}