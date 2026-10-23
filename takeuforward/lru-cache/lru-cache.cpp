class Node {
   public:
    // To store the Value or data
    int key, val;

    // Pointer to point the Previous Element
    Node* prev;

    // Pointer to point the Next Element
    Node* next;

    // Constructor
    Node(int k, int v) {
        key = k;
        val = v;
        prev = nullptr;
        next = nullptr;
    }
};

class LRUCache {
   private:
    Node* start;
    Node* end;
    unordered_map<int, Node*> mpp;
    int size;

    void deleteNode(Node* nd) {
        Node* prevNode = nd->prev;
        Node* nextNode = nd->next;

        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }

    void insertAfterStart(Node* node) {
        Node* nextNode = start->next;

        start->next = node;
        nextNode->prev = node;

        node->prev = start;
        node->next = nextNode;
    }
    void getAndDeleteLastNode() {
        Node* lastNode = end->prev;
        deleteNode(lastNode);
    }

   public:
    LRUCache(int capacity) {
        start = new Node(-1, -1);
        end = new Node(-1, -1);

        start->next = end;
        end->prev = start;

        size = capacity;
    }

    int get(int key_) {
        if (mpp.find(key_) == mpp.end()) {
            return -1;
        }
        Node* nd = mpp[key_];
        deleteNode(nd);
        insertAfterStart(nd);
        return nd->val;
    }

    void put(int key_, int value) {
        if (mpp.find(key_) == mpp.end()) {
            Node* nd = new Node(key_, value);
            if (size == 0) {
                Node* lastNode = end->prev;
                deleteNode(lastNode);
                mpp.erase(lastNode->key);
            } else {
                size--;
            }
            mpp[key_] = nd;
            insertAfterStart(nd);
        } else {
            Node* nd = mpp[key_];
            nd->val = value;
            deleteNode(nd);
            insertAfterStart(nd);
        }
    }
};
