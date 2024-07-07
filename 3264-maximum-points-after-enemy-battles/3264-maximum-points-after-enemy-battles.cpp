class Solution {
public:
    long long maximumPoints(vector<int>& ee, int ce) {
        long long  mini = *min_element(ee.begin(),ee.end());
        long long sum =0;
        if(mini>ce){
            return 0;
        }
        for(auto &x:ee){
            sum += x;
        }
        sum -= mini ;
        sum  += ce ;

        return sum/mini;
    }
};