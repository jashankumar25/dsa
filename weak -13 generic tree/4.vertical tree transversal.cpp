// https://www.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1
/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution
{
public:
    vector<vector<int>> verticalOrder(Node *root)
    {
        // code here
        vector<vector<int>> result;

        map<int, map<int, vector<int>>> nodes;

        queue<pair<Node *, pair<int, int>>> q;

        if (root == nullptr)
            return result;

        // intital -hd-and level=0
        q.push(make_pair(root, make_pair(0, 0)));

        while (!q.empty())
        {
            pair<Node *, pair<int, int>> temp = q.front();
            q.pop();

            Node *frontNode = temp.first;
            int hd = temp.second.first;
            int level = temp.second.second;

            // mapping karni hai aab
            nodes[hd][level].push_back(frontNode->data);

            if (frontNode->left != nullptr)
                q.push(make_pair(frontNode->left, make_pair(hd - 1, level + 1)));
            if (frontNode->right != nullptr)
                q.push(make_pair(frontNode->right, make_pair(hd + 1, level + 1)));
        }

        for (auto i : nodes) // i-row rep <hd,<level,nodes>>
        {
            vector<int> column;

            for (auto j : i.second) // j-<level,nodes>
            {
                for (auto k : j.second)
                {
                    column.push_back(k);
                }
            }

            result.push_back(column);
        }

        return result;
    }
};