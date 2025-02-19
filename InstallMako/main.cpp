#include <iostream>
#include <sstream>

int main() {
  // Install mako-notify in terminal!!!
  system("dbus-daemon --session --address=unix:path=$XDG_RUNTIME_DIR/bus"); // Set mako the default notify-manager in system!
}
