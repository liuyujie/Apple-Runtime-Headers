//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HFItem, NSString, UITextField;

@protocol HUItemTableTextEditingController <NSObject>
- (void)textFieldDidEndEditing:(UITextField *)arg1 item:(HFItem *)arg2;
- (void)textFieldDidBeginEditing:(UITextField *)arg1 item:(HFItem *)arg2;
- (void)textDidChange:(NSString *)arg1 forTextField:(UITextField *)arg2 item:(HFItem *)arg3;
- (NSString *)currentTextForTextField:(UITextField *)arg1 item:(HFItem *)arg2;
- (NSString *)placeholderTextForTextField:(UITextField *)arg1 item:(HFItem *)arg2;
- (NSString *)defaultTextForTextField:(UITextField *)arg1 item:(HFItem *)arg2;
- (UITextField *)textFieldForVisibleItem:(HFItem *)arg1;
- (_Bool)shouldManageTextFieldForItem:(HFItem *)arg1;
@end

