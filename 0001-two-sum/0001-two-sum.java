class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer> s=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            int num=nums[i];
            if(s.containsKey(target-num)){
                return new int[] {i, s.get(target-num)};
            }
            s.put(num,i);
        }
        return new int[] {};
    }
}