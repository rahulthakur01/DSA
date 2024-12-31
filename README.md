# DSA vector<int> findArrayIntersection(vector<int>& arr1, int n, vector<int>& arr2, int m) {
    vector<int> ans;
    int i = 0, j = 0;
    
    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            if (ans.empty() || ans.back() != arr1[i]) {
                ans.push_back(arr1[i]);  // Avoid duplicates in the result
            }
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }
    
    return ans;
}
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> sett(nums1.begin(), nums1.end());
    vector<int> result;

    for (int num : nums2) {
        if (sett.find(num) != sett.end()) {
            result.push_back(num);
            sett.erase(num);  // To ensure no duplicates in the result
        }
    }

    return result;
}

int main() {
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    vector<int> result = intersectionArray(nums1, nums2);

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
