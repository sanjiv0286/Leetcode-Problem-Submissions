class Solution {
    public boolean checkIfPangram(String s) {

        int n = s.length();

        if (n < 26) {
            return false;
        }

        Set<Character> set = new HashSet<>();

        // for (char c : s.toCharArray()) {
        //     if (c >= 'a' && c <= 'z') {
        //         set.add(c);
        //     }
        // }
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c >= 'a' && c <= 'z') {
                set.add(c);
            }
        }

        return (set.size() == 26);

    }
}