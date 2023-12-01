#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
    //******......MALLOC........********
    int* ptr;
    ptr = (int*)malloc(3*sizeof(int));
    // int size = sizeof(ptr);
    // cout<<size<<endl;
    // int arr[50];
    // int siz = sizeof(arr);
    // cout<<siz;
    for(int i = 0; i<3; i++){
        cout<<"enter the value of "<<endl;
        cin>>ptr[i];
    }
    for(int i = 0; i<3; i++){
        cout<<"enter the value of "<<ptr[i]<<endl;
        
    }
    //******......FREE........********
    free(ptr);
    for(int i = 0; i<3; i++){
        cout<<"enter the value of "<<ptr[i]<<endl;
        
    }

    // ********......REALLOC......*************
    ptr = (int *)realloc(ptr,8*sizeof(int));
    for(int i = 0; i<8; i++){
        cout<<"enter the value of "<<endl;
        cin>>ptr[i];
    }
    for(int i = 0; i<8; i++){
        cout<<"enter the value of "<<ptr[i]<<endl;
        
    }
    
    return 0;
}