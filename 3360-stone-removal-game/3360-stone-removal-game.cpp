class Solution {
public:
    bool canAliceWin(int n) {
        int no = 10;
        bool isAlice = false;
        while(n>=no){
            n =  n - no;
            no --;
            if(!isAlice){
                isAlice = true;
            }else{
                isAlice = false;
            }
        }
        return isAlice;
    }
};