//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDCloudSyncMasterRecord, HDCloudSyncRepository, HDCloudSyncStore, HDCloudSyncStoreRecord, HDCloudSyncZoneIdentifier, NSMutableArray, NSUUID;

@interface HDCloudSyncZone : NSObject
{
    NSMutableArray *_sequenceRecords;
    _Bool _hasFutureSchemaRecord;
    HDCloudSyncRepository *_repository;
    HDCloudSyncZoneIdentifier *_zoneIdentifier;
    int _zoneType;
    HDCloudSyncStoreRecord *_storeRecord;
    HDCloudSyncMasterRecord *_masterRecord;
    HDCloudSyncStore *_store;
    int _purpose;
}

@property(nonatomic) int purpose; // @synthesize purpose=_purpose;
@property(retain, nonatomic) HDCloudSyncStore *store; // @synthesize store=_store;
@property(nonatomic) _Bool hasFutureSchemaRecord; // @synthesize hasFutureSchemaRecord=_hasFutureSchemaRecord;
@property(readonly, nonatomic) HDCloudSyncMasterRecord *masterRecord; // @synthesize masterRecord=_masterRecord;
@property(readonly, nonatomic) HDCloudSyncStoreRecord *storeRecord; // @synthesize storeRecord=_storeRecord;
@property(readonly, nonatomic) int zoneType; // @synthesize zoneType=_zoneType;
@property(readonly, copy, nonatomic) HDCloudSyncZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
@property(readonly, nonatomic) __weak HDCloudSyncRepository *repository; // @synthesize repository=_repository;
- (void).cxx_destruct;
- (id)description;
- (_Bool)addRecord:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool hasOrphanedSequenceRecords;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, copy, nonatomic) NSUUID *storeIdentifier;
- (id)initForZoneIdentifier:(id)arg1 repository:(id)arg2 type:(int)arg3;

@end

