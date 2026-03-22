class Solution {
public:
    string convertDateToBinary(string date) {
        string result="";
        string qism="";
        date+="-";
        for(int i=0;i<date.length();i++){
            if(date[i]!='-') qism+=date[i];
            else{
                int num=stoi(qism);
                string binary="";
                if(num==0){
                    binary="0";
                }
                else{
                    while(num>0){
                        binary = (num % 2 == 0 ? "0" : "1") + binary;
                        num /= 2;
                    }
                }
                result+=binary;
                if(i<date.length()-1){
                    result+="-";
                }
                qism="";
            }
        }
        return result;
    }
};