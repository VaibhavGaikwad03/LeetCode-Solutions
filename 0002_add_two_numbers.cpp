/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
    ListNode *head;

public:
    Solution() : head(nullptr) {}

    void insert_last(int data)
    {
        ListNode *temp_node = nullptr;
        ListNode *new_node = new ListNode;

        if (new_node == nullptr)
            return;

        new_node->val = data;
        new_node->next = nullptr;

        if (head == nullptr)
            head = new_node;
        else
        {
            temp_node = head;

            while (temp_node->next != nullptr)
                temp_node = temp_node->next;
            temp_node->next = new_node;
        }
    }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int temp = 0, add;

        while (l1 != nullptr && l2 != nullptr)
        {

            add = l1->val + l2->val + temp;
            temp = 0;

            if (add > 9)
            {
                int mod = add % 10;
                insert_last(mod);
                add /= 10;
                temp = add;
            }
            else
                insert_last(add);

            l1 = l1->next;
            l2 = l2->next;
        }

        if (l1 != nullptr)
        {
            while (l1 != nullptr)
            {
                add = l1->val + temp;
                temp = 0;

                if (add > 9)
                {
                    int mod = add % 10;
                    insert_last(mod);
                    add /= 10;
                    temp = add;
                }
                else
                    insert_last(add);
                l1 = l1->next;
            }
        }

        if (l2 != nullptr)
        {
            while (l2 != nullptr)
            {
                add = l2->val + temp;
                temp = 0;

                if (add > 9)
                {
                    int mod = add % 10;
                    insert_last(mod);
                    add /= 10;
                    temp = add;
                }
                else
                    insert_last(add);
                l2 = l2->next;
            }
        }

        if (temp != 0)
            insert_last(temp);

        return head;
    }
};