#include <curses.h>
#include "src/windows.h"

int main(void) {
    init();

    init_windows();

    while (1) {
        refreshWindows();
    }
    endwin();

    return 0;
}