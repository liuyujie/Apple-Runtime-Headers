//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoRegistry/NRRegistryProxy.h>

#import "NRPairedDeviceRegistryXPCDaemonDelegate.h"

@interface NRPairingProxy : NRRegistryProxy <NRPairedDeviceRegistryXPCDaemonDelegate>
{
}

+ (id)clientRemoteObjectInterface;
+ (id)clientExportedInterface;
+ (id)serverRemoteObjectInterface;
+ (id)serverExportedInterface;
+ (id)machServiceName;
- (void)xpcFakePairedSyncIsCompleteWithCompletion:(CDUnknownBlockType)arg1;
- (void)xpcClearRecoveryFlagWithCompletion:(CDUnknownBlockType)arg1;
- (void)xpcCheckIfFlaggedForRecoveryWithCompletion:(CDUnknownBlockType)arg1;
- (void)xpcSubmitServerRequestReportWithRequestType:(id)arg1 duration:(double)arg2 errorCode:(unsigned long)arg3 block:(CDUnknownBlockType)arg4;
- (void)xpcWaitForWatchPairingExtendedMetadataForAdvertisedName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)xpcStopWatchSetupPushWithBlock:(CDUnknownBlockType)arg1;
- (void)xpcStartWatchSetupPushWithBlock:(CDUnknownBlockType)arg1;
- (void)xpcScanForMigratableWatchesWithBlock:(CDUnknownBlockType)arg1;
- (void)xpcPingActiveGizmoWithPriority:(int)arg1 withMessageSize:(unsigned int)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)xpcKeepPhoneUnlockedInternalTestSPI:(CDUnknownBlockType)arg1;
- (void)xpcGetLastMigrationRequestPhoneNameWithCompletion:(CDUnknownBlockType)arg1;
- (void)xpcBeginMigrationWithDeviceID:(id)arg1 passcode:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)xpcGetMigrationPairingCharacteristicReadDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)xpcPutMigrationChallengeCharacteristicWriteData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)xpcSwitchToSimulator:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)xpcUnpairWithSimulator:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)xpcPairWithSimulator:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)xpcActiveDeviceAssertions:(CDUnknownBlockType)arg1;
- (void)xpcRetriggerUnpairInfoDialogWithBlock:(CDUnknownBlockType)arg1;
- (void)xpcResumePairingClientCrashMonitoring:(CDUnknownBlockType)arg1;
- (void)xpcSuspendPairingClientCrashMonitoring:(CDUnknownBlockType)arg1;
- (void)xpcPairingClientDidEnterPhase:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)xpcSubmitAlbertPairingReport:(CDUnknownBlockType)arg1;
- (void)xpcTriggerVersion4Workaround;
- (void)xpcEndDiscoveryWithBlock:(CDUnknownBlockType)arg1;
- (void)xpcBeginDiscoveryWithBlock:(CDUnknownBlockType)arg1;
- (void)xpcInvalidateSwitchAssertionWithIdentifier:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)xpcSwitchActiveDeviceWithDeviceID:(id)arg1 withAssertionHandler:(CDUnknownBlockType)arg2;
- (void)xpcSwitchActiveDeviceWithDeviceID:(id)arg1 isMagicSwitch:(_Bool)arg2 operationHasCompleted:(CDUnknownBlockType)arg3;
- (void)xpcEnterCompatibilityState:(unsigned short)arg1 withDeviceID:(id)arg2;
- (void)xpcPairingShouldContinue;
- (void)xpcNotifyPasscode:(id)arg1 withDeviceID:(id)arg2;
- (void)xpcNotifyActivationCompleted:(id)arg1 withSuccess:(_Bool)arg2;
- (void)xpcUnpairWithDeviceID:(id)arg1 withOptions:(id)arg2 operationHasBegun:(CDUnknownBlockType)arg3;
- (void)xpcAbortPairingReason:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)xpcBeginMigrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)xpcBeginMigrationWithDeviceID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)xpcGizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (void)xpcGizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (void)xpcCompanionPasscodePairWithDeviceID:(id)arg1 withOptions:(id)arg2 operationHasBegun:(CDUnknownBlockType)arg3;
- (void)xpcCompanionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 withOptions:(id)arg3 operationHasBegun:(CDUnknownBlockType)arg4;
- (id)pairingQueue;
- (id)pairingDelegate;
- (id)pairingServicesDelegate;

@end
