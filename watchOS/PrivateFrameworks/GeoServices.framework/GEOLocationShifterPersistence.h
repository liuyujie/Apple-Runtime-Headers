//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOSQLiteDB, NSString;

__attribute__((visibility("hidden")))
@interface GEOLocationShifterPersistence : NSObject
{
    NSString *_dbPath;
    GEOSQLiteDB *_db;
}

+ (id)sharedPersister;
- (void).cxx_destruct;
- (void)removeAllEntries;
- (void)pruneEntriesOlderThan:(id)arg1 maximumEntriesToKeep:(int)arg2;
- (void)_findResponseForCoordinate:(CDStruct_c3b9c2ee)arg1 usingStatement:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)findExactResponseForCoordinate:(CDStruct_c3b9c2ee)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)findResponseForCoordinate:(CDStruct_c3b9c2ee)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)storeResponse:(id)arg1;
- (void)tearDown;
- (_Bool)_setup:(id)arg1;
- (id)initWithDBFilePath:(id)arg1;

@end
