//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKPeerPaymentAccountResolutionController, UIViewController;

@protocol PKPeerPaymentAccountResolutionControllerDelegate <NSObject>
- (void)peerPaymentAccountResolutionController:(PKPeerPaymentAccountResolutionController *)arg1 requestsDismissCurrentViewControllerAnimated:(_Bool)arg2;
- (void)peerPaymentAccountResolutionController:(PKPeerPaymentAccountResolutionController *)arg1 requestsPresentViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
@end
