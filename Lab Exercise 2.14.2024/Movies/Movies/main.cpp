//Lab Exercise 2.14.2024 Problem 1
//Author: nmessa
//This is a driver program to test the MovieData class
#include "moviedata.h"

int main()
{
	//Create a MovieData object
	MovieData first("2001 A Space Odyssey", "Stanley Kubrick", 1970, 187);

	//Display the MovieData object data
	first.displayMovie();
	return 0;
}

//Output
//Title: 2001 A Space Odyssey
//Director: Stanley Kubrick
//Release Date: 1970
//Running time: 3:07