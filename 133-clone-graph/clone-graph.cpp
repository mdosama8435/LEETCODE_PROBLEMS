class Solution {
public:
    
    unordered_map<Node*, Node*> mp;
    
    Node* cloneGraph(Node* node) {
        
        if (node == NULL) return NULL;
        
        // Agar node already clone ho chuka hai
        if (mp.find(node) != mp.end())
            return mp[node];
        
        // Naya clone node banao
        Node* clone = new Node(node->val);
        
        // Map me store karo
        mp[node] = clone;
        
        // Neighbors clone karo recursively
        for (Node* neighbor : node->neighbors) {
            clone->neighbors.push_back(cloneGraph(neighbor));
        }
        
        return clone;
    }
};