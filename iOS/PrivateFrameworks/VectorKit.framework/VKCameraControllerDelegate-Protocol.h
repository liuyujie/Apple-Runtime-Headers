//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VKAnimation, VKCameraController;

@protocol VKCameraControllerDelegate <NSObject>
- (void)cameraControllerDidReturnToDefaultZoom:(VKCameraController *)arg1;
- (void)cameraControllerDidLeaveDefaultZoom:(VKCameraController *)arg1;
- (void)cameraControllerHasStoppedPanning:(VKCameraController *)arg1;
- (void)cameraControllerHasStartedPanning:(VKCameraController *)arg1;
- (void)cameraControllerDidFinishInitialTrackingAnimation:(VKCameraController *)arg1;
- (void)cameraController:(VKCameraController *)arg1 canZoomOutDidChange:(_Bool)arg2;
- (void)cameraController:(VKCameraController *)arg1 canZoomInDidChange:(_Bool)arg2;
- (id <VKTrackableAnnotationPresentation>)cameraController:(VKCameraController *)arg1 presentationForAnnotation:(id <VKTrackableAnnotation>)arg2;
- (void)cameraController:(VKCameraController *)arg1 flyoverModeWillChange:(int)arg2;
- (void)cameraController:(VKCameraController *)arg1 flyoverModeDidChange:(int)arg2;
- (void)cameraController:(VKCameraController *)arg1 canEnter3DModeDidChange:(_Bool)arg2;
- (void)cameraController:(VKCameraController *)arg1 didBecomePitched:(_Bool)arg2;
- (void)cameraController:(VKCameraController *)arg1 didChangeRegionAnimated:(_Bool)arg2;
- (void)cameraController:(VKCameraController *)arg1 willChangeRegionAnimated:(_Bool)arg2;
- (void)cameraControllerDidChangeCameraState:(VKCameraController *)arg1;
- (void)cameraController:(VKCameraController *)arg1 requestsDisplayRate:(long long)arg2;
- (void)cameraControllerRequestsUpdateDisplayLinkStatus:(VKCameraController *)arg1;
- (void)cameraControllerRequestsLayout:(VKCameraController *)arg1;
- (void)runAnimation:(VKAnimation *)arg1;
@end
