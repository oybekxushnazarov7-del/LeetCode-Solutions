class Solution:
    def mapWordWeights(self, words: List[str], weights: List[int]) -> str:
        result=""
        for word in words:
            sum=0
            for w in word:
                sum += weights[ord(w) - ord('a')]
            sum%=26
            result+=chr(ord('z')-sum)
        return result 