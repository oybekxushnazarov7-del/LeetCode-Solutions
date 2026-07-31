class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        # return list(map(int, list(str(int(''.join(map(str, digits)))+1))))
        res = 0
        for i, v in enumerate(digits[::-1]):
            res+=(10**i * v)
        res+=1
        lst = []
        while res > 0:
            j = res%10
            res//=10
            lst = [j, *lst]
        return lst

            