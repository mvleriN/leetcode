#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> nums(n);
    for (int i = 0; i < n; ++i){
        cin >> nums[i];
    }

    int k;
    cin >> k;
    
    long long max_el = *max_element(nums.begin(),nums.end());
    long long cnt = 0;
    long long left = 0, right = 0, ans = 0;
    while (right < n){
        if (nums[right] == max_el){
            cnt++;
        }
            
        while (cnt >= k){
            if (nums[left] == max_el){
                cnt--;
            }
                left++;
                ans += n - right;
            }    
        
        right++;
    }

    cout << ans;
    
    return 0;
}