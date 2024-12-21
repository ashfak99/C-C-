// C program to implement sound()
#include <dos.h>
#include <stdio.h>
#include <stdlib.h>

// Driver Code
int main()
{
	// Initialise frequency
	int x = 200;

	// Loop for playing sound of
	// increasing frequency
	for (; x < 1000; x++) {

		// Function to play sound
		sound(x);

		delay(25);
	}

	// To stop the frequency
	nosound();
	return 0;
}
