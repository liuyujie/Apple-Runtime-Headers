//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VSDevice : NSObject
{
    CDUnknownFunctionPointerType _copyAnswer;
}

+ (unsigned long long)_deviceTypeWithCopyAnswer:(CDUnknownFunctionPointerType)arg1;
+ (BOOL)_getMobileGestaltBoolean:(struct __CFString *)arg1 withCopyAnswer:(CDUnknownFunctionPointerType)arg2;
+ (BOOL)_runningACustomerBuildWithCopyAnswer:(CDUnknownFunctionPointerType)arg1;
+ (BOOL)_runningAnInternalBuildWithCopyAnswer:(CDUnknownFunctionPointerType)arg1;
+ (id)currentDevice;
@property(nonatomic) CDUnknownFunctionPointerType copyAnswer; // @synthesize copyAnswer=_copyAnswer;
@property(readonly, nonatomic) unsigned long long deviceType;
@property(readonly, nonatomic, getter=isRunningACustomerBuild) BOOL runningACustomerBuild;
@property(readonly, nonatomic, getter=isRunningAnInternalBuild) BOOL runningAnInternalBuild;
- (id)accountDeletionConfirmationMessageForIdentityProviderDisplayName:(id)arg1;
- (id)developerIdentityProviderDeletionConfirmationMessage;
- (id)init;

@end
