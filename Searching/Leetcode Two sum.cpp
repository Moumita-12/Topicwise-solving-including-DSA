class Solution {
public:

int binary_search(vector<pair<int,int>> & numbers,int start, int end, int key ){
    while(start<=end){
        int mid = start + (end - start) / 2;
        if(key == numbers[mid].first){
            return numbers[mid].second;
        }
        else if(key < numbers[mid].first){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}

    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>>numbers;

        for(int i = 0; i < nums.size(); i++){
            numbers.push_back(make_pair(nums[i], i));
        }

        sort(numbers.begin(), numbers.end());

        vector<int>result;

        for(int i = 0; i<numbers.size(); i++){
            int k = target - numbers[i].first;
            int idx = binary_search(numbers, i+1, numbers.size()-1, k);

            if(idx == -1) continue;

            result.push_back(idx);
            result.push_back(numbers[i].second);
            break;
        }

        return result;

    }
};
