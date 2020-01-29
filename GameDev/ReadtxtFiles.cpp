//#include <iostream>
//#include <fstream>
//#include <vector>
//using namespace std;
//
//void ReadFile()
//{
//	//Read the mMap.txt and dMap.txt
//	ifstream mMap_file, dMap_file;
//	string word;
//
//	cout << "mMap values:" << endl;
//	mMap_file.open("mMap.txt");
//	while (mMap_file >> word)
//		cout << word << endl;
//
//	cout << "\ndMap_values:" << endl;
//	dMap_file.open("dMap.txt");
//	while (dMap_file >> word)
//		cout << word << endl;
//
//
//
//	string line;
//	vector <string> lines;
//	ifstream myfile("mMap.txt");
//
//	if (myfile.is_open()) {
//		while (getline(myfile, line)) {
//			cout << line << "\n";
//			lines.push_back(line);
//		}
//
//		myfile.close();
//	}
//	else {
//		cout << "Unable to open file";
//	}
//}
