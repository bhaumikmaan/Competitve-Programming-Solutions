/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node)
        {
            return NULL ;
        }
        unordered_map<int, Node*> visited;
        return clone(node , visited);
    }
    Node *clone(Node* node, unordered_map<int,Node*>& visited)
    {
        Node *new_node = new Node(node->val);
        visited.insert({node->val,new_node});
        for(Node *n : node->neighbors)
        {
            auto it = visited.find(n -> val);
            if(it == visited.end())
            {
                Node *cn = clone(n, visited);
                new_node->neighbors.push_back(cn);
            }
            else
            {
                new_node->neighbors.push_back(it -> second);
            }
        }
        return new_node;
    }
};
