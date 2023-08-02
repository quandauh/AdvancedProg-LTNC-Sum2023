
struct node{
	int data;
	node *next;
	node *pre;
};
struct douList{
	node *head;
	node *tail;
};


douList *addTail(douList *l, int x){
	node *temp = new node;
	temp->data = x;
	temp->next = NULL;
	temp->pre = l->tail;
	l->tail->next = temp;
	l->tail = temp;
	return l;
}