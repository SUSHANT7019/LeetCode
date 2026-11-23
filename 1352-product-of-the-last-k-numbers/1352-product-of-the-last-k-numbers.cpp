class ProductOfNumbers {

     vector<int> prefix;
public:
    ProductOfNumbers() {
         
    }
    
    void add(int num) {
   
        if(num == 0 )
        {
            prefix.clear();

            
        }else if(prefix.empty()){
            prefix.push_back(num);
           
        }else{
            num = prefix.back() * num;
            prefix.push_back(num);
        }
    }
    
    int getProduct(int k) {
        int n = prefix.size();

        if( k > n ){ 
         return 0;
        }else if (k == n){
            return prefix.back();
        }else
        {
        return (prefix[n-1])/(prefix[n-k-1]);
        }
        
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */