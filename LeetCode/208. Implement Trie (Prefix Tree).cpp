class Trienode{ // Or could use struct
public:
    bool word ;
    Trienode* children[26] ;
    Trienode(): word ( false )
    {
        memset( children, 0 , sizeof(children));
    }
};

class Trie {
public:
    Trie() { // Initialise
        root = new Trienode() ;
    }
    
    void insert(string s) {
        Trienode* node = root ;
        for( int i = 0 ; i < s.size(); i++ )
        {
            if( node->children[s[i]-'a'] == NULL)
            {
                node->children[s[i]-'a'] = new Trienode();
            }
            node = node->children[s[i]-'a'] ;
        } 
        node->word = true;
    }
    
    bool search(string s) {
        Trienode* node = leaf(s);
        return node != NULL && node->word == true ;
    }
    
    bool startsWith(string prefix) {
        Trienode*  node = leaf( prefix );
        if( node != NULL )
        {
            return true;
        }
        return false;
    }
    private:
    Trienode* root;
    Trienode* leaf( string prefix )
    {
        Trienode* node = root;
        for( int i = 0 ; i < prefix.size() && node ; i++ )
        {
            node = node->children[prefix[i]-'a'];
        }
        return node;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
