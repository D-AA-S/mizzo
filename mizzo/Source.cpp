/*
    Daniel A. Silva Red ID: 820567716
    Kathryn Shafer  Red ID: 821586552
*/
extern const int BELTSIZE = 10;
extern const int CFB = 3;

#include <iostream>
#include <pthread.h>
#include <stdio.h>
#include <string>
#include <semaphore.h>
#include <unistd.h>
#include "Belt.h"
#include "Consumers.h"
#include "Producers.h"

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
    
    sem_t mutex;  //Two producers and two consumers (CFB and EES, and Ethel and Lucy)
    sem_t crunchyFrogBites; //semaphore to make sure that if there 3 CFB on the belt, the CFB thread should wait until it can keep producing
    sem_t unconsumed; // start at 0; shows the number of items in the buffer; if full, then the producer threads should be put to sleep
    sem_t availableSlots; // starts at BELTSIZE; how many available slots there are in the buffer (starts with the available slots on the conveyor belt); if empty, the consumer threads should be put to sleep

    if (sem_init(&mutex, 0, 1) == -1) {
        //unable to intialize semaphore, report failure
    }

    if (sem_init(&crunchyFrogBites, 0, CFB) == -1) {
        //unable to intialize semaphore, report failure
    }

    if (sem_init(&unconsumed, 0, 0) == -1) {
        //unable to intialize semaphore, report failure
    }

    if (sem_init(&availableSlots, 0, BELTSIZE) == -1) {
        //unable to intialize semaphore, report failure
    }


    pthread_t ethel, lucy, cfb, ees;

    //create the crunchy frog bite generator, then the everlasting escargot sucker, then the lucy thread, then the ethel thread

    pthread_create(&cfb, NULL)
}