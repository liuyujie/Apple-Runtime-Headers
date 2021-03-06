//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DashboardClient/DBCUNIXScriptJSObject.h>

@class WebScriptObject;

@interface DBCAsyncUNIXScriptJSObject : DBCUNIXScriptJSObject
{
    WebScriptObject *_callback;
    id _widget;
    unsigned int _cancelled:1;
    unsigned int _readingstdout:1;
    unsigned int _readingstderr:1;
    unsigned int _complete:1;
    unsigned int _closed:1;
    WebScriptObject *onreadoutput;
    WebScriptObject *onreaderror;
}

+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)invalidateScriptsForWidget:(id)arg1;
+ (void)_removeScriptFromCache:(id)arg1;
+ (void)_addScriptToCache:(id)arg1;
- (void)_taskedFinished:(id)arg1;
- (id)toString;
- (void)close;
- (void)write:(id)arg1;
- (void)cancel;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)_collectData:(id)arg1;
- (void)_clearFileHandle:(id)arg1;
- (void)dealloc;
- (id)initWithCommand:(id)arg1 callback:(id)arg2 currentDirectory:(id)arg3 widget:(id)arg4;

@end

