#pragma once
//File-Operations.h file is used to declare the file operation functions
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <list>

using namespace std;

struct file {
	string name;
	int size;
};

class folder {
	public:
		/* The function adds a folder. The folder is added inside a parent folder. The function
		for the parent folder using the given path. The path is a hierarchy of folders
		last folder in the hierarchy is the parent of the to-be-added folder.*/
		void add_folder(string path, string folder_name);

		/* This function deletes a folder with a given name. It searches for parent folder of the
		given folder using the given path. */
		void delete_folder(string path, string folder_name);

		/* This function adds a file with a given name. It searches for parent folder of the file using
		the given path. */
		void add_file(string path, string file_name, int size);

		/* This function finds a file with a given name. It searches for the file using the given path. */
		file get_file(string path, string file_name);

		/* This function finds all files which have names that start with the given parameter
		(file_name). It searches for the files using the given path. */
		list<file> get_files(string path, string file_name);

		/* The function deletes the file with the given name. The location of the file is specified in
		the path. Deleting the file changes the size of its parent folder */
		void delete_file(string path, string file_name);
	private:
		string name;
		int size;
		list<file> files;
}; 