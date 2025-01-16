class Solution:
    def calPoints(self, operations: List[str]) -> int:
        res = []
        top = -1
        for i in operations:
            if i == 'D':
                res.append(res[top]*2)
                top = top + 1
            elif i == 'C':
                res.pop()
                top = top - 1
            elif i == '+':
                res.append(res[top]+res[top-1])
                top = top + 1
            else:
                res.append(int(i))
                top = top + 1
        return sum(res)