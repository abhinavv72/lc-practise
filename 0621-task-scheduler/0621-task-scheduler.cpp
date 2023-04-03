class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> taskCount;
        for (char task : tasks) {
            taskCount[task]++;
        }
        priority_queue<int> pq;
        for (auto task : taskCount) {
            pq.push(task.second);
        }
        int maxCount = pq.top();
        pq.pop();
        int idleSlots = (maxCount - 1) * n;
        while (!pq.empty() && idleSlots > 0) {
            idleSlots -= min(pq.top(), maxCount - 1);
            pq.pop();
        }
        idleSlots = max(0, idleSlots);
        return tasks.size() + idleSlots;
    }
};