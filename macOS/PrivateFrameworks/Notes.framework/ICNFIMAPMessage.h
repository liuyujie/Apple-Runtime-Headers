//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Notes/ICNFMCRemoteMessage.h>

#import "ICNFIMAPMessage.h"

@class NSDate, NSString;

@interface ICNFIMAPMessage : ICNFMCRemoteMessage <ICNFIMAPMessage>
{
    unsigned int _uid;
}

+ (void)initialize;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
@property(readonly, nonatomic) id <ICNFIMAPAccount> account;
@property(readonly, copy) NSString *subject;
- (id)originalMailboxURLString;
- (id)remoteMailboxURLString;
- (id)remoteID;
@property(readonly, copy, nonatomic) NSString *mailboxName;
- (BOOL)isMessageContentLocallyAvailable;
@property(nonatomic) unsigned int uid;
@property(readonly, copy, nonatomic) NSString *messageID;
@property(readonly, copy) NSString *description;
- (id)initWithFlags:(unsigned int)arg1 size:(unsigned long long)arg2 uid:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSDate *dateReceived;
@property(readonly, copy) NSString *debugDescription;
@property BOOL hasTemporaryUid;
@property(readonly) unsigned long long hash;
@property BOOL isPartial;
@property(readonly) unsigned long long messageSize;
@property BOOL partsHaveBeenCached;
@property(readonly) CDStruct_07ba05d6 remoteFlags;
@property(readonly) Class superclass;

@end
