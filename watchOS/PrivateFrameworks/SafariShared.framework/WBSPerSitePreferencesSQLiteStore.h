//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSURL, WBSSQLiteDatabase;

@interface WBSPerSitePreferencesSQLiteStore : NSObject
{
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}

+ (id)sharedStore;
- (void).cxx_destruct;
- (_Bool)_tryToPerformTransactionInBlock:(CDUnknownBlockType)arg1;
- (void)_closeDatabase;
- (_Bool)_isDatabaseOpen;
- (int)_migrateToSchemaVersion_2;
- (int)_createFreshDatabaseSchema;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (_Bool)_migrateToSchemaVersion:(int)arg1;
- (int)_migrateToCurrentSchemaVersionIfNecessary;
- (void)_openDatabase;
- (void)_openDatabaseIfNecessary;
- (void)removeAllPreferenceValuesFromPreference:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getAllPreferenceInformationForPreference:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getTimestampAndValueOfPreference:(int)arg1 forDomain:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setDefaultValue:(id)arg1 forPreference:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getDefaultValueForPreference:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getAllDomainsConfiguredForPreference:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getValuesOfPreferences:(id)arg1 forDomain:(id)arg2 withTimeoutInterval:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getValueOfPreference:(int)arg1 forDomain:(id)arg2 withTimeoutInterval:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setValue:(id)arg1 ofPreference:(int)arg2 forDomain:(id)arg3 includeTimestamp:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)setValue:(id)arg1 ofPreference:(int)arg2 forDomain:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)closeDatabase;
- (void)dealloc;
- (id)initWithDatabaseURL:(id)arg1;
- (id)init;

@end
