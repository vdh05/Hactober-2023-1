class Solution {
    public int[] twoSum(int[] nums, int target) {
        int sum = 0;

        for (int i = 0; i < nums.length ; i++) {
            sum = target - nums[i];

            for (int j = i+1; j < nums.length ; j++) {

                if (sum == nums[j]) {
                    return new int[]{i, j};
                }
            }

        }

        return new int[] {-1,-1};
    }
}
