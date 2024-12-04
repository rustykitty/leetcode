/*
535. Encode and Decode TinyURL

Submitted: October 29, 2024

Runtime: 5 ms (beats 31.19%)
Memory: 43.12 MB (beats 28.30%)
*/

import java.util.HashMap;

public class Codec {

    private final HashMap<Integer, String> map = new HashMap<>();

    // Encodes a URL to a shortened URL.
    public String encode(String longUrl) {
        map.put(longUrl.hashCode(), longUrl);
        return "http://tinyurl.com/" + longUrl.hashCode();
    }

    // Decodes a shortened URL to its original URL.
    public String decode(String shortUrl) {
        return map.get(Integer.parseInt(shortUrl.substring("http://tinyurl.com/".length())));
    }
}

// Your Codec object will be instantiated and called as such:
// Codec codec = new Codec();
// codec.decode(codec.encode(url));
