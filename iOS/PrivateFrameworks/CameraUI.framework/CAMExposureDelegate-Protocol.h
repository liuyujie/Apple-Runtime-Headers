//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMExposureResult, CUCaptureController;

@protocol CAMExposureDelegate <NSObject>
- (void)captureController:(CUCaptureController *)arg1 didOutputExposureResult:(CAMExposureResult *)arg2;

@optional
- (_Bool)captureControllerUserHasAdjustedExposureTargetBias:(CUCaptureController *)arg1;
@end

