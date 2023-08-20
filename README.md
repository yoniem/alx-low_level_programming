<<<<<<< HEAD
0x17. C - Doubly linked lists

Please use this data structure for this project:

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

0. Print list
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that prints all the elements of a dlistint_t list.

Prototype: size_t print_dlistint(const dlistint_t *h);
Return: the number of nodes
Format: see example

1. List length
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that returns the number of elements in a linked dlistint_t list.

Prototype: size_t dlistint_len(const dlistint_t *h);

2. Add node
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that adds a new node at the beginning of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

3. Add node at the end
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that adds a new node at the end of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
Return: the address of the new element, or NULL if it failed
4. Free list
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that frees a dlistint_t list.

Prototype: void free_dlistint(dlistint_t *head);

5. Get node at index
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that returns the nth node of a dlistint_t linked list.

Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
where index is the index of the node, starting from 0
if the node does not exist, return NULL

6. Sum list
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that returns the sum of all the data (n) of a dlistint_t linked list.

Prototype: int sum_dlistint(dlistint_t *head);
if the list is empty, return 0

7. Insert at index
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that inserts a new node at a given position.

Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
where idx is the index of the list where the new node should be added. Index starts at 0
Returns: the address of the new node, or NULL if it failed
if it is not possible to add the new node at index idx, do not add the new node and return NULL
Your files 2-add_dnodeint.c and 3-add_dnodeint_end.c will be compiled during the correction

8. Delete at index
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that deletes the node at index index of a dlistint_t linked list.

Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
where index is the index of the node that should be deleted. Index starts at 0
Returns: 1 if it succeeded, -1 if it failed

9. Crackme4
#advanced
Score: 0.0% (Checks completed: 0.0%)
Find the password for crackme4.

Save the password in the file 100-password
Your file should contain the exact password, no new line, no extra space
Hint: The program prints “OK” when the password is correct

10. Palindromes
#advanced
Score: 0.0% (Checks completed: 0.0%)
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

Save the result in the file 102-result
Your file should contain the exact result, no new line, no extra space
=======

C - More singly linked lists DIR 📁 Tests ✔️ test: Directory to the Tests.

lists.h: lists.h file contains prototypes to the functions.

File Prototype struct listint_s int n struct listint_s *next typedef listint_t struct listint_s 0-print_listint.c size_t print_listint(const listint_t *h); 1-listint_len.c size_t listint_len(const listint_t *h); 2-add_nodeint.c listint_t *add_nodeint(listint_t **head, const int n); 3-add_nodeint_end.c listint_t *add_nodeint_end(listint_t **head, const int n); 4-free_listint.c void free_listint(listint_t *head); 5-free_listint2.c void free_listint2(listint_t **head); 6-pop_listint.c int pop_listint(listint_t **head); 7-get_nodeint.c listint_t *get_nodeint_at_index(listint_t *head, unsigned int index); 8-sum_listint.c int sum_listint(listint_t *head); 9-insert_nodeint.c listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n); 10-delete_nodeint.c int delete_nodeint_at_index(listint_t **head, unsigned int index); 100-reverse_listint.c listint_t *reverse_listint(listint_t **head); 101-print_listint_safe.c size_t print_listint_safe(const listint_t *head); 102-free_listint_safe.c size_t free_listint_safe(listint_t **h); 103-find_loop.c listint_t *find_listint_loop(listint_t *head); Tasks 📃 0. Print list

0-print_listint.c: C function that prints all the elements of a listint_t linked list. Returns the number of nodes in the listint_t list.

List length
1-listint_len.c: C function that returns the number of elements in a listint_t linked list. 2. Add node

2-add_nodeint.c: C function that adds a new node at the beginning of a listint_t linked list. If the function fails - returns NULL. Otherwise - returns the address of the new element. 3. Add node at the end

3-add_nodeint_end.c: C function that adds a new node at the end of a listint_t linked list. If the function fails - returns NULL. Otherwise - returns the address of the new element. 4. Free list

4-free_listint.c: C function that frees a listint_t linked list. 5. Free

5-free_listint2.c: C function that frees a listint_t linked list. Sets the head to NULL. 6. Pop

6-pop_listint.c: C function that deletes the head node of a listint_t linked list. If the linked list is empty - returns 0. Otherwise - returns the head node's data (n). 7. Get node at index

7-get_nodeint.c: C function that locates a given node of a listint_t linked list. If the node does not exist - returns NULL. Otherwise - returns the located node. 8. Sum list

8-sum_listint.c: C function that returns the sum of all the data (n) of a listint_t linked list. If the linked list is empty - returns 0. Otherwise - returns the sum of all the data (n). 9. Insert

9-insert_nodeint.c: C function that inserts a new node to a listint_t linked list at a given position. If it is not possible to add the new node at index idx, or the function fails - returns NULL. Otherwise - returns the address of the new node. 10. Delete at index

10-delete_nodeint.c: C function that deletes the node at a given index of a listint_t linked list. If the function succeeds - returns 1. If the function fails - returns -1. 11. Reverse list

100-reverse_listint.c: C function that reverses a listint_t linked list using a maximum of one loop and two variables. Returns a pointer to the first node of the reversed list. 12. Print (safe version)

101-print_listint_safe.c: C function that prints a listint_t linked list safely (ie. can free lists containing loops). Returns the number of nodes in the listint_t list. 13. Free (safe version)

102-free_listint_safe.c: C function that frees a listint_t linked list safely (ie. can free lists containing loops). Returns the size of the list that was freed. Sets the head to NULL. 14. Find the loop

103-find_loop.c: C function that finds the loop contained in a listint_t linked list using a maximum of two variables. If no loop is found - returns NULL. Otherwise - returns the address of the node where the loop starts.
>>>>>>> origin/master
