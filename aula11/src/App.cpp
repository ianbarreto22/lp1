#include "App.h"

#include <iostream>
#include <string>
#include <sstream>

App::App(const std::string& filename) : diary(filename)
{ 
    diary.load_messages(filename);
}

int App::run(int argc, char* argv[])
{
    if (argc == 1) {
        return show_usage(argv[0]);
    }

    std::string action = argv[1];

    if (action == "add") {
        if (argc == 2) {
            add();
        } 
        else 
        {
             add(argv[2]);
        }
    } else if (action == "list") {
        list_messages();
    } else if (action == "search") {
        if(argc == 2)
        {
            return show_usage(argv[0]);
        }
        else
        {
            search(argv[2]);
        }
    } else {
        return show_usage(argv[0]);
    }

    return 0;
}

void App::add()
{
    std::string message;
    std::cout << "Enter your message:" << std::endl;
    std::getline(std::cin, message);

    add(message);
}

void App::add(const std::string message)
{
     diary.add(message);
}

void App::list_messages()
{
    for (auto i : diary.messages) {
        std::cout << "-" << i.content << std::endl;
    }
}

void App::search(const std::string& what)
{
    std::vector<Message*> messages_found = diary.search(what);
    if(messages_found.size() != 0)
    {   
        std::cout << "\nMessages found:\n";
        for(auto i : messages_found)
        {
            std::cout << "-" << i->content << std::endl;
        }
        std::cout << "\n";
    }
    else
    {
        std::cout << "\n No messages were found \n" << std::endl;
    }
}

int App::show_usage(const std::string &prog_name)
{
    std::cout << "\nCommand List:\n";
    std::cout << prog_name << " - Shows the Command List." << std::endl;
    std::cout << prog_name << " add - Requests a message for the user." << std::endl;
    std::cout << prog_name << " add <message> - Adds a message in the file." << std::endl;
    std::cout << prog_name << " search <search_term> - Searchs a message in the file.";
    std::cout << "\n";
    return 1;
}


