class Solution {
public:
    string decodeAtIndex(string s, int k) {
    	string res;

	
    	for(int i=0;i<s.size();i++){

	  	  if(s[i]-'0'>1 && s[i]-'0'<10){
	    		string temp = res;
	  	  	for(int j=0;j<(s[i]-'0')-1;j++){
		    		res+=temp;
		    	}		
	  	  }
	  	  else {
	  	  	res+=s[i];	
	    	}

        if(res.size()>=k) break;

	    }
	
  	  string ans;
	    ans+=res[k-1];
	
	    return ans;
      
    }
};