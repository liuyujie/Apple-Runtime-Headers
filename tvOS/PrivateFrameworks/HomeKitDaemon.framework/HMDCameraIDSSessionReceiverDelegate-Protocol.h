//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDCameraIDSSessionReceiver, NSError;

@protocol HMDCameraIDSSessionReceiverDelegate <NSObject>
- (void)sessionReceiver:(HMDCameraIDSSessionReceiver *)arg1 didEndSession:(NSError *)arg2;
- (void)sessionReceiver:(HMDCameraIDSSessionReceiver *)arg1 didSetup:(NSError *)arg2;
@end
