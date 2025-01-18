class Solution:
    def minOperations(self, logs: List[str]) -> int:
        stack = []
        for i in logs:
            if(i == '../' and len(stack) != 0):
                stack.pop()
            else:
                if(i not in ['./', '../']):
                    stack.append(i)
        return len(stack)