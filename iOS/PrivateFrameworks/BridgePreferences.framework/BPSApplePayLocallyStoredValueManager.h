//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BPSApplePayLocallyStoredValueManager : NSObject
{
}

+ (void)_attemptToMarkAllAppletsForDeletionWithCompletion:(CDUnknownBlockType)arg1;
+ (void)_presentApplePayLocallyStoredValueWarningInController:(id)arg1 unableToConnect:(_Bool)arg2 legacyDevice:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
+ (void)presentApplePayLocallyStoredValueOfflineWarningIfNeededInController:(id)arg1 forPairedDevice:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (id)remoteLocallyStoredValuePassNames;

@end

