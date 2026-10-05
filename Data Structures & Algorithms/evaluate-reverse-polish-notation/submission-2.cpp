class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int  n =tokens.size();
        if(n == 1) return stoi(tokens[0]);
        stack<int> nums;
        int a=-201;
        int b=-201;
        string op = "";
        int ans=0;

        for(int i=0; i<n; i++) {
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                b = nums.top();
                nums.pop();
                a = nums.top();
                nums.pop();
                op = tokens[i];

                if(op == "+") {
                    nums.push(a+b);
                    ans = a+b;
                }

                else if(op == "-") {
                    nums.push(a-b);
                    ans = a-b;
                }
                else if(op == "*") {
                    nums.push(a*b);
                    ans = a*b;
                }
                else if(op == "/") {
                    nums.push(a/b);
                    ans = a/b;
                }
            }
            else{
                nums.push(stoi(tokens[i]));
            }
        }

        return nums.top();
    }
};
