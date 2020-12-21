// Lilac Walia | Dec 16, 2020
// We want to say, "Hello."
// Start with a function. The function's name is Main. 
// Inside the function, we want to print, "Hello World."
#include <stdio.h>

main()
{
    // Where the brackets start and the brackets end, this is called a "scope".
    // Shown below is a string. A string is made up of characters. Whenever writing a string, we put "" around it.
    const char* message = "Hello Coral.\n \n";
    printf(message);

    const char* hi = "Good Morning Lilac!\n \n";
    printf(hi);
 
    printf("Hi Dad!\n\n");

    printf("I'm hungry Mom. What's for dinner? \n \n");

    int x = 21298361;
    int y = 23434535;
    int z = x + y;
    
    printf("%d + %d = %d",x, y, z);
}

// There are 3 steps in programming.
//      1) Compile (Look at a program, and see if there are no errors.)
//      2) Build   (A big program is made of many fies. A builder/Linker links all these files together to build the large program.)
//      3) Run     (The prgram is executing. It runs and does the job it is supposed to do.)


// Today we want to type, "Hello Coral."

// C:\Program Files\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0