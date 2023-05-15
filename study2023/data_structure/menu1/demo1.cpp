#include<bits/stdc++.h>
#include<algorithm> 
#include<vector> 
using namespace std;


int main(){
    int n[] = {78,22,37,64,52,89};
    int len = sizeof(n) / sizeof(n[0]);
    vector<int> nums(n,n+len);
    sort(nums.begin(),nums.end());
    for(int i = 0;i < len; i++){
        cout << nums[i] << endl;
    }
    int i = 5;
    cout << i/2 << endl;

    return 0;

    
}