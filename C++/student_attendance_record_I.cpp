class Solution {
public:
    bool checkRecord(string s) {
        int absent = 0, late = 0;
        
        for(auto w : s) {
            if(w == 'A') { 
                if(++absent > 1) return false;
                late = 0;
            }
            else if(w == 'L') { 
                if(++late > 2) return false;
            }
            else late = 0;
        }
        
        return true;
        
    }
};
