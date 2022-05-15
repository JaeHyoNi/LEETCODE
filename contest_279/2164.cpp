#include <bits/stdc++.h>
using namespace std;

vector<int> sortEvenOdd(vector<int> &nums){
    vector<int> odd,even;
    int siz = nums.size();
    for(int i=0;i<siz;i++){
        if(i%2 == 0) even.emplace_back(nums[i]);
        else         odd.emplace_back(nums[i]);
    }
    nums.clear();
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end(),greater<>());
    auto even_iter = even.begin(),odd_iter = odd.begin();
    for(int i=0;i<siz;i++){
        if(i%2 == 0) nums.emplace_back(*even_iter++);
        else nums.emplace_back(*odd_iter++);
    }
    return nums;
}


int main(){
    vector<int> arr = {36,45,32,31,15,41,9,46,36,6,15,16,33,26,27,31,44,34};
    arr = sortEvenOdd(arr);
    for(auto K:arr){
        cout<<K<<" ";
    }
}