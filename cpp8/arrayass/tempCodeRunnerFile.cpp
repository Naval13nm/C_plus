 vector<int> x = {1, 2, 3, 0};
    vector<int> y = {3, 2, 1, 4, 5, 0};
    vector<int> z = {};
    vector<int> m;

    if (x.size() >= y.size())
    {
        m = x;
    }
    else
    {
        m = y;
    }

    int i = 0;
    while (i < x.size())
    {
        int j = i + 1;
        while (j < y.size())
        {
            if (y[j] == x[i])
            {
                z.push_back(x[i]);
                j++;
            }
            else
            {
                j++;
            }
        }
        i++;
    }
    for (auto x : z)
    {
        cout << x;
    }

    return 0;
}