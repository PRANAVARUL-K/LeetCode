class Solution:
    def removeDuplicates(self, s: str) -> str:
        stack = []
        top = -1
        for i in s:
            if(top > -1):
                if(stack[top] == i):
                    stack.pop()
                    top = top - 1
                else:
                    stack.append(i)
                    top = top + 1
            else:
                stack.append(i)
                top = top + 1
        return "".join(stack)
