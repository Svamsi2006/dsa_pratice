### matrices 
```
#include <bits/stdc++.h>
using namespace std;


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


```




###emo

```



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int hi=nums.size();
        map<int, int> n;
        for(int i=0;i<hi;i++){
            for(int j=1+i;j<hi;j++){
                if(nums[i]+nums[j] == target){
                    
                    return {i,j};
                }
            }
        }
        return {};
    }
};
```
