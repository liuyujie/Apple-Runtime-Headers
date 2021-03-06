//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BKSAccelerometerDelegate.h"

@class BKSAccelerometer, NSString;

@interface SBSAccelerometer : NSObject <BKSAccelerometerDelegate>
{
    id <SBSAccelerometerDelegate> _delegate;
    BKSAccelerometer *_bksMirror;
}

@property(nonatomic) __weak id <SBSAccelerometerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (int)currentDeviceOrientation;
@property(nonatomic) _Bool orientationEventsEnabled;
@property(nonatomic) float zThreshold;
@property(nonatomic) float yThreshold;
@property(nonatomic) float xThreshold;
@property(nonatomic) double updateInterval;
@property(nonatomic) _Bool accelerometerEventsEnabled;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

