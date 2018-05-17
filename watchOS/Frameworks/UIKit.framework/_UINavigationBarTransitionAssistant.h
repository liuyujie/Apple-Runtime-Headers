//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, UINavigationBar;

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionAssistant : NSObject
{
    int _animationCount;
    NSMutableArray *_animationIDs;
    _Bool _interruptable;
    _Bool _interactive;
    _Bool _cancelledTransition;
    _Bool _cancelledCleanUp;
    _Bool _shouldHideBackButtonDuringTransition;
    _Bool _shouldUpdatePromptAfterTransition;
    id <UIViewControllerTransitionCoordinator> _transitionCoordinator;
    UINavigationBar *_navigationBar;
    id <_UINavigationBarDelegatePrivate> _delegate;
    int _transition;
    float _duration;
}

+ (id)popTransitionAssistantForNavigationBar:(id)arg1 delegate:(id)arg2 crossfade:(_Bool)arg3;
+ (id)pushTransitionAssistantForNavigationBar:(id)arg1 delegate:(id)arg2 crossfade:(_Bool)arg3;
@property(readonly, nonatomic) NSArray *animationIDs; // @synthesize animationIDs=_animationIDs;
@property(nonatomic) _Bool shouldUpdatePromptAfterTransition; // @synthesize shouldUpdatePromptAfterTransition=_shouldUpdatePromptAfterTransition;
@property(nonatomic) _Bool shouldHideBackButtonDuringTransition; // @synthesize shouldHideBackButtonDuringTransition=_shouldHideBackButtonDuringTransition;
@property(readonly, nonatomic) _Bool cancelledCleanUp; // @synthesize cancelledCleanUp=_cancelledCleanUp;
@property(readonly, nonatomic) _Bool cancelledTransition; // @synthesize cancelledTransition=_cancelledTransition;
@property(readonly, nonatomic) _Bool interactive; // @synthesize interactive=_interactive;
@property(readonly, nonatomic) _Bool interruptable; // @synthesize interruptable=_interruptable;
@property(readonly, nonatomic) float duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) int transition; // @synthesize transition=_transition;
@property(readonly, nonatomic) __weak id <_UINavigationBarDelegatePrivate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(readonly, nonatomic) __weak id <UIViewControllerTransitionCoordinator> transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;
- (void).cxx_destruct;
- (void)_getInteractive;
- (void)_getPopDurationAndTransitionAlwaysCrossfade:(_Bool)arg1;
- (void)_getPushDurationAndTransitionAlwaysCrossfade:(_Bool)arg1;
- (void)_getTransitionCoordinator;
- (void)decrementAnimationCount;
- (void)incrementAnimationCount;
- (void)_finishTrackingAnimations;
- (void)_startTrackingAnimations;
- (void)finishTrackingInteractiveTransition;
- (void)cancelInteractiveTransitionPercent:(float)arg1 completionSpeed:(float)arg2 completionCurve:(int)arg3;
- (void)finishInteractiveTransitionPercent:(float)arg1 completionSpeed:(float)arg2 completionCurve:(int)arg3;
- (void)_clearAnimationsWithDuration:(double)arg1 curve:(int)arg2 reverse:(_Bool)arg3;
- (void)updateInteractiveTransitionPercent:(float)arg1;
- (void)startInteractiveTransition;
- (void)cancelCleanUp;
@property(readonly, nonatomic) _Bool shouldCrossfade;
@property(readonly, nonatomic) _Bool shouldAnimateAlongside;
- (id)initWithNavigationBar:(id)arg1 delegate:(id)arg2;

@end
