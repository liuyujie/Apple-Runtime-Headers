//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "_SBUIPopoverExtensionRemoteInterface.h"

@class UIViewController<SBUIPopoverExtension>;

@interface SBUIPopoverExtensionRemoteViewController : UIViewController <_SBUIPopoverExtensionRemoteInterface>
{
    id <_SBUIPopoverExtensionHostInterface> _hostService;
    UIViewController<SBUIPopoverExtension> *_extensionViewController;
}

+ (_Bool)_isSecureForRemoteViewService;
+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(retain, nonatomic) UIViewController<SBUIPopoverExtension> *extensionViewController; // @synthesize extensionViewController=_extensionViewController;
@property(retain, nonatomic) id <_SBUIPopoverExtensionHostInterface> hostService; // @synthesize hostService=_hostService;
- (void).cxx_destruct;
- (void)_setupChildViewController:(id)arg1;
- (id)popoverExtensionContext;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (void)_willAppearInRemoteViewController:(id)arg1;
- (void)_updateForBundleIdentifier:(id)arg1;

@end

