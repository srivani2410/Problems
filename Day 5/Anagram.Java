class Solution {
    public boolean isAnagram(String s, String t) {
        char c1[]=s.toCharArray();
      class  char c2[]=t.toCharArray();
        if(s.length()!=t.length()){
            return false;
        }
        Arrays.sort(c1);
        Arrays.sort(c2);
        for(int i=0; i<c2.length; i++){
            if(c1[i]!=c2[i]){
                return false;
            }
            //return true;
        }
        return true;
    }

}
