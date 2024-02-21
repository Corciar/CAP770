

#include <bits/stdc++.h>
using namespace std;

int main(){

for(int i=0;i<n-1;i++){
    bool swapped = false;   
    for(int j=i+1;j<n-1;j++){
        swap(arr[j] > arr[j+1]);
         swapped = true;        
    }
}

if (swapped == false)
    break;

return 0;
}

/*
TC == O(n2)
SC == O(1)
*/
