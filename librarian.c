#include <stdio.h>
#define MA_NO_WAV
#define MA_NO_MP3
#define MA_NO_FLAC
#include "miniaudio/miniaudio.h"
//#include "miniaudio/miniaudio_libvorbis.c"
int main(void){

int w = 0;

do
{

printf("Audio length in seconds please! (Positive numbers only) \n");

scanf("%u",&w);
while (getchar() != '\n'); // Aka, checks getchar and then cleans out the input
}
while (w <= 1);

printf("%u\n", w);

// look in a folder for audio


}
