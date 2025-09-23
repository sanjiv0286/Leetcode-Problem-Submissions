class Solution {
    public boolean checkIfPangram(String s) {

        int n = s.length();

        if (n < 26) {
            return false;
        }

        Set<Character> set = new HashSet<>();

        // s = s.toLowerCase();
        // for (int i = 0; i < s.length(); i++) {
        //     char c = s.charAt(i);
        //     if (c >= 'a' && c <= 'z') {
        //         set.add(c);
        //     }
        // }

        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c >= 'A' && c <= 'Z') {
                // c = (char) (c - 'A' + 'a');
                c = (char) (c + 32);

            }
            if (c >= 'a' && c <= 'z') {
                set.add(c);
            }
        }

        return (set.size() == 26);

    }
}