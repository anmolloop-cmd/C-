#include <bits/stdc++.h>
using namespace std;
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3;
        int carry=0;
        while(l1->next!=NULL&&l2->next!=NULL)
        {
        int sum=l1->next+l2->next+carry;
            if(sum>9)
            {
            l3->first=sum%10;
            carry=sum/10;
            }
            else
            {
            l3->first=sum;
            carry=0;
            }
            if(l1->next!=NULL)
                l1=l1->next;
            if(l2->next!=NULL)
                l2=l2->next;
        }
    }
    main()
    {
        
    }