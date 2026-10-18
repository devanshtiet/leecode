class Solution:
    def isPalindrome(self, x: int) -> bool:
        q=str(x)
        return (q==q[::-1])
        