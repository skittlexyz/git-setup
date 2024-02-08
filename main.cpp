#include <iostream>
#include <sstream>
#include <string>

/* -a --author | -e --email */
/* CHANGES HERE */

int handleParameters(int argc, char **argv) {
  if (argc == 1)
    return -1;
  return 0;
}

int main(int argc, char **argv) {
  int option = handleParameters(argc, argv);
  switch (option) {
  case -1:
    std::cout << "Usage: ./git-setup [OPTION]... [FILE]..." << std::endl;
    return 1;
  }
  std::string user;
  std::getline(std::cin, user);
  std::stringstream ss(user);
  std::string word;
  std::string command = "echo";
  while (ss >> word) {
    command += " " + word;
  }
  int result = system(command.c_str());
  return result;
}