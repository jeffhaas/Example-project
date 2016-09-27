// Hello.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

extern "C" {
#include <libavcodec\avcodec.h>
#include <libavformat\avformat.h>
}

#pragma comment(lib, "avcodec.lib")

using namespace std;


int main()
{
	av_register_all();

	string s;
	cout << "Hello, World\n";
	
	for (int i = 0; i < 10; i++) {

		cout << "There are " << i << " lights.\n";

	}
		
		
	cout << "\nEnter anything to exit > ";
	cin >> s;
    return 0;
}

