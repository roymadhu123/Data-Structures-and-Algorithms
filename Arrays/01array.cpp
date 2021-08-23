#include<iostream>
using namespace std ;

int main() {
    int n ;
    int marks[100];
    cout<< "Enter the number of students :" << endl ;
    cin >> n ;
    for(int i=0 ;i<n ;i++){
        cout<< "Enter the marks of "<< i << " student" << endl ;
        cin>>marks[i] ;
    }
    for(int i ; i<n ;i++){

        cout << "The marks of "<<i << " student is " << marks[i] << endl ;
    }
    return 0;
}