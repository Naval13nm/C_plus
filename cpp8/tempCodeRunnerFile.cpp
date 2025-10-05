
int main()
{
    vector<int> v = {1, 1, 2, 2, 2, 2, 3};

    for (int i = 0; i < v.size(); i++)
    {
        count = 0;
        j = j + 1;

        while (j < v.size())
        {
            if (v[j] == v[i])
            {
                count++;
            }
            j++;
        }

        if (count > v.size() / 2)
        {
            return count;
        }
    }