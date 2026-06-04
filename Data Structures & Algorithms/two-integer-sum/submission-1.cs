public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        int complement = 0;
        List<int> result = new List<int>();
        for (int i = 0; i < nums.Length; i++) {
            complement = target - nums[i];
            if (nums.Contains(complement) && Array.IndexOf(nums, complement) != i) {
                result.Add(i);
                result.Add(Array.IndexOf(nums, complement));
                result.Sort();
                break;
            }
        }
        return result.ToArray();
    }
}
