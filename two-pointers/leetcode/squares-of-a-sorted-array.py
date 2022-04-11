# Follow up: Squaring each element and sorting the new array is very trivial, could you find an O(n) solution using a different approach?
class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        start = 0
        end = len(nums) - 1
        
        answer = [0] * len(nums)
        
        for index in range(len(nums))[::-1]:
            if abs(nums[start]) < abs(nums[end]):
                answer[index] = nums[end] ** 2
                end = end - 1
            else:
                answer[index] = nums[start] ** 2
                start = start + 1
        
        return answer
