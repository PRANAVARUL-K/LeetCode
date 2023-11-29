class Solution(object):
    def hammingWeight(self, n):
        i = 0
        while(n != 0):
            n = n & (n-1)
            i += 1
        return i
        