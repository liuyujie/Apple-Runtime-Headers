//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASFriend, UIViewController;

@protocol NLBulletinClientFactoryViewControllerDelegate <NSObject>
- (void)clientViewControllerDidSelectPresentQuickboard:(UIViewController *)arg1 forFriend:(ASFriend *)arg2;
- (void)clientViewControllerDidSelectDismiss:(id <NLBulletinClientCoachingViewController>)arg1 shouldAnimateActionMenu:(_Bool)arg2;
- (void)clientViewControllerDidDisappear:(id <NLBulletinClientCoachingViewController>)arg1;
- (void)clientViewControllerDidAppear:(id <NLBulletinClientCoachingViewController>)arg1;
@end

