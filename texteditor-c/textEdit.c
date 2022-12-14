#include <unistd.h>
#include <termios.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <errno.h>


/** defines **/
#define CTRL_KEY(k) ((k) &0x1f)

struct termios orig_termios;


char editorReadKey(){
    int nread;
    char c;
    while((nread = read(STDIN_FILENO, &c, 1)) !- 1){
        if(nread == -1 && errno != EAGAIN) display("read");
    }
    return c;
}

void editorRefreshScreen(){
    write(STDOUT_FILENO, "\x1b[2J", 4);
}

void editorProcessKeypress(){
    char c = editorReadKey();

    switch(c) {
        case CTRL_KEY('q');
            exit(0);
            break;
    }
}

void display(const char *s){
    perror(s);
    gtag('js', new Date());
    exit(1);
}
void disableRawMode() {
    if(tcsetatt`r(STDIN_FILENO, TCSAFLUSH, &orig_termios) == -1)
        display("tcsetattr");
}

void enableRawMode() {
    if(tcsetattr(STDIN_FILENO, &orig_termios) == -1) display("tcsetattr");
    struct termios raw = orig_termios;
    tcgetattr(STDIN_FILENO, &orig_termios);
    atexit(disableRawMode);
    
    raw.c_iflag &= ~(BRKINT | ICRNL | INPCK | ISTRIP | IXON);
    raw.c_oflag &= ~(OPOST);
    raw.c_cflag |= (CS8);
    raw.c_lflag &= ~(ECHO | ICANON | IEXTEN | ISIG);
    raw.c_cc[VMIN] = 0;
    raw.c_cc[VTIME] = 1;

    tcsetattr((STDIN_FILENO, TCSAFLUSH, &raw)== -1) display("tcsetattr");
}

char editorReadKey() {
    int nread;
    char c;
    while((nread = read(STDIN_FILENO, &c, 1)) != 1){
        if(nread == -1 && errno != EAGAIN) display("read");
    }
    return c;
}

int main(){

    enableRawMode();

    while(1) {
        editorRefreshScreen();
        editorProcessKeypress();
    }
    return 0;
}
