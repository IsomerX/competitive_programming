class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        for(auto& i : shift){
            if(i[0] == 0){
                i[0] = -1;
                i[1] = -i[1];
            }
        }
        int b;
        b = 0;
        for(auto i : shift){
            b+=i[1];
        }
        cout << b << endl;
        if(abs(b)>=s.length()){
            if(b>0)
                b%=s.length();
            if(b<0){
                b = -b;
                b%=s.length();
                b=-b;
            }
        }
        cout << b << endl;
        if(b>0){
            string temp = s.substr(s.length()-b,b);
            s.insert(0,temp);
            s.erase(s.length()-b,b);
            return s;
        }
        else if(b<0){
            string temp = s.substr(0,-b);
            s.append(temp);
            s.erase(0,-b);
            // cout << temp << endl;
            return s;
        }
        else
            return s;
        
        return " ";
    }
};
