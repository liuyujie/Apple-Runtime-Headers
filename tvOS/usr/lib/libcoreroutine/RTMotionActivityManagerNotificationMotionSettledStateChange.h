//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <coreroutine/RTNotification.h>

@interface RTMotionActivityManagerNotificationMotionSettledStateChange : RTNotification
{
    unsigned long long _settledState;
}

@property(readonly, nonatomic) unsigned long long settledState; // @synthesize settledState=_settledState;
- (id)description;
- (id)initWithSettledState:(unsigned long long)arg1;
- (id)init;

@end

