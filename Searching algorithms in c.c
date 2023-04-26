#include <stdio.h>

int arr[5] ={12, 45, 87, 93, 106};
int search(int ele){
    if(ele > arr[4])
    {
        printf("Element greater than last index\n");
        return -1;
    }
    int i;
    for(i=0; i<5; i++){
        if(ele == arr[i]){
            printf("Element found\n");
            return i;
        }
        else if(ele<arr[i]){
            printf("Element not found");
            return -1;
        }
        
    }
    if(i==5){
        printf("Element not found\n");
        return -1;
    }

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
 
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
 
    // if we reach here, then element was
    // not present
    return -1;
}
  
}

int main() {
    int index = search(24);
    if(index != -1){
        printf("The value is at %d", index);
    }
    
    return 0;
}
