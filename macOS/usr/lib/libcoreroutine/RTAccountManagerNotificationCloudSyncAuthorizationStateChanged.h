//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <coreroutine/RTNotification.h>

@interface RTAccountManagerNotificationCloudSyncAuthorizationStateChanged : RTNotification
{
    long long _cloudSyncAuthorizationState;
}

@property(readonly, nonatomic) long long cloudSyncAuthorizationState; // @synthesize cloudSyncAuthorizationState=_cloudSyncAuthorizationState;
- (id)initWithCloudSyncAuthorizationState:(long long)arg1;

@end

