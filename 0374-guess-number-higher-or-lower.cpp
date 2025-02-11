/*
374. Guess Number Higher or Lower

Submitted: February 7, 2025
*/

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        unsigned min = 1, max = n;
        unsigned mid;
        unsigned char guess_res;
        while (min <= max) {
            mid = (max + min) / 2;
            guess_res = guess(mid);
            if (guess_res == 0) return mid;
            else if (guess_res == 1) min = mid + 1;
            else max = mid - 1;
        }
        return -1;
    }
};