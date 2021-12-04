/***  KNOWLEDGE IS POWER  ***/

class Node{
    Node *arr[26];
    bool flag = false;
public:
    
    bool contains(char ch){ return arr[ch-'a'] != NULL; }
    
    void put(char ch, Node *newNode){ arr[ch - 'a'] = newNode;}
    
    Node *getNext(char ch){return arr[ch-'a'];}
    
    bool getFlag(){ return flag;}
    
    void setFlag(){ flag = true;} 
	
};
class StreamChecker {
public:
    string streamString = "";
    Node *root;
    
    void insert(string s){
        Node *temp = root;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(!temp->contains(s[i])) 
                temp->put(s[i], new Node());
            temp = temp->getNext(s[i]);
        }
        temp->setFlag() ;
    }
    
    StreamChecker(vector<string>& words) {
        root = new Node();
        for(auto word : words) 
            insert(word);
    }
    bool query(char letter) {
        streamString += letter;
        Node *temp = root;
        for(int i=streamString.size()-1;i>=0&&temp;i--){
            if(!temp && !temp->contains(streamString[i])) 
                return false;
            
            temp = temp->getNext(streamString[i]);
            if(temp && temp->getFlag()) 
                return true;
        }
        return false;    
    }
};
