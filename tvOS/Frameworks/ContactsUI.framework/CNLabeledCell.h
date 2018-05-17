//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContactsUI/CNContactCell.h>

@class NSDictionary, NSString, UIImageView, UILabel, UIView, UIView<ABText>;

__attribute__((visibility("hidden")))
@interface CNLabeledCell : CNContactCell
{
    NSDictionary *_labelTextAttributes;
    NSDictionary *_valueTextAttributes;
    UIImageView *_chevron;
}

+ (_Bool)wantsHorizontalLayout;
+ (_Bool)wantsStandardConstraints;
+ (_Bool)wantsChevron;
@property(readonly, nonatomic) UIImageView *chevron; // @synthesize chevron=_chevron;
- (void).cxx_destruct;
- (void)tintColorDidChange;
@property(copy, nonatomic) NSDictionary *valueTextAttributes;
@property(copy, nonatomic) NSDictionary *labelTextAttributes;
@property(readonly, nonatomic) NSString *valueString;
@property(readonly, nonatomic) NSString *labelString;
@property(readonly, nonatomic) UILabel *standardValueView;
@property(readonly, nonatomic) UILabel *standardLabelView;
@property(readonly, nonatomic) UIView *rightMostView;
@property(readonly, nonatomic) UIView<ABText> *valueView;
@property(readonly, nonatomic) UIView<ABText> *labelView;
- (id)variableConstraintsForHorizontalLayout;
- (id)constantConstraintsForHorizontalLayout;
- (id)variableConstraintsForVerticalLayout;
- (id)constantConstraintsForVerticalLayout;
- (id)variableConstraintsForStandardLayout;
- (id)constantConstraintsForStandardLayout;
- (id)variableConstraints;
- (id)constantConstraints;
@property(readonly, nonatomic) double bottomBaselineConstant;
@property(readonly, nonatomic) double topBaselineConstant;
@property(readonly, nonatomic) double chevronWidth;
- (double)minCellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
