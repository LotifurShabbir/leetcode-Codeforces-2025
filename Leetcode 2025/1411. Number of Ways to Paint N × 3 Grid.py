class Solution:
    def numOfWays(self, n: int) -> int:
        MOD = 10 ** 9 + 7

        same = 6
        diff = 6

        for i in range(2, n + 1):
            new_same = (3 * same + 2 * diff) % MOD
            new_diff = (2 * same + 2 * diff) % MOD
            same, diff = new_same, new_diff

        return (same + diff) % MOD
