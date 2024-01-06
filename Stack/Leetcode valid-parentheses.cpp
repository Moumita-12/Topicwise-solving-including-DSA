class Solution {
public:
    bool isValid(string s) {
        stack <char> stk;
        unordered_map<char, char>umap;
        umap[')'] = '(';
        umap['}'] = '{';
        umap[']'] = '[';
       
    for(auto ch:s){
        if( ch == '(' ||  ch == '{' || ch == '['){
            stk.push(ch);
        }

        else {

            if(stk.empty()){
                return false;
            }

            char opening = stk.top();
            stk.pop();

            if(opening != umap[ch]){
                    return false;
            }
        }
    }

        return stk.empty();
        
    }
    
};
