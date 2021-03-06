//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSNumber, NSString, UIColor, UIImageView, UILabel;

@interface FIUICompetitionLearnMoreExampleView : UIView
{
    UIImageView *_moveRingView;
    UIImageView *_exerciseRingView;
    UIImageView *_standRingView;
    UILabel *_movePercentLabel;
    UILabel *_exercisePercentLabel;
    UILabel *_standPercentLabel;
    UIView *_separatorView;
    UILabel *_totalPointsLabel;
    NSNumber *_previousLayoutWidth;
    UIColor *_separatorViewColor;
    UIColor *_totalPointsLabelColor;
    NSString *_totalPointsLabelText;
}

@property(retain, nonatomic) NSString *totalPointsLabelText; // @synthesize totalPointsLabelText=_totalPointsLabelText;
@property(retain, nonatomic) UIColor *totalPointsLabelColor; // @synthesize totalPointsLabelColor=_totalPointsLabelColor;
@property(retain, nonatomic) UIColor *separatorViewColor; // @synthesize separatorViewColor=_separatorViewColor;
- (void).cxx_destruct;
- (void)layoutForWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_ringPercentageLabelForPercentage:(double)arg1 withMetricColors:(id)arg2;
- (id)_ringViewOfType:(long long)arg1 withMetricColors:(id)arg2 percentage:(double)arg3;
- (id)init;

@end

