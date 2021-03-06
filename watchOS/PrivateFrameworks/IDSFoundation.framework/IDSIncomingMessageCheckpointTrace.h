//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CUTCheckpointTrace.h"

@class CUTCheckpointRange, NSString;

@interface IDSIncomingMessageCheckpointTrace : CUTCheckpointTrace
{
    NSString *_guid;
    NSString *_service;
    int _command;
    CUTCheckpointRange *_storeInMessageStore;
    CUTCheckpointRange *_decryption;
    CUTCheckpointRange *_sendToClient;
}

@property(readonly, nonatomic) int command; // @synthesize command=_command;
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void).cxx_destruct;
@property(readonly, nonatomic) CUTCheckpointRange *sendToClient; // @synthesize sendToClient=_sendToClient;
@property(readonly, nonatomic) CUTCheckpointRange *decryption; // @synthesize decryption=_decryption;
@property(readonly, nonatomic) CUTCheckpointRange *storeInMessageStore; // @synthesize storeInMessageStore=_storeInMessageStore;
- (id)_reportMetadata;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4;
- (id)initWithService:(id)arg1 command:(int)arg2 uniqueIdentifier:(id)arg3;

@end

