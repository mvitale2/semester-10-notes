// "dmatrix". This is (The) Matrix.
// As minimal as it gets -- code is (only) 1.2Kbytes.
// dmatrix versus cmatrix: https://imgur.com/a/ViGCm5q
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <termios.h>
#include <fcntl.h>

#define T 50000

typedef struct{int x,y,l,t;}D;

int kbhit(){struct termios o,n;tcgetattr(0,&o);n=o;n.c_lflag&=~ICANON;tcsetattr(0,TCSANOW,&n);int f=fcntl(0,F_GETFL,0);fcntl(0,F_SETFL,f|O_NONBLOCK);int c=getchar();tcsetattr(0,TCSANOW,&o);fcntl(0,F_SETFL,f);return c!=EOF;}

int main(){srand(time(0));struct winsize w;ioctl(0,TIOCGWINSZ,&w);int r=w.ws_row,c=w.ws_col,i,j,N=c+20;D d[N];char u[N],z[94];for(i=0;i<94;i++)z[i]=i+33;for(i=0;i<N;i++){u[i]=1;d[i].x=i%c;d[i].l=rand()%(r-9)+10;d[i].y=-d[i].l;d[i].t=rand()%94;}printf("\033[?25l");while(1){printf("\033[H\033[2J");for(i=0;i<N;i++){for(j=0;j<d[i].l;j++){int y=d[i].y+j;if(y>=0&&y<r&&d[i].x<c)printf("\033[%d;%dH%s%c",y+1,d[i].x+1,j==d[i].l-1?"\033[37m":"\033[32m",z[(d[i].t+j)%94]);}d[i].y++;d[i].t=(d[i].t+1)%94;if(d[i].y>r){u[d[i].x]=0;for(j=0;j<N;j++)if(!u[j]){d[i].x=j;d[i].l=rand()%(r-9)+10;d[i].y=-d[i].l;d[i].t=rand()%94;u[j]=1;break;}if(j==N){d[i].x=rand()%c;d[i].l=rand()%(r-9)+10;d[i].y=-d[i].l;d[i].t=rand()%94;}}}fflush(stdout);usleep(T);if(kbhit())break;}printf("\033[?25h\033[0m");return 0;}