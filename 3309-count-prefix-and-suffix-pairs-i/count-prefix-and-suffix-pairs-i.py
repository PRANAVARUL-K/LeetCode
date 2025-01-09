class Solution:
    def isPrefixAndSuffix(self,s1: str,s2: str) -> bool:
        print("check ",s1,"s1: ",s2[:len(s1)],"s2: ",s2[len(s1)*(-1):])
        if(s1 == s2[:len(s1)] and s1 == s2[len(s1)*(-1):]):
            return True
        return False
    def countPrefixSuffixPairs(self, words: List[str]) -> int:
        count = 0
        for i in range(len(words)):
            for j in range(i+1,len(words)):
                if(i != j and self.isPrefixAndSuffix(words[i],words[j])):
                    print()
                    count = count + 1
        return count