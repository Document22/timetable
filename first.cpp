// Necessary header files for input output functions
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// main() function: where the execution of
// C++ program begins
int main() {
  
    // This statement prints "Hello World"
    cout << "Hello World";
    cout << "Hello hi";
    cout << "Simple line"<<endl;
    
    int arr[6]= {10,12,22,3,6,3};
    map<int, int> m;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        m.insert({i,arr[i]});
      //  m[arr[i],i];
    }
    for (auto it = m.begin(); it != m.end(); ++it) 
        cout << it->first << " " << it->second
        << endl;
    return 0;
}
   
