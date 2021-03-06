//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UILabel;

__attribute__((visibility("hidden")))
@interface CNUIUserActionDoubleFieldCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSLayoutConstraint *_titleLabelYConstraint;
    NSLayoutConstraint *_subtitleToTitleLabelYConstraint;
    NSLayoutConstraint *_subtitleYToBottomConstraint;
}

+ (id)subtitleTextColor;
@property(retain, nonatomic) NSLayoutConstraint *subtitleYToBottomConstraint; // @synthesize subtitleYToBottomConstraint=_subtitleYToBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleToTitleLabelYConstraint; // @synthesize subtitleToTitleLabelYConstraint=_subtitleToTitleLabelYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelYConstraint; // @synthesize titleLabelYConstraint=_titleLabelYConstraint;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateFonts;
- (void)viewWillMoveToSuperview:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

