#include <stdio.h>
#define MA_NO_WAV
#define MA_NO_MP3
#define MA_NO_FLAC
#include "miniaudio/miniaudio.h"

int main(void){

int w = 0;

while ((w <= 0) )
{

printf("Audio length in seconds please! (Positive numbers only) \n");

scanf("%u",&w);

if (w <= 1){
   break;
}

}

printf("%u\n", w);

// look in a folder for audio


}
