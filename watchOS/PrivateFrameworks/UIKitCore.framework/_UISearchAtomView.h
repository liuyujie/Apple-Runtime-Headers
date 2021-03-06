//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import "_UIAtomTextViewAtomLayout.h"

@class NSArray, NSString, UIImageView, UILabel, _UISearchAtomBackgroundView;

__attribute__((visibility("hidden")))
@interface _UISearchAtomView : UIView <_UIAtomTextViewAtomLayout>
{
    CDStruct_513ff01d _flags;
    UILabel *_textLabel;
    UIImageView *_leadingImage;
    _UISearchAtomBackgroundView *_backgroundView;
    NSArray *_defaultConstraints;
    NSArray *_withImageConstraints;
    NSArray *_withoutImageConstraints;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(copy, nonatomic) NSArray *withoutImageConstraints; // @synthesize withoutImageConstraints=_withoutImageConstraints;
@property(copy, nonatomic) NSArray *withImageConstraints; // @synthesize withImageConstraints=_withImageConstraints;
@property(copy, nonatomic) NSArray *defaultConstraints; // @synthesize defaultConstraints=_defaultConstraints;
@property(retain, nonatomic) _UISearchAtomBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain) UIImageView *leadingImage; // @synthesize leadingImage=_leadingImage;
@property(retain) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect selectionBounds;
- (void)setSelectionStyle:(int)arg1 animated:(_Bool)arg2;
@property(nonatomic) int selectionStyle;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (id)viewForLastBaselineLayout;
- (void)_updateTextColor;
- (void)_updateImageColor;
- (void)updateConstraints;
- (float)_bottomMargin;
- (float)_topToBaselineDelta;
- (id)_font;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) int baseWritingDirection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

