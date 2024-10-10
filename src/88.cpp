class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        nums1.erase(nums1.begin() + m, nums1.end());

        int k = 0;

        for (size_t i = 0; i < nums2.size(); ++i) {
            int elMin = nums2[i];

            while (k <= nums1.size()) {
                int elMax = (k < nums1.size()) ? nums1[k] : INT_MAX;

                if (elMin <= elMax) {
                    nums1.insert(nums1.begin() + k, elMin);
                    break;
                }
                k++;
            }
        }
    }
};