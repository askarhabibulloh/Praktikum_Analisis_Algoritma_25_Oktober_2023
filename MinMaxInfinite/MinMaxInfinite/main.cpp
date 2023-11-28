
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    bool loop = true;
    while (loop) {
        
        string input;
        cout << "Masukkan string angka (dipisahkan oleh spasi) : ";
        getline(cin, input);

        istringstream ss(input);
        int number;
        vector<int> arr;

        while (ss >> number) {
            arr.push_back(number);
        }

        cout << "Array yang anda masukkan adalah: ";
        for (int element : arr) {
            cout << element << " ";
        }

        sort(arr.begin(), arr.end());

        cout << "\nElemen paling kecil adalah: " << arr[0] << endl;
        cout << "Elemen paling besar adalah: " << arr[arr.size() - 1] << endl;

        string gatau="y";
        cout<<"Ulangi program? (y/n) : ";
        cin>>gatau;
        cin.ignore();
        
        if (gatau == "n" || gatau == "N") {
            loop = false;
        }
        if (gatau == "y" || gatau == "Y") {
            loop = true;
            
            
        }

    }
    return 0;
}



