/*
LeetCode Problem: Palindrome Number
Difficulty: Easy

Approach:
- Negative numbers cannot be palindromes, so return false for x < 0.
- Store the original number.
- Reverse the number digit by digit using modulus (%) and division (/).
- Compare the reversed number with the original.
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)return false ;
    int org = x;
    long rever = 0;

    while (x!=0) {
       int remain = x % 10 ;
       rever = rever * 10 + remain;
        x=x/10;
        }
    return rever == org;
    }
};

/*
Complexity:
- Time Complexity: O(log n), where n is the input number (loop runs for number of digits).
- Space Complexity: O(1), since only a few variables are used.
*/
