#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<map<string, string>> users = {
    {{"username", "Mutebi"}},
    {{"password", "123456"}},
    {{"username", "Nashib"}},
    {{"password", "123456"}},
    {{"username", "Eria"}},
    {{"password", "123456"}},
    {{"username", "Jovia"}},
    {{"password", "123456"}},
};

vector<map<string, string>>::iterator userIt;

void registration()
{
  string username;
  string password;

  cout << "Enter your username" << endl;
  cin >> username;

  cout << "Enter your password" << endl;
  cin >> password;

  users.push_back({{"username", username}, {"password", password}});
  cout << "Successfully registered with username: " << username << endl;
}

auto getUsers()
{
  for (auto userIt = users.begin(); userIt != users.end(); ++userIt)
  {
    map<string, string> &user = *userIt;
    user.erase("password");
    for (const auto &pair : user)
    {
      cout << user.at("username") << endl;
    }
  }
}

string findUser(string username)
{
  for (auto userIt = users.begin(); userIt != users.end(); ++userIt)
  {
    map<string, string> &user = *userIt;
    user.erase("password");
    if (user.at("username") == username)
    {
      return user["username"];
    }
    else
    {
      return "0";
    }
  }

  return "0";
}

int main()
{
  cout << "User is: " << findUser("Mutebio") << endl;
}
