class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        stack = []
        string = ''
        primitive = []
        for i in s:
            string = string + i
            if(i == '('):
                stack.append(i)
            elif(i == ')'):
                stack.pop()
            if(len(stack) == 0 and len(string) > 0):
                primitive.append(string)
                string = ''
        
        return "".join(i[1:-1] for i in primitive)