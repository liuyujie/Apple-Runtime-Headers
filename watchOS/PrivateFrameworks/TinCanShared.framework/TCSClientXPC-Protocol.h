//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TCSCall;

@protocol TCSClientXPC <NSObject>
- (void)remoteUplinkMuteChanged:(TCSCall *)arg1;
- (void)callStatusChanged:(TCSCall *)arg1;
- (void)callConnected:(TCSCall *)arg1;
- (void)applicationWillEnterForeground;
@end

