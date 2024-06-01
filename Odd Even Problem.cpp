Odd Even Problem
GFG-EASY  01-06-2024


string oddEven(string s)
{
    int bitmask = 0;
    int isPresent = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int pos = s[i] - 'a';
        bitmask ^= 1 << pos;
        isPresent = (isPresent | (1 << pos));
    }
    int x = 0, y = 0;
    for (int i = 0; i < 26; i++)
    {
        int position = i + 1;
        if (isPresent & (1 << i) && bitmask & (1 << i))
        {
            if (position % 2 != 0)
            {
                y++;
            }
        }
        else
        {
            if (isPresent & (1 << i) && position % 2 == 0)
            {
                x++;
            }
        }
    }
    if ((x + y) % 2 == 0)
    {
        return "EVEN";
    }
    else
        return "ODD";
}
