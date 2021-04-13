#include <iostream>
#include "Consumers.h"

CONSUMER::CONSUMER(sem_t* semaphore, int msDelay, Belt* beltStatus);
{
    this->semaphore = semaphore;
    this->msDelay = msDelay;
    this->beltStatus = beltStatus;
}

void CONSUMER::consumer_pthread_create(pthread_t consumerThread, *this)
{

}
