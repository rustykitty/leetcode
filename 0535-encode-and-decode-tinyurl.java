/*
535. Encode and Decode TinyURL

Submitted: March 6, 2025

Runtime: 2 ms (beats 69.39%)
Memory: 43.03 MB (beats 55.63%)
*/

import java.util.HashMap;

public class Codec {

    private final HashMap<Integer, String> map = new HashMap<>();

    // Encodes a URL to a shortened URL.
    public String encode(String longUrl) {
        map.put(longUrl.hashCode(), longUrl);
        return Integer.toString(longUrl.hashCode());
    }

    // Decodes a shortened URL to its original URL.
    public String decode(String shortUrl) {
        return map.get(Integer.parseInt(shortUrl));
    }
}

// Your Codec object will be instantiated and called as such:
// Codec codec = new Codec();
// codec.decode(codec.encode(url));