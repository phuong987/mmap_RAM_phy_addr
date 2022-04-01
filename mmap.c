#include <stdio.h> //printf function
#include <sys/mman.h> //mmap function
#include <fcntl.h> //open function, O_RDWR, O_SYNC,...
#include <unistd.h> //read function

int main()
{
int mmap_fd = open("/dev/mem",O_RDWR | O_SYNC);
char* pt = mmap(0,4,PROT_READ | PROT_WRITE, MAP_SHARED, mmap_fd,0);
int input_fd = open("/home/phuong/Desktop/input.txt", O_RDWR | O_SYNC);
read(input_fd, pt, 4);

munmap(pt,4);
}