class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        vector<int> combined = arr1;
    combined.insert(combined.end(), arr2.begin(), arr2.end());

    sort(combined.begin(), combined.end());

    int n = combined.size();
    if (n % 2 == 1) {
        return combined[n / 2]; 
    } else {
        return (combined[n / 2 - 1] + combined[n / 2]) / 2.0; 
    }
    }
};
