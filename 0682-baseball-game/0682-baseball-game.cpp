class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> sol;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="D"){
                int x=sol.top();
                sol.push(x*2);
            }else if(ops[i]=="C"){
                sol.pop();
            }else if(ops[i]=="+"){
                int x=sol.top();
                sol.pop();
                int y=sol.top();
                sol.push(x);
                sol.push(x+y);
            }
            else{
                sol.push(stoi(ops[i]));
            }
        }
        int sum=0;
        cout<<sol.size();
        while (!sol.empty()){
            sum+=sol.top();
            cout<<sol.top()<<" ";           
            sol.pop();
        }
        return sum;
    }
};