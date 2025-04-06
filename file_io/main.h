#ifndef A2A33DA7_BCBA_4522_9183_E8F53CAF6FE6
#define A2A33DA7_BCBA_4522_9183_E8F53CAF6FE6
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif /* A2A33DA7_BCBA_4522_9183_E8F53CAF6FE6 */
