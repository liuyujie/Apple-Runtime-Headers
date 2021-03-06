//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UITextInputTraits, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface UIRecentInputTableCell : UITableViewCell
{
    UILabel *_floatingLabel;
    long long _blurEffectStyle;
    UITextInputTraits *_textInputTraits;
}

+ (id)backgroundColorForBlurEffectStyle:(long long)arg1;
+ (id)focusedTextColorForBlurEffectStyle:(long long)arg1;
+ (id)unfocusedTextColorForBlurEffectStyle:(long long)arg1;
@property(retain, nonatomic) UITextInputTraits *textInputTraits; // @synthesize textInputTraits=_textInputTraits;
@property(nonatomic) long long blurEffectStyle; // @synthesize blurEffectStyle=_blurEffectStyle;
@property(retain, nonatomic) UILabel *floatingLabel; // @synthesize floatingLabel=_floatingLabel;
- (void).cxx_destruct;
- (_Bool)_tvIsDarkMode;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateAppearance;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)setInputText:(id)arg1 withBlurStyle:(long long)arg2;
@property(readonly, nonatomic) _UIFloatingContentView *tvFloatingView;
- (void)layoutSubviews;

@end

