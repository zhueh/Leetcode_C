/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdbool.h>
struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct ListNode
{
    int val;
    struct ListNode *next;
};

// typedef struct 
// {
//     struct TreeNode Node;
//     struct TreeNode *next;
// }Queue_Node;

// typedef struct
// {
//     Queue_Node *head;
//     Queue_Node *tail;
// } Q;

typedef struct
{
    struct ListNode *head;
    struct ListNode *tail;
} Q;

bool queueIsEmpty(Q *queue)
{
    return (queue->head == queue->tail);
}
void queuePush(Q *queue, struct TreeNode *tree_node)
{
    //Queue_Node *Qnode = (Queue_Node *)malloc(sizeof(Queue_Node));
    if (queueIsEmpty(queue))
    {
        queue->head = tree_node;
        queue->tail = NULL;
    }
    else
    {
        queue->tail->next = tree_node;
    }
}
struct ListNode* queuePop(Q *queue)
{
    struct ListNode *val;
    if (queueIsEmpty(queue))
    {
        return NULL;
    }
    else
    {
        val = queue->head;
        queue->head = queue->head->next;
        return val;
    }
}
struct ListNode **listOfDepth(struct TreeNode *tree, int *returnSize)
{
    if (tree == NULL)
    {
        return NULL;
    }
    struct ListNode **LListNode = (struct ListNode **)malloc(sizeof(struct TreeNode*));
    Q queue;
    queuePush(&queue, tree);
    while(queueIsEmpty(&queue))
    {
        //need 
        //LListNode = 
    }
}