// In this file, the code for the actual tool will live
#include <bits/stdc++.h> 
const int MAX_ARGUMENTS = 2;
using namespace std;
void defaultCommand()
{
    cout<<"This is the default command\n";
}

void helpCommand()
{
    fprintf(stderr,
    "Welcome to Crypto Checker!!\n"
    "The command scheme is as follows\n"
    "---------------------------------\n"
    "-h    Print out help menu\n"
    "-C    Specify which crypto to check\n"   
    "  -C b  Check Bitcoin\n"
    "  -C e  Check Etherium\n"
    "  -C s  Check Solona\n"

    );

}

int main(int argc, char*argv[]){
    // Sanity check to determine if arguments passed are accepted
    if(argc > (MAX_ARGUMENTS+1))
    {
        cout<<"Too many parameters\n";
        return -1;
    }

    if(argc == 1)
    {
        defaultCommand();
        return 0;
    }
    //Parse flags
    switch (getopt(argc,argv,"hC:M:"))
    {
    case 'h':
        helpCommand();
        break;
    
    default:
        defaultCommand();
        break;
    }

}
