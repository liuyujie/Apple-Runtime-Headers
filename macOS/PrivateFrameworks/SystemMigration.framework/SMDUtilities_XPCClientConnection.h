//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMDXPCClientConnection.h>

#import "SMDUtilitiesProtocol.h"

@interface SMDUtilities_XPCClientConnection : SMDXPCClientConnection <SMDUtilitiesProtocol>
{
    unsigned int _uid;
}

+ (id)daemonProtocolInterface;
+ (id)daemonProtocolInterfaceInstance;
@property unsigned int uid; // @synthesize uid=_uid;
- (void)sendUserSizeProgressUpdate:(unsigned long long)arg1;
- (void)obtainTotalSizeOfOtherUsersOnSystemWithCompletionBlock:(CDUnknownBlockType)arg1 recalculationPermitted:(BOOL)arg2 includeUsers:(id)arg3;
- (void)sendDeletionProgressUpdateFile:(unsigned long long)arg1 andBytes:(unsigned long long)arg2;
- (void)removePreviousSystemFolderWithReply:(CDUnknownBlockType)arg1 fromDirectory:(id)arg2;
- (void)removePreviousSystemFolderWithAuthorization:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)unmarkODRecordAfterMigrationWithReply:(CDUnknownBlockType)arg1;
- (id)initForUID:(unsigned int)arg1;

@end
