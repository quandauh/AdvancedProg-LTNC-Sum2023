string timeConversion(string s)
{
   int n = s[1] + s[0]*10;

   

    if(n<12&&s[8]=='P') 
    {
        s.erase(s.begin() + 0);
        s.erase(s.begin() + 1);

        int n1=n+12;
        int number = n1;       
	    string result;          
	    ostringstream convert;   
	    convert << number;      
	    result = convert.str();
        strcat(result, s); 
        return result;
    }
    else
    {
        if(n==12&&s[8]=='A')
        {
            s.erase(s.begin() + 0);
            s.erase(s.begin() + 1);
          int number = 00;       
	      string result;          
	      ostringstream convert;   
	      convert << number;      
	      result = convert.str();
          strcat(result, s); 
          return result;  
        }
        else
        {
            return s;
        }
    }
}
