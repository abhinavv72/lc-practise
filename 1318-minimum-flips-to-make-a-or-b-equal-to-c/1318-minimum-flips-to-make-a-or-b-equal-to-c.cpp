class Solution {
public:
    int minFlips(int a, int b, int c) {
        int d = a|b;
        int total =0;
        int x,y,z;
        for(int i=0; i<32; i++){
            x=a&(1<<i);
            y=b&(1<<i);
            z=c&(1<<i);
            if(z==0 && x!=0 && y==0)
                total++;
            else if(z==0 && x==0 && y!=0)
                total++;
            else if(z==0 && x!=0 && y!=0)
                total+=2;
            else if(z!=0 && x==0 && y==0)
                total++;
        }
       return total; 
    }
};