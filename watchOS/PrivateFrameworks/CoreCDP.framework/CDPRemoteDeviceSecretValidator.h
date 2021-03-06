//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CDPRemoteDeviceSecretValidator : NSObject
{
    id <CDPRemoteDeviceSecretValidatorProtocol> _validator;
}

- (void).cxx_destruct;
- (void)_executeSyncOnMainThreadIfNeeded:(CDUnknownBlockType)arg1;
- (void)supportedEscapeOfferMaskCompletion:(CDUnknownBlockType)arg1;
- (unsigned int)supportedEscapeOfferMask;
- (void)cancelValidationWithError:(id)arg1;
- (void)resetAccountCDPState;
- (void)cancelApproveFromAnotherDevice;
- (void)approveFromAnotherDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)validateRecoveryKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned int)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)initWithContext:(id)arg1 validator:(id)arg2;

@end

