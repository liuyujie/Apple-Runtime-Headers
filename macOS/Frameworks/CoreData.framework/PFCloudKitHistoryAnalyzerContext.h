//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKRecordZoneID, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface PFCloudKitHistoryAnalyzerContext : NSObject
{
    CKRecordZoneID *_zoneID;
    NSMutableDictionary *_objectIDToState;
    NSMutableSet *_processedTransactionIDs;
    NSArray *_sortedStates;
    NSDictionary *_entityNameToObjectIDs;
    NSMutableSet *_allDeletedRecordIDs;
    NSMutableDictionary *_objectIDToDeletedRecordID;
    BOOL _isFinished;
    NSSet *_deletedRecordIDs;
}

@property(readonly, nonatomic) NSSet *deletedRecordIDs; // @synthesize deletedRecordIDs=_deletedRecordIDs;
@property(readonly, nonatomic) NSDictionary *objectIDToDeletedRecordID; // @synthesize objectIDToDeletedRecordID=_objectIDToDeletedRecordID;
@property(readonly, nonatomic) NSDictionary *entityNameToObjectIDs; // @synthesize entityNameToObjectIDs=_entityNameToObjectIDs;
@property(readonly, nonatomic) NSArray *sortedStates; // @synthesize sortedStates=_sortedStates;
@property(readonly, nonatomic) NSSet *allDeletedRecordIDs; // @synthesize allDeletedRecordIDs=_allDeletedRecordIDs;
@property(readonly, nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property(readonly, nonatomic) NSSet *processedTransactionIDs; // @synthesize processedTransactionIDs=_processedTransactionIDs;
@property(readonly, nonatomic) NSDictionary *objectIDToState; // @synthesize objectIDToState=_objectIDToState;
@property(readonly, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (void)finishProcessing;
- (void)processChange:(id)arg1;
- (void)processTransaction:(id)arg1 fromImporter:(BOOL)arg2;
- (void)reset;
- (void)dealloc;
- (id)initWithZone:(id)arg1;

@end
