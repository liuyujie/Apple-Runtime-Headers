//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface NBManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_externalQueue;
    NSXPCConnection *_xpcConnection;
}

+ (void)initialize;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *externalQueue; // @synthesize externalQueue=_externalQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void).cxx_destruct;
- (id)deleteBackup:(id)arg1;
- (void)deleteBackup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createBackupForPairingID:(id)arg1 synchronousCompletionHandler:(CDUnknownBlockType)arg2;
- (void)createBackupForPairingID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createBackupForDevice:(id)arg1 synchronousCompletionHandler:(CDUnknownBlockType)arg2;
- (void)createBackupForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)restoreFromDevice:(id)arg1 forDevice:(id)arg2;
- (void)restoreFromDevice:(id)arg1 forDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)restoreFromBackup:(id)arg1 forDevice:(id)arg2;
- (void)restoreFromBackup:(id)arg1 forDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)listBackupsWithSynchronousCompletionHandler:(CDUnknownBlockType)arg1;
- (void)listBackupsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)connection;
- (void)dealloc;
- (void)unsafe_invalidate;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end

