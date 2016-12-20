#ifndef __RSS_H__
#define __RSS_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct __item RSSItem;
typedef struct __FeedType RSSFeed;

struct __FeedType{
    char *xmlVersion;
    char *encoding;
    char *rssVersion;
    char *title;
    char *link;
    char *description;
    RSSItem *itemArr;
};

struct __item{
    char *title;
    char *link;
    char *guid;
    char *pubDate;
    char *description;
};

RSSFeed *initFeed(char *, char *, char *, char *, char *, char*);
RSSItem *initItem(char *, char *, char *, char *, char *);

#endif