class Solution {
public:
    string breakPalindrome(string palindrome) {
        int len = palindrome.length();
        int start = 0;
        int end = palindrome.length()-1;
        if(palindrome.length() == 1 ) return "";
        string result = "";
            while(start<end){
                if(palindrome[start]!='a'){
                    palindrome[start]='a';
                    return palindrome;
                  }
               start++;
               end--;
            }
    palindrome[palindrome.length()-1]='b';
    return palindrome;
        }       
};