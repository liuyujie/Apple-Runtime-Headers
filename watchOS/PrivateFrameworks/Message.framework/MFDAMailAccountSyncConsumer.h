//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Message/MFDAMailAccountConsumer.h>

#import "DAMailboxRequestConsumer.h"
#import "DAMailboxStreamingContentConsumer.h"

@class MFActivityMonitor, NSArray, NSConditionLock, NSMutableData, NSMutableDictionary, NSString;

@interface MFDAMailAccountSyncConsumer : MFDAMailAccountConsumer <DAMailboxRequestConsumer, DAMailboxStreamingContentConsumer>
{
    NSArray *_requests;
    NSArray *_consumers;
    NSString *_tag;
    NSString *_accountID;
    MFActivityMonitor *_monitor;
    id _streamConsumer;
    NSMutableData *_bodyData;
    _Bool _moreAvailable;
    _Bool _receivedFirstItem;
    _Bool _firstSyncBatch;
    int _syncKeyResets;
    int _serverErrors;
    NSMutableDictionary *_syncResponseConsumersByMessageId;
    NSConditionLock *_accountHierarchyLock;
}

@property(readonly, nonatomic) _Bool moreAvailable; // @synthesize moreAvailable=_moreAvailable;
@property(retain, nonatomic) id streamConsumer; // @synthesize streamConsumer=_streamConsumer;
@property(readonly, nonatomic) NSString *tag; // @synthesize tag=_tag;
- (_Bool)refreshFolderHierarchyAndWait:(unsigned int)arg1;
- (void)accountHierarchyChanged:(id)arg1;
- (void)taskFailed:(id)arg1 statusCode:(int)arg2 error:(id)arg3;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;
- (_Bool)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;
- (void)resultsForMailbox:(id)arg1 newTag:(id)arg2 actions:(id)arg3 responses:(id)arg4 percentComplete:(double)arg5 moreAvailable:(_Bool)arg6 sentBytesCount:(unsigned int)arg7 receivedBytesCount:(unsigned int)arg8;
- (void)partialResultsForMailbox:(id)arg1 actions:(id)arg2 responses:(id)arg3 percentComplete:(double)arg4 moreAvailable:(_Bool)arg5;
- (void)handleSyncResponses:(id)arg1;
- (id)actionsConsumer;
- (id)originalThreadMonitor;
- (void)_setTag:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithCurrentTag:(id)arg1 accountID:(id)arg2 requests:(id)arg3 consumers:(id)arg4;

@end

