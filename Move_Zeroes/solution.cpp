class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        //Solution 1:
        // int left = 0;
        // int right = nums.size() - 1;

        // // Count the zeros at the beginning of the array using a while loop
        // int count = 0;
        // while (count < nums.size() && nums[count] == 0) {
        //     count++;
        // }

        // // If all elements are zeros, no need to proceed further
        // if (count == nums.size()) {
        //     return;
        // }

        // // Process the array to move zeros to the end
        // while (left < right) {
        //     if (nums[left] == 0) {
        //         nums.erase(nums.begin() + left);
        //         nums.push_back(0);
        //         right--;  // Decrement right since we added a zero at the end
        //     } else {
        //         left++;
        //     }
        // }
        //Solution 2:
        // int nonZeroIndex = 0;

        // // Move all non-zero elements to the front
        // for (int i = 0; i < nums.size(); ++i) {
        //     if (nums[i] != 0) {
        //         nums[nonZeroIndex++] = nums[i];
        //     }
        // }

        // // Fill remaining positions with zeros
        // for (int i = nonZeroIndex; i < nums.size(); ++i) {
        //     nums[i] = 0;
        // }

        //Solution 3: 
         int nonZeroIndex = 0;

        // Move all non-zero elements to their correct positions
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0) {
                nums[nonZeroIndex++] = nums[i];
            }
        }

        // Fill the remaining positions with zeros
        while (nonZeroIndex < nums.size()) {
            nums[nonZeroIndex++] = 0;
        }
    

    }
};