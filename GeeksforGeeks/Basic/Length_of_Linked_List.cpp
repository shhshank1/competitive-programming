
class Solution {
  public:
    int getCount(Node* head) {
        // Code here
    int count = 0;
    Node* temp = head;
    while(temp!=nullptr){
        temp =temp ->next;
        count++;
    }
    return count;
}
};