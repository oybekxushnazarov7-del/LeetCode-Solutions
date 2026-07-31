class Solution:
    def addBinary(self, a: str, b: str) -> str:
        summa = int(a, 2) + int(b, 2)
        print(summa)
        result = bin(summa)[2:]
        return result 