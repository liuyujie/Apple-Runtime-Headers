//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LinkPresentation/LPComponentView.h>

#import "CAAnimationDelegate.h"

@class LPCaptionBarAccessoryView, LPCaptionBarPresentationProperties, LPCaptionBarStyle, LPComponentView<LPTextStyleable>, LPImageView, LPVerticalTextStackView, LPiTunesPlayButtonView, LPiTunesPlaybackInformation, NSString, UIView;

__attribute__((visibility("hidden")))
@interface LPCaptionBarView : LPComponentView <CAAnimationDelegate>
{
    LPCaptionBarStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
    UIView *_leftIconView;
    UIView *_rightIconView;
    LPImageView *_belowLeftIconView;
    LPImageView *_belowRightIconView;
    LPiTunesPlayButtonView *_playButton;
    LPCaptionBarAccessoryView *_leftAccessoryView;
    LPCaptionBarAccessoryView *_rightAccessoryView;
    LPComponentView<LPTextStyleable> *_aboveTopCaptionView;
    LPComponentView<LPTextStyleable> *_topCaptionView;
    LPComponentView<LPTextStyleable> *_bottomCaptionView;
    LPComponentView<LPTextStyleable> *_belowBottomCaptionView;
    LPVerticalTextStackView *_textStackView;
    LPiTunesPlaybackInformation *_iTunesPlaybackInformation;
    _Bool _hasEverBuilt;
    _Bool _useProgressSpinner;
}

@property(nonatomic) _Bool useProgressSpinner; // @synthesize useProgressSpinner=_useProgressSpinner;
- (void).cxx_destruct;
- (void)_buildViewsForCaptionBarIfNeeded;
- (struct CGSize)_layoutCaptionBarForSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutComponentView;
- (id)_createIndeterminateProgressIndicator;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animateInWithBaseAnimation:(id)arg1 currentTime:(double)arg2;
- (void)animateOut;
- (void)setPlaybackInformation:(id)arg1;
- (id)initWithStyle:(id)arg1 presentationProperties:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

