//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CameraUI/CAMPerformanceTestHarness.h>

@class CAMViewfinderViewController;

@interface CAMCameraRollTestHarness : CAMPerformanceTestHarness
{
    _Bool _awaitPreload;
    _Bool _testingWarmPresentation;
    _Bool _testingAnimation;
    double _settlingDelay;
    CAMViewfinderViewController *_viewfinderViewController;
}

@property(readonly, nonatomic) CAMViewfinderViewController *viewfinderViewController; // @synthesize viewfinderViewController=_viewfinderViewController;
@property(readonly, nonatomic, getter=isTestingAnimation) _Bool testingAnimation; // @synthesize testingAnimation=_testingAnimation;
@property(readonly, nonatomic) _Bool testingWarmPresentation; // @synthesize testingWarmPresentation=_testingWarmPresentation;
@property(readonly, nonatomic) double settlingDelay; // @synthesize settlingDelay=_settlingDelay;
@property(readonly, nonatomic) _Bool awaitPreload; // @synthesize awaitPreload=_awaitPreload;
- (void).cxx_destruct;
- (void)_dismissCameraRollImmediately;
- (void)_presentCameraRollAnimated;
- (void)_handlePUDisplayLinkStarted:(id)arg1;
- (void)stopTesting;
- (void)startTesting;
- (id)initWithTestName:(id)arg1 viewfinderViewController:(id)arg2 testingAnimation:(_Bool)arg3 testingWarmPresentation:(_Bool)arg4 awaitPreload:(_Bool)arg5 settlingDelay:(double)arg6;

@end

