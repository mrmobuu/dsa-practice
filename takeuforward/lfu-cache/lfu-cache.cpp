struct Node {
    int key, value, cnt;
    Node* next;
    Node* prev;
    Node(int _key, int _value) {
        key = _key;
        value = _value;
        cnt = 1;
        next = nullptr;
        prev = nullptr;
    }
};

struct List {
    Node* start;
    Node* end;
    int size;
    List() {
        start = new Node(-1, -1);
        end = new Node(-1, -1);
        start->next = end;
        end->prev = start;
        size = 0;
    }

    void addFront(Node* nd) {
        Node* nextNode = start->next;

        nd->next = nextNode;
        nd->prev = start;

        start->next = nd;
        nextNode->prev = nd;

        size++;
    }

    void removeNode(Node* nd) {
        Node* prevNode = nd->prev;
        Node* nextNode = nd->next;

        prevNode->next = nextNode;
        nextNode->prev = prevNode;
        size--;
    }
};

class LFUCache {
    int size;
    int currSize;
    int minFreq;
    unordered_map<int, Node*> keyMpp;
    unordered_map<int, List*> freqMpp;

   public:
    LFUCache(int capacity) {
        size = capacity;
        currSize = 0;
        minFreq = 0;
    }

    void updateFreqListMap(Node* node) {
        keyMpp.erase(node->key);

        int freq = node->cnt;

        freqMpp[freq]->removeNode(node);

        if (node->cnt == minFreq && freqMpp[node->cnt]->size == 0) {
            minFreq++;
        }

        int newFreq = node->cnt + 1;

        List* nextHigherFreqList = new List();

        if (freqMpp.find(newFreq) != freqMpp.end()) {
            nextHigherFreqList = freqMpp[newFreq];
        }

        node->cnt = newFreq;

        nextHigherFreqList->addFront(node);

        freqMpp[newFreq] = nextHigherFreqList;

        keyMpp[node->key] = node;
    }

    int get(int key) {
        if (keyMpp.find(key) == keyMpp.end()) {
            return -1;
        }
        Node* node = keyMpp[key];

        updateFreqListMap(node);

        return node->value;
    }

    void put(int key, int value) {
        if (size == 0) {
            return;
        }
        if (keyMpp.find(key) == keyMpp.end()) {
            Node* node = new Node(key, value);
            if (currSize == size) {
                List* ls = freqMpp[minFreq];

                keyMpp.erase(ls->end->prev->key);

                freqMpp[minFreq]->removeNode(ls->end->prev);

                currSize--;
            }

            currSize++;

            minFreq = 1;

            List* ls = new List();

            if (freqMpp.find(minFreq) != freqMpp.end()) {
                ls = freqMpp[minFreq];
            }

            ls->addFront(node);

            keyMpp[key] = node;

            freqMpp[minFreq] = ls;
        } else {
            Node* node = keyMpp[key];

            node->value = value;

            updateFreqListMap(node);
        }
    }
};
