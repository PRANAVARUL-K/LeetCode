class Solution(object):
    def Search(self,tar,arr,i):
        l = 0
        r = len(arr) - 1
        while(l <= r):
            mid = (l+r)//2
            if(arr[mid] == tar and mid != i):
                return True
            elif arr[mid] < tar:
                l = mid+1
            else:
                r = mid - 1
        return False
    def checkIfExist(self, arr):
        arr.sort()
        for i in range(len(arr)):
            '''if(arr[i] == 0 and (i+1 < len(arr) and arr[i+1] == 0)):
                return True'''
            if(self.Search(arr[i]*2,arr,i)):
                return True
        return False
    
        