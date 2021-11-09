void fun(vector<vector<int>>& res, int a, int b, int c, int n)
{
    if (n == 1)
    {
        res.push_back({a, c});
        return ;
    }
    else
    {
        fun(res, a, c, b, n - 1);
        res.push_back({a, c});
        fun(res, b, a, c, n - 1);
    }
}
vector<vector<int>> towerOfHanoi(int n)
{
    //    Write your code here.

    vector<vector<int>>res;
    fun(res, 1, 2, 3, n);
    return res;
}