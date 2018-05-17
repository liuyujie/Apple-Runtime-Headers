//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLTimeReferenceManager.h"

@class NSDictionary, NSString, PLSQLiteConnection, PLStorageOperator;

@interface PLTimeManager : NSObject <PLTimeReferenceManager>
{
    PLStorageOperator *_storageOperator;
    PLSQLiteConnection *_connection;
    NSDictionary *_timeReferences;
    NSDictionary *_notificationsToTimeReferences;
}

+ (id)sharedInstance;
@property(retain) NSDictionary *notificationsToTimeReferences; // @synthesize notificationsToTimeReferences=_notificationsToTimeReferences;
@property(retain) NSDictionary *timeReferences; // @synthesize timeReferences=_timeReferences;
@property __weak PLSQLiteConnection *connection; // @synthesize connection=_connection;
@property __weak PLStorageOperator *storageOperator; // @synthesize storageOperator=_storageOperator;
- (void).cxx_destruct;
- (void)logTimeEntry;
- (void)unregisterForTimeChangedCallbackWithIdentifier:(id)arg1 forTimeReference:(long long)arg2;
- (void)registerForTimeChangedCallbackWithIdentifier:(id)arg1 forTimeReference:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)convertTime:(id)arg1 fromTimeReference:(long long)arg2 toTimeReference:(long long)arg3;
- (id)currentTimeFromTimeReference:(long long)arg1 toTimeReference:(long long)arg2;
- (double)timeOffsetForTimeReference:(long long)arg1;
- (id)initialMonotonicTime;
- (void)initializeTimeOffsets;
- (void)getBootSessionUUID;
- (id)init;
- (id)storageQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
