//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPreviewInteractionControllerDelegate.h"

@class UIPreviewInteractionController, UIView, UIViewController;

@protocol UIPreviewInteractionControllerDelegate_Private <UIPreviewInteractionControllerDelegate>

@optional
- (id <UIForceTransitioningDelegate>)previewInteractionController:(UIPreviewInteractionController *)arg1 transitioningDelegateForPreviewingAtPosition:(struct CGPoint)arg2 inView:(UIView *)arg3;
- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 performCustomCommitForPreviewViewController:(UIViewController *)arg2 completion:(void (^)(void))arg3;
- (_Bool)performsCustomCommitTransitionForPreviewInteractionController:(UIPreviewInteractionController *)arg1;
@end
