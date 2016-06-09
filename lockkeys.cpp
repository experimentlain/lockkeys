#include <cstdio>

#define STRICT
#include <windows.h>

using namespace std;

int main()
{
    printf("caps\t%d\n",   GetKeyState(VK_CAPITAL) & 1);
    printf("num\t%d\n",    GetKeyState(VK_NUMLOCK) & 1);
    printf("scroll\t%d\n", GetKeyState(VK_SCROLL)  & 1);

    return 0;
}
