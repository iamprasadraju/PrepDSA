"""
	Top K Frequent Elements
	
	Input: nums = [1,1,1,2,2,3], k = 2
	Output: [1,2]
"""


def TopKelements(nums: list[int], k: int) -> list[int]:
	tmp = {}
	for n in nums:
		if n in tmp:
			tmp[n] += 1
		else:
			tmp[n] = 1
	top = sorted(tmp, key=tmp.get, reverse=True)[:k]
	return top



nums = [1,1,1,2,2,3]
k = 2

result = TopKelements(nums, k)
print(result)