class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> result;
        if (root == nullptr)
            return result;
        queue<TreeNode *> q;

        q.push(root);
        q.push(nullptr);

        vector<int> level;

        while (!q.empty())
        {

            // Take front node
            TreeNode *front = q.front();
            q.pop();

            // it means one level is completed
            if (front == nullptr)
            {

                // Store completed level into result
                result.push_back(level);

                // Clear level vector for next level
                level.clear();

                // If queue still has nodes
                // push another nullptr to mark next level end
                if (!q.empty())
                    q.push(nullptr);
            }
            else
            {

                level.push_back(front->val);

                if (front->left != nullptr)
                    q.push(front->left);
                if (front->right != nullptr)
                    q.push(front->right);
            }
        }
        return result;
    }
};