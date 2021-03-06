//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UITableViewController.h>

@class UINavigationController, UIPrintingMessageView, UIPrintingProgress, UIWindow;

__attribute__((visibility("hidden")))
@interface UIPrintingProgressViewController : UITableViewController
{
    UIPrintingProgress *_printingProgress;
    UIPrintingMessageView *_messageView;
    UINavigationController *_navController;
    UIWindow *_window;
    double _rotationDelay;
}

- (void).cxx_destruct;
- (double)rotationDelay;
- (_Bool)visible;
- (void)dismissAnimated:(_Bool)arg1;
- (void)cleanupAfterDismiss;
- (void)show;
- (void)setDonePrinting:(_Bool)arg1;
- (void)setMessage:(id)arg1;
- (void)cancelProgress;
- (void)doneProgress;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 printingProgress:(id)arg3;

@end

