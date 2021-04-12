/*
    Daniel A. Silva Red ID: 820567716
    Kathryn Shafer  Red ID: 821586552
*/

#include <iostream>
#include <pthread.h>
#include <stdio.h>
#include <string>
#include <semaphore.h>
#include <unistd.h>
using namespace std;

int main(int argc, char** argv)
{
    int argVal = 0, eSlep = 0, lSlep = 0, cfbSlep = 0, eesSlep = 0;

    while (argVal = getopt(argc, argc, "ELFe:") != -1) 
    {
        switch (argVal) 
        {
        case 'E':
            eSlep = atoi(optarg);
            break;
        case 'L':
            lSlep = atoi(optarg);
            break;
        case 'F':
            cfbSlep = atoi(optarg);
            break;
        case 'e':
            eesSlep = atoi(optarg);
            break;
        default:
            cout << "Invalid optional argument" << endl;
            exit(EXIT_FAILURE);
        }
    }
}