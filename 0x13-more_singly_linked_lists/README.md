# 0x13. C - More singly linked lists

### 0. Print list

Write a function that prints all elements of a `listint_t` list.
- Prototype: `size_t print_listint(cont listint_t *h);`
- Return number of nodes.
- File: `0-print_listint.c`

### 1.List length

write a function that returns the number of elements in a linked `listint_t` list.
- Prototype: `size_t listint_len(const listint_t *h);`
- file: `1-listint_len.c`

### 2.Add node

Write a function that adds a new node at the beginning of a `listint_t` list.
- Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
- Return: the address of anew element, or `NULL` if it failed.
- File: `2-add_nodeint.c`

### 3.Add node at the end

Write a function that adds new node at the end of a linked `listint_t` list.
- Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed
- File: `3-add_nodeint_end.c`

### 4.Free list

Write a function that frees a `listint_t` list
- Prototype: `void free_listint(listint_t *head);`
- File: `4-free_listint.c`

### 5.free
Write a function that frees a `listint_t` list.
- Prototype `void free_listint2(listint_t **head);`
- File: `5-free_listint2.c`

### 6.Pop

Write a function that deletes the head node of a `listint_t` linked list and returns the head nodes data (n).
- File: `6-pop_listint.c`

### 5.Get node at index

Write a function that returns the nth node of a `listint_t` linked list
- File: `7-get_nodeint_at_index`


