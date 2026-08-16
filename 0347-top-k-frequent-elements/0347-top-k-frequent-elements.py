class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # for i in range(len(nums)):
        #     for j in range(len(nums)):
        #         count = 0
        #         if nums[i] == nums[j]:
        #             count+=1
        #         else:
        #             return count
        #         result = [nums  if count == k]
        # return result
        counts = Counter(nums)

        result = [num for num, count in counts.most_common(k)]

        return result 
