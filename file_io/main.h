#ifndef FILE_IO_MAIN_H
#define FILE_IO_MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif /* FILE_IO_MAIN_H */
