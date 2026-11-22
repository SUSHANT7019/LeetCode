class Solution {
public:
    bool checkString(string s) {
        bool isAppeare = true;
        if(s.contains("ba")){
        isAppeare = false;
        }
        return isAppeare;
    }
};