// The Celebrity Problem
// GFG : Medium 03-08-2024

int celebrity(vector<vector<int> >& mat) 
    {
        vector<int> in(mat.size(), 0);
        vector<int> out(mat.size(), 0);
        
        for(int i = 0; i < mat.size(); i++)
        {
            for(int j = 0; j < mat[0].size(); j++)
            {
                if(mat[i][j] == 1)
                {
                    out[i]++;
                    in[j]++;
                }
            }
        }
        
        for(int i = 0; i < mat.size(); i++)
        {
            if(in[i] == mat.size() - 1 && out[i] == 0)
                return i;
        }
        
        return -1;
    }
