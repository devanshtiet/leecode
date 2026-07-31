class Solution {
public:
    bool checkValidString(string s) {
        stack<int>openstack;
        stack<int>aststack;
        for (int i=0;i<s.size();i++){
            if(s[i]=='('){
                openstack.push(i);
            }
            else if(s[i]=='*'){
                aststack.push(i);
            }

            else{
                if(!openstack.empty()){
                    openstack.pop();
                }
                else if(!aststack.empty()){
                    aststack.pop();
                }
                else{
                    return false;
                }

            }
        }
        while(!openstack.empty() && !aststack.empty()){
            if (openstack.top()>aststack.top()){
                return false;
            }
            openstack.pop();
            aststack.pop();


        }
     return openstack.empty();
    }
};