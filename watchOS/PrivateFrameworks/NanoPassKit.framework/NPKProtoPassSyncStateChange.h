//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NPKProtoCatalog, NPKProtoPassSyncStateItem, NSData, NSString;

@interface NPKProtoPassSyncStateChange : PBCodable <NSCopying>
{
    NPKProtoCatalog *_catalog;
    int _changeType;
    NSData *_changeUUID;
    NSData *_lastKnownReconciledPassSyncStateHash;
    NSData *_passData;
    unsigned int _passSegmentIndex;
    unsigned int _passSegmentTotal;
    NPKProtoPassSyncStateItem *_syncStateItem;
    NSString *_uniqueID;
    struct {
        unsigned int passSegmentIndex:1;
        unsigned int passSegmentTotal:1;
    } _has;
}

@property(retain, nonatomic) NPKProtoCatalog *catalog; // @synthesize catalog=_catalog;
@property(nonatomic) unsigned int passSegmentTotal; // @synthesize passSegmentTotal=_passSegmentTotal;
@property(nonatomic) unsigned int passSegmentIndex; // @synthesize passSegmentIndex=_passSegmentIndex;
@property(retain, nonatomic) NSData *passData; // @synthesize passData=_passData;
@property(retain, nonatomic) NPKProtoPassSyncStateItem *syncStateItem; // @synthesize syncStateItem=_syncStateItem;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) int changeType; // @synthesize changeType=_changeType;
@property(retain, nonatomic) NSData *lastKnownReconciledPassSyncStateHash; // @synthesize lastKnownReconciledPassSyncStateHash=_lastKnownReconciledPassSyncStateHash;
@property(retain, nonatomic) NSData *changeUUID; // @synthesize changeUUID=_changeUUID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasCatalog;
@property(nonatomic) _Bool hasPassSegmentTotal;
@property(nonatomic) _Bool hasPassSegmentIndex;
@property(readonly, nonatomic) _Bool hasPassData;
@property(readonly, nonatomic) _Bool hasSyncStateItem;
- (int)StringAsChangeType:(id)arg1;
- (id)changeTypeAsString:(int)arg1;
@property(readonly, nonatomic) _Bool hasLastKnownReconciledPassSyncStateHash;
- (id)npkDescription;

@end

