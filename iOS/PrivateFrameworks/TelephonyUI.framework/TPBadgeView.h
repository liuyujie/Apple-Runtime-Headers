//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TelephonyUI/TPView.h>

@class NSLayoutConstraint, NSString, UILabel;

@interface TPBadgeView : TPView
{
    unsigned long long _theme;
    NSString *_title;
    UILabel *_titleLabel;
    NSLayoutConstraint *_titleLabelBottomAnchorLayoutConstraint;
    NSLayoutConstraint *_titleLabelLeadingAnchorLayoutConstraint;
    NSLayoutConstraint *_titleLabelTopAnchorLayoutConstraint;
    NSLayoutConstraint *_titleLabelTrailingAnchorLayoutConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *titleLabelTrailingAnchorLayoutConstraint; // @synthesize titleLabelTrailingAnchorLayoutConstraint=_titleLabelTrailingAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTopAnchorLayoutConstraint; // @synthesize titleLabelTopAnchorLayoutConstraint=_titleLabelTopAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelLeadingAnchorLayoutConstraint; // @synthesize titleLabelLeadingAnchorLayoutConstraint=_titleLabelLeadingAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelBottomAnchorLayoutConstraint; // @synthesize titleLabelBottomAnchorLayoutConstraint=_titleLabelBottomAnchorLayoutConstraint;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)updateTheme;
- (void)updateFonts;
- (void)loadConstraints;
- (void)commonInit;
- (id)initWithTitle:(id)arg1 theme:(unsigned long long)arg2;
- (id)initWithTitle:(id)arg1;

@end

