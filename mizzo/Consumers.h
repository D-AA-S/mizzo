#pragma once

//Create a consumer thread function

struct CONSUMER
{
    sem_t* semaphore;
    int msDelay;
    Belt* beltStatus;

    CONSUMER(sem_t* semaphore, int msDelay, Belt* beltStatus);
    void consumer_pthread_create(pthread_t consumerThread, *this);
};

