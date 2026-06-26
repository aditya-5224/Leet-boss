class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stck;
        
        for (string token : tokens) {
    
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int b = stck.top(); stck.pop();
                int a = stck.top(); stck.pop();
                
                if (token == "+") stck.push(a + b);
                else if (token == "-") stck.push(a - b);
                else if (token == "*") stck.push(a * b);
                else stck.push(a / b);  
            }
            else {
               
                stck.push(stoi(token));
            }
        }

        return stck.top();
    }
};