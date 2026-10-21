class Solution {

    public double findMaxAverage(int[] nums, int k) {

        int start = 0, windowSum = 0;
        double max_sum = Integer.MIN_VALUE;
        for(int end = 0; end < nums.length; end++) {
            windowSum += nums[end];
            if(end - start + 1 == k) {
                max_sum = Math.max(max_sum, windowSum);
                windowSum -= nums[start];
                start += 1;

            }

        }

        return (double) max_sum/k;

    }

}




