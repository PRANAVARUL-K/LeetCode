class Solution:
    def clearDigits(self, s: str) -> str:
        stack = []
        stack.append(s[0])
        for i in range(1,len(s)):
            if(stack and s[i].isdigit()):
                stack.pop()
            else:
                stack.append(s[i])
        return "".join(stack)