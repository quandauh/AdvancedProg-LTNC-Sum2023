string hackerrankInString(string s) 
{
    string target ="hackerrank";
    int j = 0;    
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == target[j])
        {
            j++;
            if(currentIndex == target.length()) return "YES";
        }
    }
    return "NO";
}