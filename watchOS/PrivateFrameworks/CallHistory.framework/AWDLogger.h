//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CallHistory/CHLogger.h>

@class AWDServerConnection;

@interface AWDLogger : CHLogger
{
    AWDServerConnection *_awdServer;
}

+ (id)instance;
@property(retain, nonatomic) AWDServerConnection *awdServer; // @synthesize awdServer=_awdServer;
- (void).cxx_destruct;
- (void)gizmoDatabaseMigrationFailure;
- (void)bootstrapGizmo:(unsigned int)arg1;
- (void)uninitializedDatabaseSave;
- (void)syncFailure:(unsigned int)arg1;
- (void)syncSuccess:(unsigned int)arg1 withDownloadRecordCount:(unsigned int)arg2;
- (void)entitlementRejection:(int)arg1;
- (void)callAddedWithNilUuid:(unsigned int)arg1 withCallStatus:(unsigned int)arg2;
- (void)deleteAll:(unsigned int)arg1;
- (void)databaseSaveError:(int)arg1 withTableName:(id)arg2;
- (void)databaseMigrationResult:(_Bool)arg1 oldVersion:(int)arg2 newVersion:(int)arg3;
- (void)commCenterMigrationResult:(_Bool)arg1 withMigratedCallCount:(unsigned int)arg2;
- (void)submitMetric:(id)arg1 withId:(unsigned int)arg2;
- (id)init;

@end

