#include "Diary.h"
#include "Date.h"
#include "Aux.h"

#include <sstream>
#include <iostream>

Diary::Diary(const std::string& name) : filename(name), output(filename, std::ios::app), input(filename)
{
}

Diary::~Diary()
{
    input.close();
    output.close();
}

void Diary::add(const std::string& message)
{

    Message m;
    m.content = message;
    m.date.set_from_string(get_current_date());
    m.time.set_from_string(get_current_time());


    messages.push_back(m);
    write();
}

void Diary::write()
{
    size_t aux = messages.size() - 1;
    std::string date(messages[aux].date.to_string());
    std::string time(messages[aux].time.to_string());
    std::string content(messages[aux].content);

    if(date_checker(messages[messages.size()].date, filename))
    {
        output << "\n# " << date << "\n";
    }

    output << "- " << time << " " << content << "\n";
}

void Diary::load_messages(const std::string& filename)
{
    std::string message;
    std::string discard;
    std::string time;
    std::string date;
    Message m;

    while(!input.eof())
    {
        input >> discard;
        if(discard == "-")
        {
            input >> time;
            std::getline(input, message);

            m.time.set_from_string(time);
            m.date.set_from_string(date);
            m.content = message;

            messages.push_back(m);
            std::getline(input, discard);
            
        }
        else if(discard == "#") 
        {
            input >> date;
        }
        else
        {
            getline(input, discard);
        }
    }
}

std::vector<Message*> Diary::search(const std::string& what)
{
    std::vector<Message*> messages_found;
    for(Message& i : messages)
    {
        if(i.content.find(what) != std::string::npos)
        {
            messages_found.push_back(&i);
        }
    }
    return messages_found;
}

