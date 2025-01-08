class Solution {
    public int climbStairs(int N) {
        if(N == 1)
            return N;
        else
        {
            int N1 = 1,N2 = 2;
            for(int i = 2; i < N; i++)
            {
                int temp = N2;
                N2 = N2 + N1;
                N1 = temp;
            }
            return N2;
        }
    }
}