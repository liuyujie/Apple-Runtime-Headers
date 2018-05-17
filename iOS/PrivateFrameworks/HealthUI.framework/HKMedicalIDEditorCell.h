//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextFieldDelegate.h"

@class HKCaretOptionalTextField, NSString, UILabel, UIStackView, UIView;

@interface HKMedicalIDEditorCell : UITableViewCell <UITextFieldDelegate>
{
    double _minimumLabelWidth;
    id <HKMedicalIDEditorCellEditDelegate> _editDelegate;
    UIStackView *_stackView;
    UILabel *_labelLabel;
    HKCaretOptionalTextField *_inputTextField;
    UIView *_verticalSeparatorView;
}

+ (_Bool)showsLabelAndValue;
@property(retain, nonatomic) UIView *verticalSeparatorView; // @synthesize verticalSeparatorView=_verticalSeparatorView;
@property(retain, nonatomic) HKCaretOptionalTextField *inputTextField; // @synthesize inputTextField=_inputTextField;
@property(retain, nonatomic) UILabel *labelLabel; // @synthesize labelLabel=_labelLabel;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak id <HKMedicalIDEditorCellEditDelegate> editDelegate; // @synthesize editDelegate=_editDelegate;
@property(nonatomic) double minimumLabelWidth; // @synthesize minimumLabelWidth=_minimumLabelWidth;
- (void).cxx_destruct;
- (void)_localeDidChange:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)commitEditing;
- (void)beginEditing;
- (void)updateValueLabel;
- (void)valueDidChange;
- (id)formattedValue;
@property(retain, nonatomic) NSString *label;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)setupStackView;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
