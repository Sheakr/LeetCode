class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int *A = new int[26];
        for(int i =0;i<26;i++){
            A[i] = 0;
        }
        for(int i =0;i<magazine.length();i++){
            A[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.length();i++){
            if(A[ransomNote[i]-'a'] > 0){
                A[ransomNote[i]-'a']--;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};