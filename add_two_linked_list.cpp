
/// PROBLEM
/*

    You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

    You may assume the two numbers do not contain any leading zero, except the number 0 itself.


*/



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     L
 istNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carri = 0;
        int final = 0;
        ListNode* pRunL1 = l1;
        ListNode* pRunL2 = l2;
        ListNode* pOut = NULL;
        ListNode* pRes = NULL;

        while(pRunL1 || pRunL2)
        {
            if(pRunL1 && pRunL2)
            {
                if(carri)
                {
                    final = (pRunL1->val + pRunL2->val + carri);
                    carri = 0;
                }
                else
                    final = (pRunL1->val + pRunL2->val);

                if(final > 9)
                {
                    switch(final)
                    {
                        case 10:
                            final = 0;
                            carri = 1;
                            break;

                        case 11:
                            final = 1;
                            carri = 1;
                            break;

                        case 12:
                            final = 2;
                            carri = 1;
                            break;

                        case 13:
                            final = 3;
                            carri = 1;
                            break;

                        case 14:
                            final = 4;
                            carri = 1;
                            break;

                        case 15:
                            final = 5;
                            carri = 1;
                            break;

                        case 16:
                            final = 6;
                            carri = 1;
                            break;

                        case 17:
                            final = 7;
                            carri = 1;
                            break;

                        case 18:
                            final = 8;
                            carri = 1;
                            break;

                        case 19:
                            final = 9;
                            carri = 1;
                            break;
                    }
                }
                else
                    carri = 0;
                
                pRunL1 = pRunL1->next;
                pRunL2 = pRunL2->next;
            }
            else if(pRunL1)
            {
                if(carri)
                {
                    final = pRunL1->val+carri;
                    carri = 0;
                    if(final > 9)
                {
                    switch(final)
                    {
                        case 10:
                            final = 0;
                            carri = 1;
                            break;

                        case 11:
                            final = 1;
                            carri = 1;
                            break;

                        case 12:
                            final = 2;
                            carri = 1;
                            break;

                        case 13:
                            final = 3;
                            carri = 1;
                            break;

                        case 14:
                            final = 4;
                            carri = 1;
                            break;

                        case 15:
                            final = 5;
                            carri = 1;
                            break;

                        case 16:
                            final = 6;
                            carri = 1;
                            break;

                        case 17:
                            final = 7;
                            carri = 1;
                            break;

                        case 18:
                            final = 8;
                            carri = 1;
                            break;

                        case 19:
                            final = 9;
                            carri = 1;
                            break;
                    }
                }
                else
                    carri = 0;
                }
                else
                    final = pRunL1->val;
                    
                
                pRunL1 = pRunL1->next;
            }
            else if(pRunL2)
            {
                    if(carri)
                    {
                        final = pRunL2->val+carri;
                        carri = 0;
                        if(final > 9)
                        {
                        switch(final)
                        {
                            case 10:
                                final = 0;
                                carri = 1;
                                break;

                            case 11:
                                final = 1;
                                carri = 1;
                                break;

                            case 12:
                                final = 2;
                                carri = 1;
                                break;

                            case 13:
                                final = 3;
                                carri = 1;
                                break;

                            case 14:
                                final = 4;
                                carri = 1;
                                break;

                            case 15:
                                final = 5;
                                carri = 1;
                                break;

                            case 16:
                                final = 6;
                                carri = 1;
                                break;

                            case 17:
                                final = 7;
                                carri = 1;
                                break;

                            case 18:
                                final = 8;
                                carri = 1;
                                break;

                            case 19:
                                final = 9;
                                carri = 1;
                                break;
                        }
                    }
                    else
                        carri = 0;
                }
                else
                    final = pRunL2->val;
                    
                
                pRunL2 = pRunL2->next;
            }

            
            if(!pRes)
            {
                pRes = new ListNode(final);
                pOut = pRes;
            } 
            else
            {
                pRes->next = new ListNode(final);
                pRes = pRes->next;
            } 
        }
        
        if(carri)
            pRes->next = new ListNode(carri);

        return pOut;
    }
};