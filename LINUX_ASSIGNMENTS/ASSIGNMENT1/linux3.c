#include <unistd.h>
 
int main(void) {
  char *Path = "/bin/ls";
  char *argument = "-lh";
 
 
  execl(Path, Path,argument,NULL);
 
  return 0;
}