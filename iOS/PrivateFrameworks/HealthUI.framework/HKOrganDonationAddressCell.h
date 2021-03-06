//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthUI/HKSimpleDataEntryCell.h>

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UILabel, UITextField, UIView;

@interface HKOrganDonationAddressCell : HKSimpleDataEntryCell <UITextFieldDelegate>
{
    UILabel *_titleLabel;
    UIView *_addressContainerView;
    UIView *_verticalSeparator;
    UIView *_horizontalSeparator;
    UIView *_stateZipSeparator;
    UIView *_addressSeparator;
    UIView *_citySeparator;
    UIView *_stateSeparator;
    UIButton *_stateShadowButton;
    _Bool _editDisabled;
    id <HKSimpleDataEntryCellDelegate> _delegate;
    UITextField *_streetOneTextField;
    UITextField *_streetTwoTextField;
    UITextField *_stateTextField;
    UITextField *_cityTextField;
    UITextField *_zipCodeTextField;
}

@property(retain, nonatomic) UITextField *zipCodeTextField; // @synthesize zipCodeTextField=_zipCodeTextField;
@property(retain, nonatomic) UITextField *cityTextField; // @synthesize cityTextField=_cityTextField;
@property(retain, nonatomic) UITextField *stateTextField; // @synthesize stateTextField=_stateTextField;
@property(retain, nonatomic) UITextField *streetTwoTextField; // @synthesize streetTwoTextField=_streetTwoTextField;
@property(retain, nonatomic) UITextField *streetOneTextField; // @synthesize streetOneTextField=_streetOneTextField;
@property(nonatomic) __weak id <HKSimpleDataEntryCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textFieldDidChangeValue:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)setEditDisabled:(_Bool)arg1;
- (_Bool)editDisabled;
- (void)beginEditing;
- (void)_stateShadowButtonTapped:(id)arg1;
- (void)_setupLayoutConstraints;
- (void)_setupFonts;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

