#define STRICT
#include <windows.h>

int main()
{
    keybd_event(VK_SCROLL, 0, KEYEVENTF_EXTENDEDKEY, 0);
    keybd_event(VK_SCROLL, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);

    return 0;
}
