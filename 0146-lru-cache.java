/*
146. LRU Cache

Submitted: January 23, 2025

Runtime: 40 ms (beats 98.63%)
Memory: 111.70 MB (beats 89.29%)
*/

class LRUCache extends LinkedHashMap<Integer, Integer> {

    private final int maxSize;


    LRUCache(int maxSize) {
        super(maxSize, 0.75f, true); // 0.75f is default load factor; true is for accessOrder
        this.maxSize = maxSize;
    }

    public int get(int key) {
        return getOrDefault(key, -1);
    }

    @Override
    protected boolean removeEldestEntry(Map.Entry<Integer, Integer> ignore) {
        return size() > maxSize;
    }
}