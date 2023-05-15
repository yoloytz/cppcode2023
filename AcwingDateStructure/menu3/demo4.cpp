#include <bits/stdc++.h>

using namespace std;

int main(){
    int nums[] = {1, 3, 5, 6};
    int target = 2;
    int len = sizeof(nums)/sizeof(int);
    cout << len << endl;

    int l = 0, r = len - 1;
    //int mid = (r + l) >> 1;
    

    while( l <= r ){
           int mid = (r + l) / 2 ;
           cout << "mid = " << mid << endl;
           if(target == nums[mid]) return mid;
           if(target < nums[mid]) r = mid - 1;
           if(target > nums[mid]) l = mid + 1;
       }
    
    return l;
}