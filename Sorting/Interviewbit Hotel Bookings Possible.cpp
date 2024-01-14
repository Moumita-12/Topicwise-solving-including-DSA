bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int C) {
    sort(arrive.begin(), arrive.end());
    sort(depart.begin(), depart.end());
    
    int i=0, j=0, count=0;
    int n = arrive.size();
    
    while(i<n && j<n){
        if(arrive[i] <= depart[j]){
            count++;
            
            if(count > C)  return false;
        
            i++;
        }
    
        else {
            count--;
            j++;
        }
        }
        
    
    return true;
    
}
