#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cout <<"Enter the size of Array : ";
    cin >> n;

    vector<int > arr(n);

    cout<<"Enter the arr values : ";


    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout<<"Array Values are : ";

    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }

    

    int first_Max = INT_MIN;
    int second_Max = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i] > first_Max){
            first_Max = arr[i];
        }
    }

    for(int i=0; i<n; i++){

        if(second_Max < arr[i] && arr[i] != first_Max){
            second_Max = arr[i];
        }
    }

    cout << endl <<"First maximum Value is : " << first_Max << endl;

    cout <<  endl  <<"Second Maximum value is : " << second_Max << endl;
}