//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class AECameraTilePresentationContentView;

@interface AECameraTilePresentationViewController : UIViewController
{
    UIViewController *_contentViewController;
    AECameraTilePresentationContentView *__contentView;
}

@property(readonly, nonatomic) AECameraTilePresentationContentView *_contentView; // @synthesize _contentView=__contentView;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (void)_adoptContentFromViewController:(id)arg1;
- (void)_abandonContentFromViewController:(id)arg1;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (long long)preferredStatusBarUpdateAnimation;
- (void)loadView;

@end
