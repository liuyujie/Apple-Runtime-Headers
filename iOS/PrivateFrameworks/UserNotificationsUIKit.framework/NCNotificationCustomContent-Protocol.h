//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NCNotificationAction, NCNotificationRequest, NSDictionary, NSString;

@protocol NCNotificationCustomContent <NSObject>
@property(nonatomic) __weak id <NCNotificationCustomContentDelegate> delegate;
@property(readonly, copy, nonatomic) NSString *title;
- (unsigned long long)customContentLocation;
- (_Bool)allowManualDismiss;
- (_Bool)defaultContentHidden;
- (_Bool)performAction:(NCNotificationAction *)arg1 forNotification:(NCNotificationRequest *)arg2 withUserInfo:(NSDictionary *)arg3;
- (_Bool)performAction:(NCNotificationAction *)arg1 forNotification:(NCNotificationRequest *)arg2;
- (_Bool)didReceiveNotificationRequest:(NCNotificationRequest *)arg1;

@optional
@property(nonatomic) __weak NCNotificationAction *presentationSourceAction;
@property(readonly, nonatomic) NSString *contentExtensionIdentifier;
- (_Bool)restoreInputViews;
- (void)preserveInputViews;
- (void)playAudioMessage;
- (void)loadAudioAccessoryView;
- (void)loadExtension;
@end
