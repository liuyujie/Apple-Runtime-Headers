//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@interface SiriUITextField : UITextField
{
}

+ (id)imageWithImage:(id)arg1 tintColor:(id)arg2;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (_Bool)_shouldRepeatInsertText:(id)arg1;
- (void)_configureClearButton;
- (id)textInputContextIdentifier;
- (id)initWithFrame:(struct CGRect)arg1;

@end
