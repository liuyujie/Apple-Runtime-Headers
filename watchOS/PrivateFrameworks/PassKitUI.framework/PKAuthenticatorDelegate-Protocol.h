//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKAuthenticator;

@protocol PKAuthenticatorDelegate <NSObject>

@optional
- (void)dismissPassphraseViewController;
- (void)presentPassphraseViewController:(struct UIViewController *)arg1 completionHandler:(void (^)(_Bool))arg2 reply:(void (^)(NSData *))arg3;
- (struct UIViewController *)passphraseViewController;
- (void)dismissPasscodeViewController;
- (void)presentPasscodeViewController:(struct UIViewController *)arg1 completionHandler:(void (^)(_Bool))arg2 reply:(void (^)(NSData *))arg3;
- (struct UIViewController *)passcodeViewController;
- (void)authenticatorDidEncounterBiometricLockout:(PKAuthenticator *)arg1;
- (void)authenticatorDidEncounterMatchMiss:(PKAuthenticator *)arg1;
- (void)authenticator:(PKAuthenticator *)arg1 didRequestUserAction:(int)arg2;
- (void)authenticatorDidEncounterFingerOff:(PKAuthenticator *)arg1;
- (void)authenticatorDidEncounterFingerOn:(PKAuthenticator *)arg1;
- (void)authenticatorWillRestartEvaluation:(PKAuthenticator *)arg1;
@end

