/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:

    void insertNode(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            Node* copyNode = new Node(temp->val);
            copyNode->next=temp->next;
            temp->next=copyNode;
            temp=temp->next->next;
        }
    }

    void connectRandom(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            Node* copyNode=temp->next;
           if(temp->random) copyNode->random=temp->random->next;
            temp=temp->next->next;
        }
    }

    Node* connectNext(Node* head){
        Node* dNode= new Node(-1);
        Node* res= dNode;
        Node* temp=head;
        while(temp!=NULL){
            res->next=temp->next;
            res=res->next;
            temp->next=temp->next->next;
            temp=temp->next;
        }
        return dNode->next;
    }

    Node* copyRandomList(Node* head) {
        insertNode(head);
        connectRandom(head);
        return connectNext(head);
    }
};