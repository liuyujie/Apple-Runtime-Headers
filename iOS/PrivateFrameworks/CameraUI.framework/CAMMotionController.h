//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BKSAccelerometerDelegate.h"
#import "CAMLevelViewModelChangeObserver.h"

@class BKSAccelerometer, CAMLevelViewModel, CMMotionManager, NSString;

@interface CAMMotionController : NSObject <BKSAccelerometerDelegate, CAMLevelViewModelChangeObserver>
{
    _Bool __didNotifyCaptureOrientationWasInvalid;
    long long _dominantPhysicalButton;
    CAMLevelViewModel *_activeLevelViewModel;
    long long __cachedCaptureOrientation;
    long long __fallbackCaptureOrientation;
    BKSAccelerometer *__accelerometer;
    long long __numberOfDominantPhysicalButtonObservers;
    CMMotionManager *__physicalButtonMotionManager;
    CMMotionManager *__levelMotionManager;
}

@property(readonly, nonatomic) CMMotionManager *_levelMotionManager; // @synthesize _levelMotionManager=__levelMotionManager;
@property(readonly, nonatomic) CMMotionManager *_physicalButtonMotionManager; // @synthesize _physicalButtonMotionManager=__physicalButtonMotionManager;
@property(nonatomic, setter=_setNumberOfDominantPhysicalButtonObservers:) long long _numberOfDominantPhysicalButtonObservers; // @synthesize _numberOfDominantPhysicalButtonObservers=__numberOfDominantPhysicalButtonObservers;
@property(retain, nonatomic, setter=_setAccelerometer:) BKSAccelerometer *_accelerometer; // @synthesize _accelerometer=__accelerometer;
@property(nonatomic, setter=_setDidNotifyCaptureOrientationWasInvalid:) _Bool _didNotifyCaptureOrientationWasInvalid; // @synthesize _didNotifyCaptureOrientationWasInvalid=__didNotifyCaptureOrientationWasInvalid;
@property(readonly, nonatomic) long long _fallbackCaptureOrientation; // @synthesize _fallbackCaptureOrientation=__fallbackCaptureOrientation;
@property(nonatomic, setter=_setCachedCaptureOrientation:) long long _cachedCaptureOrientation; // @synthesize _cachedCaptureOrientation=__cachedCaptureOrientation;
@property(retain, nonatomic, setter=_setActiveLevelViewModel:) CAMLevelViewModel *activeLevelViewModel; // @synthesize activeLevelViewModel=_activeLevelViewModel;
@property(nonatomic, setter=_setDominantPhysicalButton:) long long dominantPhysicalButton; // @synthesize dominantPhysicalButton=_dominantPhysicalButton;
- (void).cxx_destruct;
- (void)debugValidateCaptureOrientation;
- (id)_debugStringForInterfaceOrientation:(long long)arg1;
- (id)_debugStringForDeviceOrientation:(long long)arg1;
- (void)observable:(id)arg1 didPublishChange:(unsigned long long)arg2 withContext:(void *)arg3;
- (void)_handleLevelMotionUpdate:(id)arg1 error:(id)arg2;
- (void)_updateLevelMotionManagerFrequency;
- (void)endUpdatingActiveLevelViewModel;
- (void)beginUpdatingLevelViewModel:(id)arg1;
- (void)endGeneratingDominantPhysicalButtonNotifications;
- (void)beginGeneratingDominantPhysicalButtonNotifications;
- (void)_updatePhysicalButtonObservation;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
@property(readonly, nonatomic) long long panoramaCaptureOrientation;
@property(readonly, nonatomic) long long captureOrientation;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
