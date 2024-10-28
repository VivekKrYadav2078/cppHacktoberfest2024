#include <iostream>
using namespace std;

int main(){
    int arr[10]={2,3,4,5,6,8,10,12,15,20};
    int l=0;
    int h=9;
   
    int key=8;
    // cout<<mid;

    while(l<=h){
        int mid=(l+h)/2;
        if (arr[mid]==key)
        {
            cout<<"Found at index"<<mid;
            break;
        }
        else if (key<arr[mid])
        {
            h=mid-1;  
        }
        else 
        {
            l=mid+1;   
        }
        
    }
    


}
    
    