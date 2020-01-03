 //https://www.interviewbit.com/problems/swap-list-nodes-in-pairs/
 void swap(int* a, int* b) 
{ 
    int temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 
} 
listnode* swapPairs(listnode* A) {
  listnode* temp = A; 
    while (temp != NULL && temp->next != NULL) { 
        swap(&temp->val, &temp->next->val); 
        temp = temp->next->next; 
    } 
    return A;
}