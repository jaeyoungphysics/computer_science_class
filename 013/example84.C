#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <termios.h>
#include <fcntl.h>

#define BUF_MAX 512

int main(){
  int fd,i=0;
  char buf[BUF_MAX];
  char tmp,read_byte=0;
  struct termios newtio;

  fd = open( "/dev/ttyUSB0",O_RDWR|O_NOCTTY);
  if(fd<0) {fprintf(stderr,"ERR\n"); exit(-1);}

  memset(&newtio, 0, sizeof(newtio));
  newtio.c_cflag = B115200;
  newtio.c_cflag |= CS8;
  newtio.c_cflag |= CLOCAL;
  newtio.c_cflag |= CREAD;
  newtio.c_iflag = IGNPAR;
  newtio.c_oflag = 0;
  newtio.c_lflag = 0;
  newtio.c_cc[VTIME] = 0;
  newtio.c_cc[VMIN] = 0;
  tcflush (fd,TCIFLUSH);
  tcsetattr(fd,TCSANOW,&newtio);

  sleep(3);
  while(1) {
    printf("please input 1 or 2\n");
    int idum; scanf("%d", &idum );
    if(idum ==1){
      printf("writing charater 1 to serial line\n" );
      write( fd, "1", 1);
      i = read(fd,buf,BUF_MAX);
      buf[i] = '\0';
      printf(" ^_^ Yellow light on %s\n",buf);
      sleep(1);} 
    else if (idum ==2){
      printf("writing charater 2 to serial line\n");
      write(fd, "2", 1);
      i = read(fd,buf,BUF_MAX);
      printf(" ^_^ Yellow light off %s\n",buf);
      sleep(1);}
    else if (idum ==3){
      printf("!!! write charater 1 or 2 !!!\n");
      write(fd, "3", 1);
      i = read(fd,buf,BUF_MAX);
      printf(" €Ñ_€ÑRed light on %s\n", buf);
      sleep(1);}
    else {
      printf("!!! write charater 1 or 2 !!!\n");
      write(fd, "4", 1);
      i = read(fd,buf,BUF_MAX);
      printf(" €Ñ_€ÑRed light off %s\n", buf);
      sleep(1);}
  }
  close( fd);
  return 0;
}


