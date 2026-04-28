#include<bits/stdc++.h>

using namespace std;


int main(){

    int n ;
    cout <<"Enter the Size of Array : ";

    vector<int> arr(n);

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cout <<"Array Values are : ";

    for(int i =0; i<n; i++){
        cout << arr[i];
    }

    cout << "After doing sorting " << endl;

    sort(arr.begin() , arr.end());

    for(int i =0; i<n; i++){
        cout << arr[i];
    }

    return 0;

}