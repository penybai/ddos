//
//  ddos.h
//  cdos
//
//  Created by Andre Zay on 17.12.2017.
//  Copyright © 2017 Andre Zay. All rights reserved.
//

#ifndef ddos_h
#define ddos_h

#include "message.h"
#include "socket.h"
#include "util.h"

#include <assert.h>
#include <pthread.h>
#include <signal.h>
#include <stdbool.h>
#include <stdlib.h>

#define MODE_TCP 1
#define MODE_UDP 2

extern int pc;
extern int tcount;
extern char* __host;
extern int __port;
extern pthread_mutex_t mutex;

typedef struct {
    char* packet;
    char* host;
    int port;
    uint8_t mode;
} _dos_param;

void ddos(char* host, int port, char* packet, int _tcount, int mode);

#endif /* ddos_h */