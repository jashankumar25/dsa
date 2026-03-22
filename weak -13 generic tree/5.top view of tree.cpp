// https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1?utm=codolio
/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution
{
public:
    vector<int> topView(Node *root)
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

            // mapping 1 to 1 mapp
            // if one val is present on the hd ,then do nothing

            if (topNode.find(hd) == topNode.end())
            {
                topNode[hd] = frontNode->data;
            }

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