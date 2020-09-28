#include <iostream>
#include <string>

std::string askText(std::string prompt);
int askNumber(std::string prompt);
void tellStory(std::string name,
               std::string noun,
               int number,
               std::string bodyPart,
               std::string verb );

int main()
{
    std::cout << "\n\t\tWelcome to CRAZY STORY!";
    std::cout << "\n\tAnswer the next questions to help create the story.\n";
    std::string name = askText("Please enter a name: ");
    std::string noun = askText("Please enter a plural noun: ");
    int number = askNumber("Please enter a number: ");
    std::string bodyPart = askText("Please enter a body part: ");
    std::string verb = askText("Please enter a verb: ");
    tellStory(name, noun, number, bodyPart, verb);
    return 0;
}

std::string askText(std::string prompt)
{
    std::string text;
    std::cout << prompt;
    std::cin >> text;
    return text;
}

int askNumber(std::string prompt)
{
    int number;
    std::cout << prompt;
    std::cin >> number;
    return number;
}

void tellStory(std::string name, std::string noun, int number, std::string bodyPart, std::string verb )
{
    std::cout << "\nHere's your story:";
    std::cout << "\nThe famous explorer ";
    std::cout << name;
    std::cout << " had nearly given up а life-long quest to find.";
    std::cout << "\nThe Lost City of ";
    std::cout << noun;
    std::cout << " when one day, the ";
    std::cout << noun;
    std::cout << " found an explorer.";
    std::cout << "\nSurrounded by ";
    std::cout << number;
    std::cout << " of ";
    std::cout << noun;
    std::cout << ", a tear came to ";
    std::cout << name << "'s ";
    std::cout << bodyPart;
    std::cout << "\nAfter all this time, the quest was finnaly over. ";
    std::cout << "And the the ";
    std::cout << noun;
    std::cout << "\npromptly devoured ";
    std::cout << name << ". ";
    std::cout << "\n\nMoral of the story? Be careful what you ";
    std::cout << verb;
    std::cout << " for. P_P ";
}

