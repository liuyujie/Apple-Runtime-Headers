//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BiometricKitXpcProtocol.h"

@class BiometricKitXPCServer, NSMutableDictionary, NSString, NSXPCConnection;

@interface BiometricKitXPCExportedObject : NSObject <BiometricKitXpcProtocol>
{
    NSMutableDictionary *_clients;
    BiometricKitXPCServer *_server;
    NSXPCConnection *_connection;
}

+ (void)initialize;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) BiometricKitXPCServer *server; // @synthesize server=_server;
- (void).cxx_destruct;
- (void)logEventOrCode:(unsigned long long)arg1;
- (void)queryIdentityMigrationFailureForUser:(unsigned int)arg1 clear:(BOOL)arg2 client:(unsigned long long)arg3 replyBlock:(CDUnknownBlockType)arg4;
- (void)fieldDiagnosticsControl:(unsigned int)arg1 inData:(id)arg2 client:(unsigned long long)arg3 replyBlock:(CDUnknownBlockType)arg4;
- (void)getAugmentationEligibilityForIdentity:(id)arg1 client:(unsigned long long)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)setTemplate:(id)arg1 forIdentity:(id)arg2 client:(unsigned long long)arg3 replyBlock:(CDUnknownBlockType)arg4;
- (void)suspendEnrollment:(BOOL)arg1 client:(unsigned long long)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)completeEnrollment:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)getBiometryAvailabilityForUser:(unsigned int)arg1 client:(unsigned long long)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)startNewMatchAttempt:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)getDeviceState:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)isXARTAvailable:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)isAriadneSignpostsEnabled:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)enableBackgroundFdet:(BOOL)arg1 client:(unsigned long long)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)isFingerOn:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)fileRadarWithLogs:(id)arg1 description:(id)arg2 client:(unsigned long long)arg3 replyBlock:(CDUnknownBlockType)arg4;
- (void)getLogs:(BOOL)arg1 client:(unsigned long long)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)pullDebugImageData:(BOOL)arg1 rotated:(BOOL)arg2 client:(unsigned long long)arg3 replyBlock:(CDUnknownBlockType)arg4;
- (void)pullCaptureBuffer:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)pullCalibrationData:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)setDebugImages:(BOOL)arg1 client:(unsigned long long)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)getSensorInfo:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)getCalibrationDataInfo:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)getSensorCalibrationStatus:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)getBioLockoutStateForUser:(unsigned int)arg1 client:(unsigned long long)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)getProvisioningState:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)setSystemProtectedConfiguration:(id)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(CDUnknownBlockType)arg4;
- (void)setProtectedConfiguration:(id)arg1 user:(unsigned int)arg2 options:(id)arg3 client:(unsigned long long)arg4 replyBlock:(CDUnknownBlockType)arg5;
- (void)getSystemProtectedConfiguration:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)getProtectedConfigurationForUser:(unsigned int)arg1 client:(unsigned long long)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)getNodeTopologyForIdentity:(id)arg1 client:(unsigned long long)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)pullMatchPolicyInfoData:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)pullAlignmentData:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)enrollContinue:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)forceBioLockoutForUser:(unsigned int)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(CDUnknownBlockType)arg4;
- (void)dropUnlockToken:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)getIdentitiesDatabaseHashForUser:(unsigned int)arg1 client:(unsigned long long)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)getIdentitiesDatabaseUUIDForUser:(unsigned int)arg1 client:(unsigned long long)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)resetAppleConnectCounter:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)setUserDSID:(unsigned long long)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(CDUnknownBlockType)arg4;
- (void)timestampEvent:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 client:(unsigned long long)arg3 replyBlock:(CDUnknownBlockType)arg4;
- (void)diagnostics:(int)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(CDUnknownBlockType)arg4;
- (void)getCountersignedStoreToken:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)registerStoreToken:(id)arg1 client:(unsigned long long)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)registerDSID:(unsigned long long)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(CDUnknownBlockType)arg4;
- (void)getFreeIdentityCount:(int)arg1 user:(unsigned int)arg2 client:(unsigned long long)arg3 replyBlock:(CDUnknownBlockType)arg4;
- (void)getMaxIdentityCount:(int)arg1 client:(unsigned long long)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)identities:(id)arg1 client:(unsigned long long)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)getIdentityFromUUID:(id)arg1 client:(unsigned long long)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)removeAllIdentitiesForUser:(unsigned int)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(CDUnknownBlockType)arg4;
- (void)removeIdentity:(id)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(CDUnknownBlockType)arg4;
- (void)updateIdentity:(id)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(CDUnknownBlockType)arg4;
- (void)cancel:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)detectPresenceWithOptions:(id)arg1 client:(unsigned long long)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)match:(id)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(CDUnknownBlockType)arg4;
- (void)enroll:(int)arg1 user:(unsigned int)arg2 options:(id)arg3 client:(unsigned long long)arg4 replyBlock:(CDUnknownBlockType)arg5;
- (void)notifyAppIsInactive:(BOOL)arg1 client:(unsigned long long)arg2;
- (void)notifyAppIsBackground:(BOOL)arg1 client:(unsigned long long)arg2;
- (void)registerDelegate:(BOOL)arg1 client:(unsigned long long)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)disconnect:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)connect:(id)arg1 client:(unsigned long long)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (id)clients;
- (void)terminate;
- (id)client:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)serverServiceCheck;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
