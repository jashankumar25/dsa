/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;                // value stored in node
 *     TreeNode *left;         // pointer to left child
 *     TreeNode *right;        // pointer to right child
 * };
 */
// https://leetcode.com/problems/binary-tree-level-order-traversal/?utm=codolio
class Solution
{
public:
    // Function to return level order traversal as 2D vector
    vector<vector<int>> levelOrder(TreeNode *root)
    {

        // Final result that will store all levels
        vector<vector<int>> result;

        // If tree is empty, return empty result
        if (root == nullptr)
        {
            return result;
        }

        // Queue is used for BFS (Breadth First Search)
        // It stores addresses of tree nodes
        queue<TreeNode *> q;

        // Step 1: Push root node into queue
        q.push(root);

        // Step 2: Run loop until queue becomes empty
        while (!q.empty())
        {

            // This vector will store one complete level
            vector<int> level;

            // Store current queue size
            // This tells how many nodes are in current level
            int size = q.size();

            // Process exactly 'size' number of nodes
            // (Only current level nodes)
            for (int i = 0; i < size; i++)
            {

                // Get front node from queue
                TreeNode *front = q.front();

                // Remove it from queue
                q.pop();

                // Add its value into current level vector
                level.push_back(front->val);

                // If left child exists, push it into queue
                if (front->left)
                    q.push(front->left);

                // If right child exists, push it into queue
                if (front->right)
                    q.push(front->right);
            }

            // After finishing one full level,
            // store that level inside final result
            result.push_back(level);
        }

        // Return the 2D level order traversal
        return result;
    }
};
/*Take current level nodes
Store them
Add their children
Move to next level
Repeat */