 int cnt[256] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        cnt[s[i]]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (cnt[s[i]] != 0)
        {
            cout << s[i];
            cout << " " << cnt[s[i]];
            cout << endl;
            cnt[s[i]] = 0;
        }
    }