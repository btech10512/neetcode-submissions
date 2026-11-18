class Solution:
    def f(self,index,nums,temp,ans,visited):
        if(len(temp) == len(nums)):
            ans.append(temp.copy())
            return
        for i in range(len(nums)):
            if(visited[i] != 1):
                visited[i] = 1
                temp.append(nums[i])
                self.f(i,nums,temp,ans,visited)
                temp.pop()
                visited[i] = 0
                # self.f(i,nums,temp,ans,visited)




    def permute(self, nums: List[int]) -> List[List[int]]:
        ans = []
        temp = []
        visited = [0]*len(nums)
        self.f(0,nums,temp,ans,visited)
        return ans