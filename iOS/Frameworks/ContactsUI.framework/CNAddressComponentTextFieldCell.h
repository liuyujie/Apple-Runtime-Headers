//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSDictionary, UIImageView, UITextField;

__attribute__((visibility("hidden")))
@interface CNAddressComponentTextFieldCell : UITableViewCell
{
    UITextField *_textFieldForChevron;
    NSArray *_componentConstraints;
    UITextField *_textField;
    UIImageView *_chevron;
}

+ (id)cellIdentifier;
@property(retain, nonatomic) UIImageView *chevron; // @synthesize chevron=_chevron;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) NSArray *componentConstraints; // @synthesize componentConstraints=_componentConstraints;
@property(nonatomic) __weak UITextField *textFieldForChevron; // @synthesize textFieldForChevron=_textFieldForChevron;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *textAttributes;
@property(readonly, nonatomic) NSArray *textFields;
- (id)currentConstraintsForMetrics:(id)arg1;
- (void)updateConstraints;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)addTextField;
- (void)prepareForReuse;
- (void)setupTextFields;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
