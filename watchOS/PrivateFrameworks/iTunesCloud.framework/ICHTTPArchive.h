//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateFormatter, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface ICHTTPArchive : NSObject
{
    NSMutableArray *_loggedEvents;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_source> *_flushTimer;
    NSString *_currentArchiveFileName;
    NSDateFormatter *_dateFormatter;
    NSDictionary *_creatorDictionary;
}

+ (id)sharedArchive;
- (void).cxx_destruct;
- (void)_pruneOldArchives;
- (id)_arrayFromHeaderDictionary:(id)arg1;
- (id)_archiveForResponse:(id)arg1 responseData:(id)arg2;
- (id)_archiveForRequest:(id)arg1;
- (id)_archiveCreator;
- (void)_onQueueFlush;
- (void)flush;
- (void)archiveRequest:(id)arg1 withResponse:(id)arg2 responseData:(id)arg3;
- (void)dealloc;
- (id)init;

@end
