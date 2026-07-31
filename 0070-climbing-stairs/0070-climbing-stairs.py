class Solution:
    def climbStairs(self, n: int) -> int:
        f1 = 1
        f2 = 2
        if n<4:
            return n
        fn = 0
        i=3
        while i<=n:
            tmp2 = f2 # 2
            fn = f2 + f1 # 3
            f2=fn # -> 3
            f1=tmp2 # -> 2
            i+=1
        return fn