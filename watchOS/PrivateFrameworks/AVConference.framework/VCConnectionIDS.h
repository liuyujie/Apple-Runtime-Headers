//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VCConnectionProtocol.h"

@class IDSDataChannelLinkContext, NSData, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface VCConnectionIDS : NSObject <VCConnectionProtocol>
{
    IDSDataChannelLinkContext *_linkContext;
    unsigned int _datagramChannelToken;
    int _priority;
    unsigned int _type;
    int _localCellTech;
    int _remoteCellTech;
    int _connectionMTU;
    unsigned int _uplinkBitrateCap;
    unsigned int _downlinkBitrateCap;
}

+ (unsigned int)worstCaseNetworkOverheadInBytesWithNumOfStreamId:(int)arg1 isPriorityIncluded:(_Bool)arg2;
@property unsigned int downlinkBitrateCap; // @synthesize downlinkBitrateCap=_downlinkBitrateCap;
@property unsigned int uplinkBitrateCap; // @synthesize uplinkBitrateCap=_uplinkBitrateCap;
@property(readonly) unsigned int type; // @synthesize type=_type;
@property int priority; // @synthesize priority=_priority;
@property(readonly) unsigned int datagramChannelToken; // @synthesize datagramChannelToken=_datagramChannelToken;
- (_Bool)matchesChannelTokenWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (_Bool)matchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
@property(readonly) unsigned char linkID;
- (_Bool)isOnSameInterfacesWithConnection:(id)arg1;
- (_Bool)isSameAsConnection:(id)arg1;
@property int remoteCellTech;
@property int localCellTech;
- (void)setCellularMTU:(int)arg1;
- (void)getSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
@property(readonly) NSString *remoteInterfaceTypeString;
@property(readonly) NSString *localInterfaceTypeString;
@property(readonly) int remoteConnectionType;
@property(readonly) int localConnectionType;
@property(readonly) NSUUID *connectionUUID;
- (int)networkOverheadInBytesWithNumOfStreamId:(int)arg1 isPriorityIncluded:(_Bool)arg2;
@property int connectionMTU;
- (id)connectionQRSessionID;
@property(readonly) _Bool serverIsDegraded;
@property(readonly) _Bool isRelay;
@property(readonly) _Bool isVPN;
@property(readonly) int connectionId;
@property(readonly) _Bool isIPv6;
@property(readonly) _Bool isRemoteOnCellular;
@property(readonly) _Bool isLocalOnCellular;
@property(readonly) _Bool isRemoteOnWiFi;
@property(readonly) _Bool isLocalOnWiFi;
@property(readonly) NSData *sharedDigestKey;
@property(readonly) NSString *relaySessionToken;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithLinkContext:(id)arg1 dataChannelToken:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

