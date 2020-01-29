// GameDev.cpp: A program using the TL-Engine

#include <TL-Engine.h>	// TL-Engine include file and namespace
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <deque>
using namespace tle;
using namespace std;

void main()
{
	// Create a 3D engine (using TLX engine here) and open a window for it
	I3DEngine* myEngine = New3DEngine( kTLX );
	myEngine->StartWindowed(100,100);

	// Add default folder for meshes and other media
	myEngine->AddMediaFolder( "C:\\ProgramData\\TL-Engine\\Media" );

	/**** Set up your scene here ****/

	//Read the mMap.txt and dMap.txt
	/*ifstream mMap_file, dMap_file;
	string word;
	
	cout << "mMap values:" << endl;
	mMap_file.open("mMap.txt");
	while (mMap_file >> word)
		cout << word << endl;
	
	cout << "\ndMap_values:" << endl;
	dMap_file.open("dMap.txt");
	while (dMap_file >> word)
		cout << word << endl;*/

	//int I_word;
	//string S_word;
	
	int word;
	int MapXsize, MapYsize;

	std::vector< vector<int> > mapSize;
	std::vector< int > mapRow;

	ifstream mMap_file("dMap.txt");
	if (!mMap_file.good())
		cout << "Error reading file!" << endl;
	else
	{
		/*getline(mMap_file, S_word);
		int y = 0;
		while (getline(mMap_file, S_word))
		{
			std::vector< int > mapRow;
			for (size_t x = 0; x < S_word.size(); x++)
			{
				mapRow.push_back(stoi(S_word.substr(x, 1)));
				cout << S_word << endl;
			}
			y++;
			mapSize.push_back(mapRow);
		}*/

		/*while (getline(mMap_file, S_word))
		{
			I_word = atoi(S_word.c_str());
			
			int test = I_word + I_word;
			cout << test << endl;
		}*/

		mMap_file >> word;
		MapXsize = word;
		
		mMap_file >> word;
		MapYsize = word;

		cout << MapXsize << ", " << MapYsize << endl;

		for (int i = 0; i < MapXsize; i++)
		{
			for (int j = 0; j < MapYsize; j++)
				//cout << i << ", " << j << endl;
				while (mMap_file >> word)
				{
					mapRow.push_back(word);
					cout << word << endl;
					//cout << i << ", " << j << endl;
				}
			mapSize.push_back(mapRow);
		}
	}

	// The main game loop, repeat until engine is stopped
	while (myEngine->IsRunning())
	{
		// Draw the scene
		myEngine->DrawScene();

		/**** Update your scene each frame here ****/

	}

	// Delete the 3D engine now we are finished with it
	myEngine->Delete();
}
