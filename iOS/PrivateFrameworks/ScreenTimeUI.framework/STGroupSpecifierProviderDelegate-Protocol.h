//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PSConfirmationSpecifier, PSSpecifier, STGroupSpecifierProvider, UIViewController;

@protocol STGroupSpecifierProviderDelegate <NSObject>
- (void)specifierProvider:(STGroupSpecifierProvider *)arg1 showPINSheet:(PSSpecifier *)arg2;
- (void)specifierProvider:(STGroupSpecifierProvider *)arg1 lazyLoadBundle:(PSSpecifier *)arg2;
- (void)specifierProviderEndUpdates:(STGroupSpecifierProvider *)arg1;
- (void)specifierProviderBeginUpdates:(STGroupSpecifierProvider *)arg1;
- (void)specifierProvider:(STGroupSpecifierProvider *)arg1 presentViewController:(UIViewController *)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)specifierProvider:(STGroupSpecifierProvider *)arg1 popToViewControllerAnimated:(_Bool)arg2;
- (void)specifierProvider:(STGroupSpecifierProvider *)arg1 showConfirmationViewForSpecifier:(PSConfirmationSpecifier *)arg2;
- (void)specifierProvider:(STGroupSpecifierProvider *)arg1 reloadSpecifier:(PSSpecifier *)arg2 animated:(_Bool)arg3;
- (void)specifierProvider:(STGroupSpecifierProvider *)arg1 dismissViewControllerAnimated:(_Bool)arg2;
- (void)specifierProvider:(STGroupSpecifierProvider *)arg1 presentViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
- (void)specifierProvider:(STGroupSpecifierProvider *)arg1 showController:(UIViewController *)arg2 animated:(_Bool)arg3;
@end
