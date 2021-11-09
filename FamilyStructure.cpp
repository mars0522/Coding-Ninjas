string fun(int n, long long int k)
{
    if (n == 1 or k == 1)
        return "Male";
    else
    {
        long long int p = (k + 1) / 2;
        string ans = fun(n - 1, p);
        if (k == 2 * p - 1)
            return ans;
        else
        {
            if (ans == "Male")
                return "Female";
            else
                return "Male";
        }
    }
}

string kthChildNthGeneration(int n, long long int k)
{
    // Write your code here
    return fun(n, k);

}