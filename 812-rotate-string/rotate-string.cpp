class Solution {
public:
    bool rotateString(string A, string B) {
        if(A==B)return true; 
      
      
      if(A.size()!=B.size())return false;
      
      
     A=A+A; 
      
      int check=A.find(B); 
      
        if(check>A.size())return false; 
      
  return true;
    }
};