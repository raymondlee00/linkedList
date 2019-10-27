struct node
{
    int data;
    struct node *next;
};
void print_list(struct node *list);
struct node * insert_front(struct node *list, int data);
struct node * free_list(struct node *list);
struct node * remove_node(struct node *front, int data);