//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPresentationController.h"

@class UIVisualEffectView;

@interface TVSUIModalPresentationController : UIPresentationController
{
    UIVisualEffectView *_visualEffectView;
    long long _blurStyle;
}

@property(readonly, nonatomic) long long blurStyle; // @synthesize blurStyle=_blurStyle;
@property(readonly, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
- (void).cxx_destruct;
- (void)_animateWithCoordinator:(id)arg1 isPresenting:(_Bool)arg2;
- (void)_configureSubviews;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 blurStyle:(long long)arg3;

@end
