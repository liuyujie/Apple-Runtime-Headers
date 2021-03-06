//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextFieldDelegate.h"

@class NSString, UIFont;

@protocol PINEntryView <UITextFieldDelegate>
- (void)setShowsOptionsButton:(_Bool)arg1;
- (void)setBlocked:(_Bool)arg1;
- (void)hideFailedAttempts;
- (void)showFailedAttempts:(long)arg1;
- (void)setDelegate:(id <PSPINEntryViewDelegate>)arg1;
- (_Bool)becomeFirstResponder;
- (void)hidePasscodeField:(_Bool)arg1;
- (void)appendString:(NSString *)arg1;
- (void)deleteLastCharacter;
- (void)setStringValue:(NSString *)arg1;
- (NSString *)stringValue;
- (float)getCurrentTitleFontSize;
- (void)setTitle:(NSString *)arg1 font:(UIFont *)arg2;
- (void)hideError;
- (void)setPINPolicyString:(NSString *)arg1 visible:(_Bool)arg2;
- (void)showError:(NSString *)arg1 animate:(_Bool)arg2;
- (void)setTextFieldKeyboardAppearance:(int)arg1;
- (void)setTextFieldKeyboardType:(int)arg1;
@end

