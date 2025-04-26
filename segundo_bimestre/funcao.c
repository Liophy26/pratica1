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

#define R 0xff000000
#define G 0x00ff0000
#define B 0x0000ff00
#define A 0x000000ff

#define RGBA(r, g, b, a) (r << 24 | g << 16 | b << 8 | a)

struct pixel_1 {
	unsigned char rgba[4];
};

struct pixel_2 {
	unsigned char r, g, b, a;
};





int main() {
	printf("sizeof(struct pixel_1): %d\n", sizeof(struct pixel_1));
	printf("sizeof(struct pixel_2): %d\n", sizeof(struct pixel_2));
	
	struct pixel_1 pixel1 = {
	  {255, 170, 0, 187} // FF AA 00 BB
	};
	
	printf("pixel1.rgba[0]: %X\n", pixel1.rgba[0]);
	printf("pixel1.rgba[1]: %X\n", pixel1.rgba[1]);
	printf("pixel1.rgba[2]: %X\n", pixel1.rgba[2]);
	printf("pixel1.rgba[3]: %X\n", pixel1.rgba[3]);
	                        //.r   .g .b   .a
	struct pixel_2 pixel2 = {255, 170, 0, 187};
	printf("pixel2.r: %X\n", pixel2.r);
	printf("pixel2.g: %X\n", pixel2.g);
	printf("pixel2.b: %X\n", pixel2.b);
	printf("pixel2.a: %X\n", pixel2.a);
	return 0;
 
}
