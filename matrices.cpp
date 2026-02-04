#include <bits/stdc++.h>
using namespace std;
//hi bro 

int main() {
	// your code goes here
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    vector<int> hi,bye;
    for(int i=0;i<3;i++){
        int max=arr[i][0];
        int min=arr[i][0];
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
            if(max<arr[i][j]){
                max=arr[i][j];
            }
            if(min>arr[i][j]){
                min=arr[i][j];
            }
        }
        hi.push_back(max);
        bye.push_back(min);
        cout<<endl;
    }
      cout<<endl;
    for(int i:hi){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i:bye){
        cout<<i<<" ";
    }
    
}
