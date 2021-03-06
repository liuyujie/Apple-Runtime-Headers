//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AuthKitUI/AKAppleIDAuthenticationInAppContext.h>

@class AKAppleIDAuthenticationiCloudPrefPaneSecondFactorViewController, AKAppleIDAuthenticationiCloudPrefPaneViewController;

@interface AKAppleIDAuthenticationiCloudPrefPaneContext : AKAppleIDAuthenticationInAppContext
{
    AKAppleIDAuthenticationiCloudPrefPaneViewController *_prefPaneSignInViewController;
    AKAppleIDAuthenticationiCloudPrefPaneSecondFactorViewController *_prefPaneSignInViewSecondFactorController;
}

@property(retain) AKAppleIDAuthenticationiCloudPrefPaneSecondFactorViewController *prefPaneSignInViewSecondFactorController; // @synthesize prefPaneSignInViewSecondFactorController=_prefPaneSignInViewSecondFactorController;
@property(retain) AKAppleIDAuthenticationiCloudPrefPaneViewController *prefPaneSignInViewController; // @synthesize prefPaneSignInViewController=_prefPaneSignInViewController;
- (void).cxx_destruct;
- (id)hostWindow;
- (void)switchToView:(id)arg1;
- (void)dismissServerProvidedUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentServerUIErrorAlertWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setupEscapeOffersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setupLoginActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissKeepUsingUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentKeepUsingUIForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_shouldSkipInitialReachabilityCheck;
- (id)init;

@end

