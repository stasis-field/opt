#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
// #include <filesystem>
// #include <boost/filesystem.hpp>

// using namespace boost::filesystem;

using namespace std;
// namespace {filesystem};

typedef std::vector<std::string> stringvec;


int main(){

	// string homepath = "/home/scrith/";
	// for (const auto & entry : filesystem::directory_iterator(path))
	// 	cout << entry.path() << endl;


	stringvec v;
	read_directory(".", v);
	std::copy(v.begin(), v.end(),
		std::ostream_iterator<std::string>(std::cout, "\n"));


	ofstream dbfile;
	dbfile.open ("/home/scrith/var/mydb");
	dbfile << "Writing this to a file.\n";
	dbfile.close();



	return 0;

}