
class Solution {
public :
    bool canComplete(vector<int>&time, int tt, long long maxT) {
        long long count = 0;
        for (auto t : time) {
            count += maxT / t;
        }
        return count >= tt;
    }

    long long minimumTime(vector<int>& time, int tt) {
        int n = time.size();
        int leastTimeBus = INT_MAX, maxTimeBus = INT_MIN;
        for (int i = 0; i < n; i++) {
            leastTimeBus = min(leastTimeBus, time[i]);
            maxTimeBus = max(maxTimeBus, time[i]);
        }
        long long l = leastTimeBus, h = (long long)maxTimeBus*tt, ans = INT_MAX;

        while (l <= h) {
            long long mid = l + (h-l)/2;

            if (canComplete(time, tt, mid)) {
                ans = mid;
                h = mid-1;
            }
            else {
                l = mid+1;
            }
        }
        return ans;
    }
};