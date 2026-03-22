// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {

        vector<vector<int>> result;

        if (root == nullptr)
            return result;

        queue<TreeNode *> q;
        q.push(root);

        bool lefttoright = true;

        while (!q.empty())
        {
            int size = q.size();
            vector<int> ans(size);

            for (int i = 0; i < size; i++)
            {
                TreeNode *frontnode = q.front();
                q.pop();

                int index = lefttoright ? i : size - i - 1;

                ans[index] = frontnode->val;

                if (frontnode->left != nullptr)
                    q.push(frontnode->left);

                if (frontnode->right != nullptr)
                    q.push(frontnode->right);
            }
            result.push_back(ans);
            lefttoright = !lefttoright;
        }
        return result;
    }
};
// Time Complexity=O(N)

// Space Complexity= O(N)
//.METHOD-2-MOST IMP -TWO STACK

/*class Solution {
public:
    vector<int> zigZagTraversal(Node* root) {

        vector<int> result;
        if(root == NULL)
            return result;

        stack<Node*> s1;
        stack<Node*> s2;

        s1.push(root);

        while(!s1.empty() || !s2.empty())
        {
            while(!s1.empty())
            {
                Node* temp = s1.top();
                s1.pop();

                result.push_back(temp->data);

                if(temp->left)
                    s2.push(temp->left);

                if(temp->right)
                    s2.push(temp->right);
            }

            while(!s2.empty())
            {
                Node* temp = s2.top();
                s2.pop();

                result.push_back(temp->data);

                if(temp->right)
                    s1.push(temp->right);

                if(temp->left)
                    s1.push(temp->left);
            }
        }

        return result;
    }
};*/