#include "RSS.h"
#define MAX_COMMAND 81

char *userInput(char * toPrint){
    printf("%s\n", toPrint);
    char *toSave = malloc(sizeof(char) * MAX_COMMAND);
    scanf("%s", toSave);
    return toSave;
}

int main(int argc, char **argv){
    char *command = malloc(sizeof(char) * MAX_COMMAND);
    if(argv[1] == NULL){
        char *fileName = userInput("enter file name");
        FILE *feedFile = fopen(fileName, "w+");
        char *xmlVersion = userInput("enter XML version");
        char *encoding = userInput("enter encoding");
        char *rssVersion  = userInput("enter RSS version");;
        char *title = userInput("enter feed title");
        char *link = userInput("enter link");
        char *description  = userInput("enter description");
        RSSFeed *masterFeed = initFeed(xmlVersion, encoding, rssVersion, title, link, description);
    }else{
        //you've got a working xml. You're goodzo
    }
    while(scanf("%s",command) > 0){
        if(strcmp(command, "i") == 0){
            char *title = userInput("enter title");
            char *link = userInput("enter link");
            char *guid = userInput("enter guid");
            char *pubDate = userInput("enter pubDate");
            char *description = userInput("enter description");
            RSSItem *item = initItem(title, link, guid, pubDate, description);
        }
    }
    return 0;
}