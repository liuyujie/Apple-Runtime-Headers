//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, SKStoreRemoteViewController;

@protocol SKStoreRemoteViewControllerDelegate <NSObject>
- (void)storeRemoteViewController:(SKStoreRemoteViewController *)arg1 presentRequestedViewControllerWithIdentifier:(NSString *)arg2;
- (void)storeRemoteViewControllerNeedsTabSelection:(SKStoreRemoteViewController *)arg1;

@optional
- (void)storeRemoteViewControllerTerminatedWithError:(NSError *)arg1;
@end

