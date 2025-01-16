class Solution:
    def calPoints(self, operations: List[str]) -> int:
        res = []
        top = -1
        for i in operations:
            if i == 'D':
                res.append(res[top]*2)
            elif i == 'C':
                res.pop()
            elif i == '+':
                res.append(res[top]+res[top-1])
            else:
                res.append(int(i))
        return sum(res)