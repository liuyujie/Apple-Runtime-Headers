//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSLSSuspendSystemGestureAssertion, NSTimer;

@interface PUICSystemGestureScrollCoordinator : NSObject
{
    CSLSSuspendSystemGestureAssertion *_suspendSystemGestureAssertion;
    NSTimer *_suspendSystemGestureReleaseTimer;
    _Bool _enabled;
    id <PUICSystemGestureScrollCoordinatorDelegate> _delegate;
}

@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <PUICSystemGestureScrollCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didEndDraggingWithAcceleration:(_Bool)arg1;
- (void)didEndDecelerating;
- (void)animationEnded;
- (void)offsetChangedViaUserInteraction:(_Bool)arg1 isRubberbanding:(_Bool)arg2;
- (void)_handleSystemGestureReleaseTimer:(id)arg1;
- (void)_startSuspendSystemGestureAssertionReleaseTimer;
- (void)_releaseSuspendSystemGestureAssertionIfPossible;
- (void)_releaseSuspendSystemGestureAssertion;
- (void)_takeSuspendSystemGestureAssertionIfPossible;
- (void)_takeSuspendSystemGestureAssertion;
- (void)_appWillResignActive:(id)arg1;
- (void)dealloc;
- (id)init;

@end

