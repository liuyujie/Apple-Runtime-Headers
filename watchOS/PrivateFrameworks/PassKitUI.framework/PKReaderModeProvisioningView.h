//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PKReaderModeAnimationView, PKReaderModeHeaderView, UIProgressView;

@interface PKReaderModeProvisioningView : UIView
{
    PKReaderModeAnimationView *_animationView;
    PKReaderModeHeaderView *_headerView;
    UIProgressView *_progressView;
}

- (void).cxx_destruct;
- (void)setDigitalCardImage:(id)arg1;
- (void)setPlasticCardImage:(id)arg1;
- (void)setTransferringProgress:(float)arg1 duration:(double)arg2;
- (void)setState:(unsigned int)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 product:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 context:(int)arg2 product:(id)arg3;
- (id)initWithContext:(int)arg1 product:(id)arg2;

@end

