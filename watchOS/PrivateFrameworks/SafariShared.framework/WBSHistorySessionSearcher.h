//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, WBSHistorySessionController;

@interface WBSHistorySessionSearcher : NSObject
{
    WBSHistorySessionController *_sessionController;
    NSObject<OS_dispatch_queue> *_searchQueue;
}

- (void).cxx_destruct;
- (void)performSearchWithText:(id)arg1 options:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithSessionController:(id)arg1;
- (id)init;

@end
