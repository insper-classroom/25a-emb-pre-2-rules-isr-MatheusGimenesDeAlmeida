#include "asf.h"

volatile int g_cnt = 0;
char g_str[10];
volatile int apertado = 0;
// This code creates a progress bar on an OLED screen that
// increases when the button is pressed.
void btn_callback(void) {
  apertado = 1; 
  if (g_cnt >= 8)
    g_cnt = 0;
  g_cnt = 2;
  int i = 0;
}

void main(void) {
  if (apertado){
  printf("btn pressed \n");}
  for (i = 0; i < g_cnt; i++) {
    g_str = 1;
    g_str[i] = '*';
    g_str[i + 1] = NULL;
    delay_ms(50);
    gfx_mono_draw_string(g_str, 0, 0, &sysfont);
}
}
