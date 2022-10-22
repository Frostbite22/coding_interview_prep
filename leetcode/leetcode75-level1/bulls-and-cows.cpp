class Solution {
public:
    string getHint(string secret, string guess) {
        
        int n = secret.length() ; 
        vector<bool> secret_bool(n,true) ; 
        int cows = 0 ; 
        int bulls = 0 ;
        
        for(int i=0 ; i<n ; i++)
        {
            if(secret[i] == guess[i])
            {
                bulls++ ;
                if(secret_bool[i]) secret_bool[i] = false ; 
                else
                {
                    size_t found = i ;
                    
                    while(secret_bool[found] == false && found !=string::npos )
                    {
                        found = secret.find(guess[i],found+1); 
                        if(found == -1 ) break ;
                    }
                    if(found!=string::npos)
                    {
                        secret_bool[found] = false ; 
                    }
                    else cows -- ;   
                }
            }                
            else
            {
                size_t found = secret.find(guess[i]) ;
                
                if(found !=string::npos)
                {
                    while(secret_bool[found] == false && found !=string::npos)
                    {
                        found = secret.find(guess[i],found+1); 
                        if(found == -1 ) break ;

                    }
                    if(found!=string::npos)
                    {
                        secret_bool[found] = false ; 
                        cows ++ ; 
                    }
                }
            }
        }
        
         return to_string(bulls) + "A" + to_string(cows) + "B" ;
    
    }
};
