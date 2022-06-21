class Solution {
public:
    double myPow(double x, int n){
        
       if(n==0){
           return 1;
       }else if(n>0){
           return fun(x,n);
       }
        
        if(n==INT_MIN){
            return (1/(x*fun(x,-(n+1))));
        }
        
        return (1/fun(x,-n));
        
    }
    
    double fun(double x, int n){
         if(n==0){
            return 1;
        }
        
        
        if(n%2==0){
           return fun(x*x,n/2);
        }
        
        return x*fun(x,n-1);
    }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        /*
        if(n==0){
            return 1;
        }
         double ans=1;
        
if(n<0){
    for(int i=1;i<=abs(n);i++){
        ans=ans/x;
    }
    return ans;
}
       
        for(int i=1;i<=n;i++){
            ans=ans*x;
        }
        return ans;
    }
    */
};