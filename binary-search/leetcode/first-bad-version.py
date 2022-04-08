# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        currentVersion = -1
        minVersion = 1
        maxVersion = n
        
        while True:
            currentVersion = int((minVersion + maxVersion) / 2)
            
            if isBadVersion(currentVersion):
                minVersion = minVersion
                maxVersion = currentVersion
            else:
                minVersion = currentVersion
                maxVersion = maxVersion
            
            if maxVersion - minVersion <= 2:
                if isBadVersion(minVersion):
                    return minVersion
                elif isBadVersion(minVersion + 1):
                    return minVersion + 1
                else:
                    return maxVersion
