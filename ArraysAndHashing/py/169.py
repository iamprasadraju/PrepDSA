"""
	Majority element
	
	Input: [2, 2, 1, 1, 1, 3, 3]
	
	Output: 1

"""



def MajorityElement(nums: list[int]) -> int:
	tmp = {}
	for i in nums:
		if i in tmp:
			tmp[i] += 1
		else:
			tmp[i] = 1
	max = (0, 0)
	for num, count in tmp.items():
		if max[1] < count:
			max = (num, count)
	return max[0]
	
	
	
nums = [2, 2, 1, 1, 3, 3, 4, 4, 4, 4]
result = MajorityElement(nums)

print(result)