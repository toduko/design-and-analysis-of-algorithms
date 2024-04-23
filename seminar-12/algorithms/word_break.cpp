bool word_break(string s, vector<string> &word_dict)
{
    int n = s.size();
    vector<bool> wb(n + 1, false);
    wb[0] = true;

    for (int i = 1; i <= n; ++i)
    {
        for (const string &word : word_dict)
        {
            if (i < word.size())
                continue;

            if (i == word.size() || wb[i - word.size()])
            {
                if (s.substr(i - word.size() + 1, word.size()) == word)
                {
                    wb[i] = true;
                    break;
                }
            }
        }
    }

    return wb[n];
}