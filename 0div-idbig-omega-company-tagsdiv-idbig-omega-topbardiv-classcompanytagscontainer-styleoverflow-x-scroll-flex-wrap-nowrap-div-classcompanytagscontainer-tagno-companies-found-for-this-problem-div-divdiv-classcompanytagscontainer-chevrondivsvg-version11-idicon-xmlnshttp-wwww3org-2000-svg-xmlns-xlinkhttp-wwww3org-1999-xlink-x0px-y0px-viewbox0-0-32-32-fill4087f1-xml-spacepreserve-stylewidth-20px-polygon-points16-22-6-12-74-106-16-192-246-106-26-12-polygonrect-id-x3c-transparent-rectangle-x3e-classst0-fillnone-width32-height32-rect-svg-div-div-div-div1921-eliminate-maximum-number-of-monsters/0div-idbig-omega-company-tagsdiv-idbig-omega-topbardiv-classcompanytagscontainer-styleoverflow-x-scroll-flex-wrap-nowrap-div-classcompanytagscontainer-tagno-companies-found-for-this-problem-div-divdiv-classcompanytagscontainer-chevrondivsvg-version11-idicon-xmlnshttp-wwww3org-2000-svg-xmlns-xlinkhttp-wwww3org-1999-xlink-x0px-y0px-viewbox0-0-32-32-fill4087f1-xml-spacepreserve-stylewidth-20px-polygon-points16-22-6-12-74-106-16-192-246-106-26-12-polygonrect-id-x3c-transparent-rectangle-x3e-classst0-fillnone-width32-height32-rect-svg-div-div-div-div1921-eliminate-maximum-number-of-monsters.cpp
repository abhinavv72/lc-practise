class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
     int n = dist.size();
     for(int i=0; i<n; i++){
         dist[i]= std::ceil(static_cast<double>(dist[i])/speed[i]);
        speed[i]=0;
     }
     for(int arrivalTime :dist){
         if(arrivalTime >= n)continue;
         speed[arrivalTime] += 1;
         
     }
     for(int i=1; i<n; ++i){
         speed[i]+=speed[i-1];
         if(speed[i]>i){
             return i;
         }
     }
    return n;
    }
};