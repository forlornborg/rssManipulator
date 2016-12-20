#include "RSS.h"

RSSFeed *initFeed(char *xmlVersion, char *encoding, char *rssVersion, char *title, char *link, char *description){
    RSSFeed * F = (RSSFeed *)malloc(sizeof(RSSFeed));
    F->xmlVersion = xmlVersion;
    F->encoding = encoding;
    F->rssVersion = rssVersion;
    F->title = title;
    F->link = link;
    F->description = description;
    F->itemArr = NULL;
    return F;
}

RSSItem *initItem(char *title, char *link, char *guid, char *pubDate, char *description){
    RSSItem * I = (RSSItem *)malloc(sizeof(RSSItem));
    I->title = title;
    I->link = link;
    I->guid = guid;
    I->pubDate = pubDate;
    I->description = description;
}



