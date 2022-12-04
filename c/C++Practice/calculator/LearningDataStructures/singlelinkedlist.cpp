class Node {
public:
    T x;
    Node *next;
    Node(T x0){
        x = 0;
        next = NULL;
    }
};

Node *head;
Node *tail;
int n;

T push(T x){
    Node *u = new Node(x);
    u->next = head;
    head = u;
    if(n == 0)
    {
        tail = u;
    }
    n++;
    return x;
}

T pop(){
 if(n == 0) return null;
 T x = head->x;
 Node *u = head;
 head = head->next;
 delete u;
 if(--n == 0) tail = NULL;
 return x;
}

T remove() {
    if(n == 0) return null;
    T x = head->x;
    Node *u = head;
    head = head->next;
    delete u;
    if(--n == 0) tail = NULL;
    return x;
}

bool add(T x){
    Node *u = new Node(x);
    if(n == 0){
        head = u;
    }else {
        tail->next = u;
    }
    tail = u;
    n++;
    return true;
}

int main() {

}
