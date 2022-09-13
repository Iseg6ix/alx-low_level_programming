#include <stdio.h>
#include <ctype.h>

int _islower(int c)
{
        int _islower = islower(c);

        if (_islower)
                return (1);
        else
                return (0);
        return (0);
}
