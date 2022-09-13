class Solution {
    public String complexNumberMultiply(String num1, String num2) {
    String real1 = ""; String real2 = ""; String img1 = "";String img2 = "";int start=0;
        String ansreal="";String ansimg="";
        for(int i=0;i<num1.length(); i++){
            if(num1.charAt(i) == '+'){
                real1 = num1.substring(0,i);
                start = i;
                break;
            }
            
        }
        
                img1 = num1.substring(start+1,num1.length()-1);
        start = 0;
        for(int i=0;i<num2.length(); i++){
            if(num2.charAt(i) == '+'){
                real2 = num2.substring(0,i);
                start = i;
                break;
            }
            
        }
        img2 = num2.substring(start+1,num2.length()-1);
        int r1 = Integer.parseInt(real1)*Integer.parseInt(real2);
        int r2 = Integer.parseInt(img1)*Integer.parseInt(img2)*-1;
        int ans = r1 + r2;
        ansreal += ans;
        
        int k1 = Integer.parseInt(real1)*Integer.parseInt(img2);
        int k2 = Integer.parseInt(real2)*Integer.parseInt(img1);
        int ans2 = k1 + k2;
        
        ansimg += ans2 + "i";
        return ansreal+"+"+ansimg;
    }
}