// https://www.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1?utm=codolio
/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution
{
public:
    vector<int> bottomView(Node *root)
    {
        // code here
        vector<int> ans;

        if (root == nullptr)
        {
            return ans;
        }

        map<int, int> topNode;
        queue<pair<Node *, int>> q;

        // intital push
        q.push(make_pair(root, 0));

        while (!q.empty())
        {
            pair<Node *, int> temp = q.front();
            q.pop();

            Node *frontNode = temp.first;
            int hd = temp.second;

            // mapping 1 to 1 map
            topNode[hd] = frontNode->data;
            if (frontNode->left != nullptr)
                q.push(make_pair(frontNode->left, hd - 1));
            if (frontNode->right != nullptr)
                q.push(make_pair(frontNode->right, hd + 1));
        }

        for (auto i : topNode)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};