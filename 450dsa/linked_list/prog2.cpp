class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here/
        unordered_set<Node*> s;
        bool val=false;
        while(head!=NULL)
        {
            if(s.find(head)!=s.end())
            {
                return true;
            }
            s.insert(head);

            head=head->next;
        }
        
        return val;
    }
};