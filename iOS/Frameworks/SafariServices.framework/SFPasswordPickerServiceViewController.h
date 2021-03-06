//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariServices/SFPasswordServiceViewController.h>

#import "SFCredentialProviderExtensionManagerObserver.h"
#import "SFPasswordPickerServiceViewControllerProtocol.h"
#import "_ASCredentialProviderExtensionViewControllerDelegate.h"
#import "_ASPasswordCredentialAuthenticationViewControllerDelegate.h"
#import "_SFAuthenticationClient.h"
#import "_SFAuthenticationContextDelegate.h"

@class NSArray, NSString, NSURL, _ASPasswordCredentialAuthenticationViewController, _SFAuthenticationContext, _SFPasswordPickerViewController;

__attribute__((visibility("hidden")))
@interface SFPasswordPickerServiceViewController : SFPasswordServiceViewController <SFCredentialProviderExtensionManagerObserver, _ASCredentialProviderExtensionViewControllerDelegate, _ASPasswordCredentialAuthenticationViewControllerDelegate, _SFAuthenticationClient, _SFAuthenticationContextDelegate, SFPasswordPickerServiceViewControllerProtocol>
{
    _ASPasswordCredentialAuthenticationViewController *_externalCredentialViewController;
    CDUnknownBlockType _credentialProviderDismissalHandler;
    _SFPasswordPickerViewController *_passwordPickerViewController;
    _Bool _presentInPopover;
    _Bool _hasAuthenticationForOtherPasswords;
    NSURL *_webViewURL;
    _SFAuthenticationContext *_context;
    NSString *_remoteAppID;
    NSString *_remoteLocalizedAppName;
    NSString *_remoteUnlocalizedAppName;
    NSArray *_externallyVerifiedAssociatedDomains;
    double _authenticationGracePeriod;
    _Bool _credentialListPresentedDirectly;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
- (void).cxx_destruct;
- (void)passwordCredentialAuthenticationViewController:(id)arg1 didFinishWithCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg1;
- (void)credentialProviderExtensionViewController:(id)arg1 didFinishWithCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1;
- (void)setAuthenticationGracePeriod:(double)arg1;
- (void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)arg1;
- (void)setRemoteUnlocalizedAppName:(id)arg1;
- (void)setRemoteLocalizedAppName:(id)arg1;
- (void)setRemoteAppID:(id)arg1;
- (void)setWebViewURL:(id)arg1;
- (void)_sendCredentialToClientAndDismiss:(id)arg1;
- (void)_gatherAndShowPasswordsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_shouldDismissOnCompletion;
- (void)_fillCredential:(id)arg1 needsAuthentication:(_Bool)arg2;
- (void)authenticateToPresentInPopover:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentCredentialListForExtension:(id)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_actionForPresentingPasswordManagerExtension:(id)arg1;
- (void)dealloc;
- (void)_authenticateToViewOtherPasswordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismiss;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)_context;
- (_Bool)contextShouldAllowMultipleBiometricFailures:(id)arg1;
- (_Bool)contextShouldAllowPasscodeFallback:(id)arg1;
- (_Bool)contextRequiresSessionBasedAuthentication:(id)arg1;
- (_Bool)authenticationEnabledForContext:(id)arg1;
- (_Bool)displayMessageAsTitleForContext:(id)arg1;
- (id)passcodePromptForContext:(id)arg1;
- (id)authenticationMessageForContext:(id)arg1;
- (id)authenticationCustomUIProgressObserverForContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

