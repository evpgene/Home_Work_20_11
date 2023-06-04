#include "Message.h"
#include "User.h"
#include <iostream>
#include <string>
#include <sstream>
#include "ReceivedData.h"
#include "Keywords.h"

using User_t = std::shared_ptr<User>;  // указатель на юзера
using Message_t = std::shared_ptr<Message>;  // указатель на чат

class Client
{
private:

public:
    Client();
    ~Client();
    const Keywords key;

    void main(void);
    
    User_t inputUser();
    Message_t inputMessage(const User_t user);
    const std::string getLogonString(const User_t user);
    const std::string getMessageString(const Message_t message);
    const std::string getRegistrationString(const User_t user);

    const std::string getGetUsernamesString();
    const std::string getGetMessagesString();
    const std::string getContinueString();

    ReceivedData interpretString(const std::string& str);


    // void logout();
    // void sendUser();
    // void sendMessage();
    // void receivMessage();
    // keywords


    



};


