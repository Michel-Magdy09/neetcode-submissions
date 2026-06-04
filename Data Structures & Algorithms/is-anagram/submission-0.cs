public class Solution {
    public bool IsAnagram(string s, string t) {

        if (s.Length != t.Length) return false;

        Dictionary<char, int> charCounts = new Dictionary<char, int>();

        foreach (char c in s) {
            if (charCounts.ContainsKey(c)) {
                charCounts[c]++;
            } else {
                charCounts[c] = 1;
            }
        }

        foreach (char c in t) {
            if (!charCounts.ContainsKey(c)) return false; 
            
            charCounts[c]--;
            
            if (charCounts[c] < 0) return false; 
        }
        
        return true;
    }
}
