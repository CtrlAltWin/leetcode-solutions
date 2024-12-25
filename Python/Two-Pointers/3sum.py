class Solution(object):
    def threeSum(self, nums):
        res = set() #set for storing unique triplets
        nums.sort() 
        for e in range(len(nums)): #accessing each element of list 
            s, a, b = 0-nums[e], e+1, len(nums)-1 #convering problem into two-sum
            while b>a:
                sm = nums[a] + nums[b]
                if sm>s:
                    b -= 1
                elif sm<s:
                    a += 1
                else:
                    res.add((nums[e], nums[a], nums[b])) #inserting tuples because set of lists is not possible
                    a += 1
                    b -= 1
        return res