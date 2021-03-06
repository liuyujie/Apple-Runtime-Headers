//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIKeyboardHandBiasTransitionContext, UIKeyboardHandBiasTransitionCoordinator, UIKeyboardKeyplaneTransition, UIPanGestureRecognizer, UIView;

@protocol UIKeyboardHandBiasTransitionCoordinatorDelegate <NSObject>
- (UIView *)hostViewForHandBiasTransition:(UIKeyboardHandBiasTransitionCoordinator *)arg1;
- (int)currentHandBiasWithCoordinator:(UIKeyboardHandBiasTransitionCoordinator *)arg1;
- (void)finishHandBiasTransitionWithFinalBias:(int)arg1;
- (UIKeyboardHandBiasTransitionContext *)prepareTransition:(UIKeyboardKeyplaneTransition *)arg1 forTargetHandBias:(int)arg2 coordinator:(UIKeyboardHandBiasTransitionCoordinator *)arg3;
- (_Bool)gestureRecognizerShouldBegin:(UIPanGestureRecognizer *)arg1 forHandBiasCoordinator:(UIKeyboardHandBiasTransitionCoordinator *)arg2;
@end

