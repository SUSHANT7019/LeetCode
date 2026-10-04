class Solution {
public:
    vector<int> sumZero(int n) {
        int nb2=n/2;
        vector<int> v(n) ;
        if(nb2 % 2 == 0){
            for(int i=0;i<nb2;i++){
                v[i]=i+1;
                v[i+nb2]=-(i+1);
            }
    }else{
        for(int i=0;i<nb2;i++){
                v[i]=i+1;
                v[i+nb2]=-(i+1);
            }
         
            }
            return v;
    }

};