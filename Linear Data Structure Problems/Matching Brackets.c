#include <stdio.h>

char op[300], tp[30];

int main(void)
{
    int i;
    char s[30];
    int sk = 0, ok = 1;
    op[')'] = '(';
    op['}'] = '{';
    op[']'] = '[';

    scanf ("%[^\n]", s);

    for(i = 0; s[i] != '\0' && ok ; ++i)
    {
        switch(s[i])
        {
        case '(':
        case '{':
        case '[':
            sk ++;
            tp[sk] = s[i];
            break;
        case ')':
        case '}':
        case ']':
            if (op[(int)s[i]] != tp[sk])
            {
                ok = 0;
                break;
            }
            sk --;
            if (sk < 0) ok = 0;

            break;
        }
    }

    if (sk > 0) ok = 0;

    if (ok) printf ("Yes\n");
    else printf("No\n");


    return 0;
}
