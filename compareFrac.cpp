// Compare two fractions
// GFG : Easy 21-06-2024

string compareFrac(string str) {
        int a, b, c, d;        
        string f1, f2;
        
        auto it = str.find( "," );
        f1 = str.substr( 0, it ),
        f2 = str.substr( it + 2 ),
        
        it = f1.find( "/" ),
        a = stoi( f1.substr( 0 , it ) ),
        b = stoi( f1.substr( it + 1 ) ),
        
        it = f2.find( "/" ),
        c = stoi( f2.substr( 0, it ) ),
        d = stoi( f2.substr( it+1 ) );
        
        if( a*d > b*c )
            return f1;
        else if( a*d < b*c )
            return f2;
        else return "equal";
    }
