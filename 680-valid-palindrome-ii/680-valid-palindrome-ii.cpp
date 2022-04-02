class Solution {
public:
    
    bool check_pall(int l,int h,string s)
    {
        while(l<h)
        {
            if(s[l]==s[h])
            {
                l++;
                h--;
            }
            else return false;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        
     int low=0;
     int high=s.length()-1;
            while(s[low]==s[high] && low<high  )
            {
                low++;
                high--;
                
            }
            
      return  check_pall(low+1,high,s) || check_pall(low,high-1,s);
           
        
    }
};
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
  