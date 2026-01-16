def solve(arr):
    x = set()
    for i in range(len(arr)):
        for j in range(i + 1, len(arr)):
            x.add((arr[j] - arr[i]))
    return x


class Solution:
    def maximizeSquareArea(
        self, m: int, n: int, hFences: List[int], vFences: List[int]
    ) -> int:
        mod = 10**9 + 7
        hFences = [1] + hFences + [m]
        vFences = [1] + vFences + [n]
        hFences.sort()
        vFences.sort()
        x = solve(hFences)
        y = solve(vFences)
        maxArea = -1
        for i in list(x):
            if i in y:
                maxArea = max(maxArea, i)
        return (maxArea**2) % mod if maxArea != -1 else -1
