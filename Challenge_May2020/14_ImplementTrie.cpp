struct TrieNode {
    unordered_map<char, TrieNode*> map;
    bool isEndOfWord = false;
};

class Trie {
public:
    TrieNode* root = nullptr;
    
    /** Initialize your data structure here. */
    Trie() {
        if(root == nullptr)
            root = new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode* temp = root;
        
        for(const auto ch : word) {
            if(temp->map.find(ch) == temp->map.end())
                temp->map[ch] = new TrieNode();
            
            temp = temp->map[ch];
        }
        temp->isEndOfWord = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        if(root == nullptr)
            return false;
        
        TrieNode* temp = root;
        
        for(const auto ch : word) {
            if(temp->map.find(ch) == temp->map.end())
                return false;
            temp = temp->map[ch];
        }
        
        return temp->isEndOfWord;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        if(root == nullptr)
            return false;
        
        TrieNode* temp = root;
        
        for(const auto ch : prefix) {
            if(temp->map.find(ch) == temp->map.end())
                return false;
            temp = temp->map[ch];
        }
        
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
