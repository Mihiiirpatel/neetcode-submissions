class Solution {
public:
    bool isAnagram(string s, string t) {
        int sum=0,summ=0;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t){
            return true;
        }else{
            return false;
        }
    }
};
