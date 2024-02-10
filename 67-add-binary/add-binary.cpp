
class Solution {
public:

    string addBinary(string a, string b) {         
        if(b.size() > a.size()) 
            swap(a,b);            
        while(b.size() < a.size()) 
            b = "0" + b;
        char carry = '0';
        string res = "";
        for(int i = a.size()-1; i >= 0 ; --i)
        {             
            if ((a[i] == '1' && b[i] == '0' || a[i] == '0' && b[i] == '1') && carry == '0')
                res = '1' + res;
            else if ((a[i] == '1' && b[i] == '0' || a[i] == '0' && b[i] == '1') && carry == '1')
                res = '0' + res;
            else if (a[i] == '1' && b[i] == '1' && carry == '1')
                res = '1' + res;
            else if (a[i] == '1' && b[i] == '1' && carry == '0') {
                res = '0' + res;
                carry = '1'; // Set carry to '1'
            }
            else if(a[i] == '0' && b[i] == '0' && carry == '1'){
                res = '1' + res;
                carry = '0'; // Set carry to '0'
            }   
            else{
                res = '0' + res;
                carry = '0'; // Set carry to '0'
            }
        }        
        if(carry == '1') 
            res = "1" + res;        
        return res;
    }
};