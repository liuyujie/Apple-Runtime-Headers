//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PUOneUpGestureRecognizerCoordinator, UIView;

@protocol PUOneUpGestureRecognizerCoordinatorDelegate <NSObject>

@optional
- (_Bool)oneUpGestureRecgonizerCoordinator:(PUOneUpGestureRecognizerCoordinator *)arg1 shouldAllowIrisGestureAtLocationFromProvider:(id <PUDisplayLocationProvider>)arg2;
- (UIView *)oneUpGestureRecognizerCoordinatorViewHostingTouchingGesture:(PUOneUpGestureRecognizerCoordinator *)arg1;
@end

