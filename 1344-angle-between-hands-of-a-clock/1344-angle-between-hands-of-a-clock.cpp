class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minuteHr;
        double minuteMn;
        if(hour==12){
            minuteHr=0.5*minutes;
            minuteMn=6*minutes;
        }else{
               minuteHr= 0.5*(hour*60 + minutes);
            minuteMn=6*minutes;
        }
        return min(abs(minuteHr-minuteMn),360 - abs(minuteHr-minuteMn));
      
    }
};