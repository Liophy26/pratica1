#include <math.h>
#include <stdio.h>

// move o cursor para a posição (x,y) do console
void gotoxy(int x, int y) { printf("\033[%d;%df", y, x); }

// limpa a tela do console
void clear() { printf("\033[2J"); }

// função para desenhar um pixel na posição (x,y) do console
void draw_xy(int x, int y, unsigned char r, unsigned char g, unsigned char b) {
    // get console coordinates and draw rgbaPixel
    gotoxy(x, y);
    printf("\033[48;2;%d;%d;%dm  \033[0;00m", r, g, b);
  }

int main(){
    clear();
    gotoxy(1,0);
    printf("Imagem 1");
    for(int i = 0; i<17;i++){
        for(int j = 0; j<17;j++){
            draw_xy(i+2,j+3,8*i+7*j,0,0);
        }
    }

    gotoxy(21,0);  
    printf("Imagem 2");
    for(int i = 0; i<17;i++){
        for(int j = 0; j<17;j++){
            draw_xy(i+23,j+3,0,8*i+7*j,0);
        }
    }

    gotoxy(40,0);
    printf("Imagem 3");
    for(int i = 0; i<17;i++){
        for(int j = 0; j<17;j++){
            draw_xy(i+44,j+3,0,0,8*i+7*j);
        }
    }

    gotoxy(59,0);
    printf("Imagem 4");
    for(int i = 0; i<17;i++){
        for(int j = 0; j<17;j++){
            draw_xy(i+65,j+3,8*i+7*j,8*i+7*j,8*i+7*j);
        }
    }
}