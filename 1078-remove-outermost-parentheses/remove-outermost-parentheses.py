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
        string = ''
        print(primitive)
        for i in primitive:
            string = string + i[1:-1]
        return string