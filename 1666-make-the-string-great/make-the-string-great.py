class Solution:
    def makeGood(self, s: str) -> str:
        stack = []
        top = 0
        stack.append(s[0])
        for i in range(1,len(s)):
            if(top >= 0 and s[i] != stack[top] and (s[i] == stack[top].upper() or s[i].upper() == stack[top])):
                stack.pop()
                top = top - 1
            else:
                top = top + 1
                stack.append(s[i])
        return "".join(stack)
