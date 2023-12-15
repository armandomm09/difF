#include <string>

class User{
    private:

        std::string username;
        std::string adress;
        std::string cellphone;
        int age;

    public:
         User();
         User(std::string, std::string, std::string, int);

        std::string getName();
        std::string getAdress()
};