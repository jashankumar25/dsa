#include <iostream>
#include <vector>
using namespace std;

vector<int> findcompl(vector<int> &binary)
{
    int n = binary.size();
    vector<int> twoscomp(n + 1, 0);

    // Step 1: 1's complement (reverse fill)
    for (int i = n - 1, k = n; i >= 0; i--, k--)
    {
        twoscomp[k] = (binary[i] == 0) ? 1 : 0;
    }

    // Step 2: add 1
    int carry = 1;
    int m = twoscomp.size();

    for (int i = m - 1; i >= 0; i--)
    {
        int sum = twoscomp[i] + carry;
        twoscomp[i] = sum % 2;
        carry = sum / 2;
    }

    // Step 3: extra carry (already handled by index 0)
    if (carry == 1)
        twoscomp[0] = 1;

    return twoscomp;
}

int main()
{
    vector<int> binary = {0, 1, 1, 0};

    vector<int> twocompl = findcompl(binary);
    int m = twocompl.size();

    // Traversal according to your method
    for (int i = 0; i < m; i++)
    {
        cout << twocompl[i];
    }

    cout << endl;
    return 0;
}
// TC--0(N)  SC---0(N)
