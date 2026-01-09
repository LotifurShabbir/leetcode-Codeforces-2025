class Solution:
    def countAndSay(self, n: int) -> str:
        val = "1"
        for i in range(n - 1):
            val = self.recursive(val)
        return val

    def recursive(self, s: str) -> str:
        x = ""
        temp = s[0]
        counter = 0
        for ch in s:
            if temp != ch:
                x += str(counter) + temp
                temp = ch
                counter = 1
            else:
                counter += 1
        x += str(counter) + temp
        return x
