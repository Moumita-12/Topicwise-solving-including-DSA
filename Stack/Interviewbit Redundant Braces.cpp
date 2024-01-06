int Solution::braces(string A) {
    stack<char>stk;
    bool ans = false;
    
    for(auto ch : A){
        if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            stk.push(ch);
        }
        
        else if(ch == '('){
           stk.push(ch);   
        }
        
        else if(ch == ')'){
            if(stk.top() == '('){
                ans = true;
            }
            while(stk.top() =='+' || stk.top() == '-' || stk.top() == '*' || stk.top() == '/'){
            stk.pop();
            }
            stk.pop();
        }
        
    }
    
    return ans;
}
