#include<iostream>
using namespace std ;

int binary_search(int arr[],int n ,int key) {

    int s=0 ;
    int e=n-1 ;

    while (s<=e){
        int mid= (s+e)/2 ;
        if (arr[mid]==key){
            return mid ;
        }

        else if (arr[mid]<key)
        {
            s=mid+1 ;

        }

        else {
            e=mid-1;
        }
        
    }

    return -1 ;

}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int) ;
    int key ;

    cout << "Enter the number to be found :"<< endl ;
    cin>> key ;

    int index = binary_search(arr,n,key) ;
        if (index==-1){
        cout << "Not in array" << endl ;
    }
    else{
         cout << "The index is : " << index << endl ;
    }
   
    return 0 ;

}