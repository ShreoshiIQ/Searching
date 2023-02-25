#include <iostream>
using namespace std;

int binary_search(int arr[],int size,int target)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    
    while(start<= end){
    int element = arr[mid];
    if(target == element)
    {
        return mid;
    }
   
    if(target < element)
    {
        end = mid-1;
        
    }
    else{
        start = mid+1;
    }
    mid= start + (end - start)/2;
    }
    return -1;

}
int main(){
    int arr[]={4,6,7,8,24,67};
    int size= 6;
    int target =24;
    int indexoftarget = binary_search(arr,size,target);
    if(indexoftarget ==-1)
    {
        cout<<"Target is not found"<<endl;
    }
    else{
        cout<<"Target is found at index "<<indexoftarget <<endl;
    }
    return 0;
}