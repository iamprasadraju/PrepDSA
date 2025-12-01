"""
	Remove Element
	
	Input: nums = [1,1,2,3,4]
	Output: [2, 3, 4]

"""


def RemoveElements(nums, val):
	i = 0
	while(i < len(nums)):
		if(nums[i] == val):
			nums.remove(nums[i])
			i -= 1
		i += 1
	return len(nums)

nums = [1, 1, 2, 3, 4]
val = 1
k = RemoveElements(nums, val)
print(k)



