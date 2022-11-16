#include <stdio.h>
#include <sys/sysinfo.h>

int main() {
  struct sysinfo info;
  if (sysinfo(&info) < 0) {
    perror(NULL);
  }
  printf("The system has been up for %ld seconds\n", info.uptime);

  return 0;
}
