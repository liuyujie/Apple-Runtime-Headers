//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKMapGestureController, NSEvent;

@protocol MKMapGestureControllerDelegate <NSObject>
- (BOOL)gestureController:(MKMapGestureController *)arg1 shouldAttemptToRecognizeWithEvent:(NSEvent *)arg2;
- (struct CGPoint)gestureController:(MKMapGestureController *)arg1 focusPointForPoint:(struct CGPoint)arg2 gestureKind:(long long)arg3;
- (void)gestureControllerDidStopTiltingDecelerating:(MKMapGestureController *)arg1;
- (void)gestureControllerDidStopTilting:(MKMapGestureController *)arg1 willDecelerate:(BOOL)arg2 tiltDirection:(long long)arg3;
- (void)gestureControllerWillStartTilting:(MKMapGestureController *)arg1;
- (void)gestureControllerDidStopRotatingDecelerating:(MKMapGestureController *)arg1;
- (void)gestureControllerDidStopRotating:(MKMapGestureController *)arg1 willDecelerate:(BOOL)arg2;
- (void)gestureControllerWillStartRotating:(MKMapGestureController *)arg1;
- (void)gestureControllerDidStopZoomingDecelerating:(MKMapGestureController *)arg1 direction:(long long)arg2 type:(long long)arg3;
- (void)gestureControllerDidStopZoomingDecelerating:(MKMapGestureController *)arg1 direction:(long long)arg2;
- (void)gestureControllerDidStopZooming:(MKMapGestureController *)arg1 direction:(long long)arg2 type:(long long)arg3 willDecelerate:(BOOL)arg4;
- (void)gestureControllerDidStopZooming:(MKMapGestureController *)arg1 direction:(long long)arg2 willDecelerate:(BOOL)arg3;
- (void)gestureControllerWillStartZooming:(MKMapGestureController *)arg1 animated:(BOOL)arg2;
- (void)gestureControllerDidStopPanningDecelerating:(MKMapGestureController *)arg1;
- (void)gestureControllerDidStopPanning:(MKMapGestureController *)arg1 willDecelerate:(BOOL)arg2;
- (void)gestureControllerWillStartPanning:(MKMapGestureController *)arg1;
- (void)gestureControllerDidStopUserInteraction:(MKMapGestureController *)arg1;
- (void)gestureControllerWillStartUserInteraction:(MKMapGestureController *)arg1;
@end
