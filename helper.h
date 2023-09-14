/*
 * helper.h
 *
 *  Created on: Sep 13, 2023
 *      Author: rishi
 */

#ifndef HELPER_H_
#define HELPER_H_

int commandTest(const char command[], const char compareString[]){
    return strstr(compareString, command) != NULL;
}

void secondString(char outString[], const char fullString[]){
    int i = 0;
    int j;
    for (i = 0; i < strlen(fullString); i++){
        if(fullString[i] == ' ') break;
    }
    i++;
    for (j = 0; j < (strlen(fullString) - i); j++){
        outString[j] = fullString[i + j];
    }
    outString[j] = '\0';  // Null-terminate outString
}

#endif /* HELPER_H_ */
