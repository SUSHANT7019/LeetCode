class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int up=0;
        for(int f : fruits)
        {
            bool isplaced= false;
            int n=baskets.size();
            for(int i=0;i<n;i++){
                if(f<=baskets[i]){
                   baskets.erase(baskets.begin() + i);
                    isplaced = true;
                    break;
                }
            }
            if(!isplaced){
                up++;
                isplaced= false;

            }
        }
        return up;
    }
};