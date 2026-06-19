// @leet imports start
#include <string>
#include <unordered_map>
#include <string_view>

using namespace std;
// @leet imports end

// @leet start
class Solution
{
public:
    bool wordPattern(string_view pattern, string_view s)
    {
        unordered_map<char, string_view> char2word;
        unordered_map<string_view, char> word2char;

        size_t i = 0;
        size_t b = 0;

        while (b < s.size()) {
            if (i >= pattern.size())
                return false;

            size_t e = s.find(' ', b);
            if (e == string::npos)
                e = s.size();

            string_view w(s.data() + b, e - b);
            char ch = pattern[i++];

            auto [it1, inserted1] = char2word.emplace(ch, w);
            auto [it2, inserted2] = word2char.emplace(w, ch);

            if ((!inserted1 && it1->second != w) ||
                (!inserted2 && it2->second != ch))
                return false;

            b = e + 1;
        }

        return i == pattern.size();
    }
};
// @leet end

int main()
{
    return 0;
}
