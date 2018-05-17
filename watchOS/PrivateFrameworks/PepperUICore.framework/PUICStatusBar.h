//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIStatusBar.h"

#import "PUICStatusBarAppContextViewDelegate.h"
#import "PUICStatusBarAppContextViewObserver.h"

@class NSString, PUICStatusBarAppContextView, PUICStatusBarGlobalContextView, PUICStatusBarGlobalContextViewAssertion, UIViewController;

@interface PUICStatusBar : UIStatusBar <PUICStatusBarAppContextViewObserver, PUICStatusBarAppContextViewDelegate>
{
    unsigned int _appContextViewAssertionCount;
    unsigned int _globalContextViewAssertionCount;
    float _labelOffset;
    id <PUICStatusBarAppContextViewDataSource> _explicitDataSource;
    _Bool _needsAppContextUpdate;
    _Bool _animatedAppContextUpdate;
    PUICStatusBarGlobalContextView *_globalContextView;
    PUICStatusBarGlobalContextViewAssertion *_globalContextAssertion;
    _Bool _initialTimeHidden;
    _Bool _initialIndicatorsHidden;
    _Bool _shouldAnimateOnTitleContextChanges;
    _Bool _hidden;
    UIViewController *_keyViewController;
    PUICStatusBarAppContextView *_appContextView;
}

+ (float)heightForStyle:(int)arg1 orientation:(int)arg2;
+ (struct CGRect)_frameInSceneReferenceSpaceForStyle:(int)arg1 orientation:(int)arg2 inSceneWithReferenceSize:(struct CGSize)arg3;
+ (struct CGRect)_frameForStyle:(int)arg1 orientation:(int)arg2 inWindowOfSize:(struct CGSize)arg3;
+ (void)_newAppContextCreated:(id)arg1;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) _Bool shouldAnimateOnTitleContextChanges; // @synthesize shouldAnimateOnTitleContextChanges=_shouldAnimateOnTitleContextChanges;
@property(retain, nonatomic) PUICStatusBarAppContextView *appContextView; // @synthesize appContextView=_appContextView;
@property(nonatomic) __weak UIViewController *keyViewController; // @synthesize keyViewController=_keyViewController;
- (void).cxx_destruct;
- (void)_handleCubicTitleViewUpdate:(id)arg1;
- (void)_handleResignKeyWindow:(id)arg1;
- (void)_handleBecomeKeyWindow:(id)arg1;
- (void)_updateShouldRasterize;
- (void)_evaluateServerRegistration;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (struct CGAffineTransform)_hiddenTransformForHideAnimationParameters:(id)arg1;
- (void)_statusBarDidAnimateRotation;
- (void)_statusBarWillAnimateRotation;
- (void)forceUpdateDoubleHeightStatus;
- (_Bool)isDoubleHeight;
- (_Bool)_isTransparent;
- (_Bool)isTranslucent;
- (float)_standardHeight;
- (int)currentStyle;
- (float)currentHeight;
- (void)setTintColor:(id)arg1 withDuration:(double)arg2;
- (float)heightForOrientation:(int)arg1;
- (void)_setOverrideHeight:(float)arg1;
- (void)setOrientation:(int)arg1;
- (void)setStyleDelegate:(id)arg1;
- (void)setHidden:(_Bool)arg1 animationParameters:(id)arg2;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isHidden;
- (void)requestStyle:(int)arg1 animated:(_Bool)arg2;
- (void)requestStyle:(int)arg1 animationParameters:(id)arg2;
- (id)globalContextProperties;
- (void)releaseGlobalContextViewAssertion:(id)arg1;
- (id)takeGlobalContextAssertionAnimated:(_Bool)arg1 duration:(double)arg2;
- (id)takeGlobalContextAssertionAnimated:(_Bool)arg1;
- (id)takeGlobalContextAssertion;
- (void)setIndicatorsHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)areIndicatorsHidden;
- (void)setTimeHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isTimeHidden;
@property(nonatomic, getter=isDisconnectedIndicatorSuppressed) _Bool suppressDisconnectedIndicator;
@property(nonatomic, getter=isAirplaneModeIndicatorSuppressed) _Bool suppressAirplaneModeIndicator;
- (void)setNeedsPhoneConnectivity:(_Bool)arg1;
- (_Bool)needsPhoneConnectivity;
@property(nonatomic) unsigned int timeStyle;
@property(nonatomic) unsigned int layoutBehavior;
- (_Bool)rightSideImageTappedForStatusBarAppContext:(id)arg1 imageIndex:(unsigned int)arg2;
- (_Bool)mayAnimateTitleChangesForStatusBarAppContext:(id)arg1;
- (_Bool)titlePressedForStatusBarAppContext:(id)arg1;
- (_Bool)navPressedForStatusBarAppContext:(id)arg1;
- (void)titleTruncationAnimationDidCompleteForAppContextView:(id)arg1 durationOfFade:(double)arg2;
- (void)titleTruncationAnimationWillBeginForAppContextView:(id)arg1 durationOfFade:(double)arg2;
- (void)releaseAppContextViewAssertion:(id)arg1;
- (id)takeAppContextAssertionAnimated:(_Bool)arg1 duration:(double)arg2;
- (id)takeAppContextAssertionAnimated:(_Bool)arg1;
- (id)takeAppContextAssertion;
- (void)releaseDisableTitleTruncationTimerAssertion;
- (void)takeDisableTitleTruncationTimerAssertion;
- (void)releaseDisableAppContextAnimationsAssertion;
- (void)takeDisableAppContextAnimationsAssertion;
- (id)currentApplicationContextDelegate;
- (void)setApplicationContextDelegate:(id)arg1;
- (id)currentApplicationContextDataSource;
- (void)setApplicationContextDataSource:(id)arg1 animated:(_Bool)arg2;
- (_Bool)isAppContextTitleTruncationAnimationRunning;
- (void)updateApplicationContextAnimated:(_Bool)arg1;
- (id)keyViewController:(_Bool)arg1;
- (void)setKeyViewController:(id)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isTitleViewChargeEnabled) _Bool titleViewChargeEnabled;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (_Bool)_shouldReverseLayoutDirection;
- (_Bool)_actualCreateSubviews;
- (_Bool)_createSubviewsIfNeeded;
- (_Bool)_forceCreateSubviewsIfNeeded;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
