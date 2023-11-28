//
//  main.cpp
//  Min-Max-Array
//
//  Created by Muhammad Askar Habibulloh on 24/10/23.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    bool loop = true;
    while (loop) {
        
        int a;
        cout<<"Masukkan julah elemen array : ";
        cin>>a;
        int arr[a];
        
        for (int i =0;i<a;i++){
            cout<<"Masukkan angka ke "<<i+1<<" : ";
            cin>>arr[i];
        }
        cout<<"Array yang anda masukkan adalah : ";
        for (int i = 0; i<a; i++) {
            cout<<arr[i]<<" ";
        }
        int n = static_cast<int>(sizeof(arr) / sizeof(arr[0]));
        sort(arr, arr + n);
        cout<<endl<<"Elemen paling kecil adalah : "<<arr[0]<<endl<<"Elemen paling besar adalah : "<<arr[a-1]<<endl;
        
        cout<<"Ulangi program? (y/n)"<<endl;
        string b;
        cin>>b;
        if (b=="n"||b=="N")loop = false;
        
    }
    
    return 0;
}

