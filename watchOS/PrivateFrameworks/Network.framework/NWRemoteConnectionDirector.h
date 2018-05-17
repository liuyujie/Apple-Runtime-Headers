//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<NWRemoteConnectionDirectorDelegate>;

@interface NWRemoteConnectionDirector : NSObject
{
    unsigned int _maximumDataChunkSize;
    NSObject<NWRemoteConnectionDirectorDelegate> *_delegate;
    struct nw_protocol *_directorProtocol;
    struct nw_protocol *_defaultOutputHandler;
    struct nw_hash_table *_protocolHashTable;
    NSMutableArray *_writeRequests;
}

@property(retain) NSMutableArray *writeRequests; // @synthesize writeRequests=_writeRequests;
@property struct nw_hash_table *protocolHashTable; // @synthesize protocolHashTable=_protocolHashTable;
@property struct nw_protocol *defaultOutputHandler; // @synthesize defaultOutputHandler=_defaultOutputHandler;
@property struct nw_protocol *directorProtocol; // @synthesize directorProtocol=_directorProtocol;
@property __weak NSObject<NWRemoteConnectionDirectorDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int maximumDataChunkSize; // @synthesize maximumDataChunkSize=_maximumDataChunkSize;
- (void).cxx_destruct;
- (void)receiveData:(id)arg1 forClient:(id)arg2;
- (void)setOutputProtocolHandler:(struct nw_protocol *)arg1 forFlowID:(id)arg2 dataMode:(unsigned int)arg3;
- (void)setDefaultOutputProtocolHandler:(struct nw_protocol *)arg1;
- (struct nw_protocol *)outputHandlerForFlowID:(id)arg1;
- (unsigned int)dataModeForFlowID:(id)arg1;
@property(readonly, nonatomic) struct nw_protocol *protocol;
- (_Bool)receiveRemoteReply:(id)arg1;
- (id)createSendDataMessageForClientID:(id)arg1 data:(id)arg2 receiveWindow:(unsigned int)arg3;
- (id)createStopBrowseMessageForClientID:(id)arg1;
- (id)createStartBrowseMessageForClientID:(id)arg1 descriptor:(id)arg2 parameters:(id)arg3;
- (id)createCloseConnectionMessageForClientID:(id)arg1;
- (id)createOpenConnectionMessageForClientID:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
