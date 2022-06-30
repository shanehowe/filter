#include <iostream>

// to make sense of this function read the bleep() function below this!
void filter(std::string word, std::string &text, int i)
{
    for (int j = 0; j<word.length(); j++)
    {
        //word: hi 
        //text[i+j] > first loop will be text[0+0](h)
        //so text [0] will be replaced with '*'
        //text[i+j] > second loop will be text[0+1](i)
        //text[1] will be replaced with '*'
        //loop has now finihed because word.length = 2
        text[i+j] = '*';
    }
}

void bleep(std::string word, std::string &text)
{
    
    // loop through text
    for (int i = 0; i<text.length(); i++)
    {
        int counter = 0;
        // loop through text for the length of given word
        for (int j = 0; j<word.length(); j++)

        {
            // word: hi
            //text: hi there
            //first loop > if text[0 + 0](h) == word[0](h) counter++
            //second iteration of inner loop > if text[0+1](i) == word[1](i) counter++
            // because inner loop only runs till length of word the next if statement will be executed
            if (text[i+j] == word[j])
            {
                counter++;
            } 
        }
        // counter = 2 now
        //if counter(2) == word.length()(2) execute function between curly braces
        // if not keep iterating though text
        if (counter == word.length())
        {
            filter(word, text, i);
        }
    }
    
}

