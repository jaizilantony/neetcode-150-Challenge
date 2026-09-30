class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashSet<Integer> hs =  new HashSet<>();

        for(int i : nums)
        {
            if(!(hs.contains(i)))
            {
                hs.add(i);
            }
            else
            {
                return true;
            }
        }

        return false;
    }
}