vector<int> v = {-1, 2, 3, 4, -5, 6, 10};
    int sum = 0;
    int SumOfMaxSubArray = INT_MIN;

    for (int i = 0; i < v.size(); i++)
    {
        for (int i = 0; i < count; i++)
        {
            for (int j = 0; j < v.size; j++)
            {
                sum = sum + v[j];
                ans = max(sum, ans);
            }
        }
    }