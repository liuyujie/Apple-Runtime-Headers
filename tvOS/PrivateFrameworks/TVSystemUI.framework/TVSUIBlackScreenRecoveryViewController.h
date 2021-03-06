//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertController.h"

@class NSObject<OS_dispatch_source>, PBSDisplayMode, _TVSUIBlackScreenRecoveryImageViewController;

@interface TVSUIBlackScreenRecoveryViewController : UIAlertController
{
    _Bool _iterateAvailableModes;
    PBSDisplayMode *_displayMode;
    CDUnknownBlockType _dismissBlock;
    double _timeout;
    _TVSUIBlackScreenRecoveryImageViewController *_bsrImageViewController;
    long long _remainingSeconds;
    NSObject<OS_dispatch_source> *_timer;
    CDUnknownBlockType _iteratorDismissBlock;
}

+ (id)recoveryControllerWithDisplayMode:(id)arg1 timeoutDuration:(double)arg2;
+ (id)_recoveryControllerWithDisplayMode:(id)arg1 timeoutDuration:(double)arg2 iterateAvailableModes:(_Bool)arg3 iteratorDismissBlock:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType iteratorDismissBlock; // @synthesize iteratorDismissBlock=_iteratorDismissBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(nonatomic) long long remainingSeconds; // @synthesize remainingSeconds=_remainingSeconds;
@property(nonatomic) _Bool iterateAvailableModes; // @synthesize iterateAvailableModes=_iterateAvailableModes;
@property(retain, nonatomic) _TVSUIBlackScreenRecoveryImageViewController *bsrImageViewController; // @synthesize bsrImageViewController=_bsrImageViewController;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(retain, nonatomic) PBSDisplayMode *displayMode; // @synthesize displayMode=_displayMode;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_resetTimer;
- (void)_destroyTimer;
- (void)_updateTime;
- (void)_dismissForReason:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;

@end

