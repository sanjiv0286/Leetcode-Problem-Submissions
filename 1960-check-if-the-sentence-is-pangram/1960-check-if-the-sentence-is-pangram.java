class Solution {
    public boolean checkIfPangram(String s) {
        int n = s.length();
        if(n<26){
            return false;
        }

        boolean vis[]= new boolean[26];

        for(int i=0;i<n;i++){
            char c = s.charAt(i);
            if(c>='A' && c<='Z'){
                vis[c-'A'] = true;
            }
            if(c>='a' && c<= 'z'){
                vis[c-'a']= true;
            }

        }

        for(int i=0;i<26;i++){
            if(vis[i]==false){
                return false;
            }
        }
        return true;
    }
}