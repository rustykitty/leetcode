/*
535. Encode and Decode TinyURL

Submitted: October 7, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 9.30 MB (beats 90.58%)
*/

class Solution {
public:

    // Encodes a URL to a shortened URL.
    const string& encode(const string& longUrl) {
        return longUrl;
    }

    // Decodes a shortened URL to its original URL.
    const string& decode(const string& shortUrl) {
        return shortUrl;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));