#include<bits/stdc++.h>
using namespace std;

int main(){

int i;

int n,c=0;
 cin>>n;
 cin.ignore();
    while(c<n){
        
      stack<char>stk;
      c++;

        string s;
       // cin>>s;
        getline(cin,s);
  
  for(i=0;i<s.size();i++){
            if(s[i]== '(' ||  s[i]=='{' || s[i] == '['){
                stk.push(s[i]);

            }
             else if(stk.empty())
            {
                stk.push(s[i]);
            }
            else if(s[i]==')' && stk.top() == '(')
            {
                stk.pop();
            }
            else if(s[i]=='}' && stk.top() == '{')
            {
                stk.pop();
            }
            else if(s[i]==']' && stk.top() == '[')
            {
                stk.pop();
            }
            else
            {
                break;
            }
                
            
        }

       
       
        if(stk.empty() ) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

       
    }


}
