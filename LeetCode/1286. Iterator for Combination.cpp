/*** KNOWLEDGE IS POWER  ***/

class CombinationIterator {
    string s;
    int n, L;
    set<string> comb;
    set<string>::iterator cur;
	
    void generate(string& s, int n) {
        for(int mask = 0; mask < 1 << L; mask++) {         
            if(__builtin_popcount(mask) != n) 
                continue ;
            string combination = "";
            for(int j = 0; j < L; j++)
                if(mask & 1 << j)     
                    combination += s[j];
            comb.insert(move(combination));
        }
        cur = begin(comb);
    }
public:
    CombinationIterator(string s, int n) : s(s), n(n), L(size(s)){
        generate(s, n);
    }
    
    string next() {
        return *cur++; 
    }
    
    bool hasNext() {
        return cur != end(comb);
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
