//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AMSDialogTextField : NSObject
{
    NSString *_placeholder;
    BOOL _secure;
    NSString *_text;
    long long _keyboardType;
    id _textField;
    long long _tag;
    NSString *_title;
}

+ (id)textFieldWithTitle:(id)arg1 uiTextField:(id)arg2;
+ (id)textFieldWithTitle:(id)arg1 nsTextField:(id)arg2;
+ (id)textFieldWithTitle:(id)arg1 secure:(BOOL)arg2;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) NSString *text; // @synthesize text=_text;
@property long long tag; // @synthesize tag=_tag;
@property BOOL secure; // @synthesize secure=_secure;
@property long long keyboardType; // @synthesize keyboardType=_keyboardType;
- (void).cxx_destruct;
- (void)_setupTextField:(id)arg1;
- (id)generateUITextField;
- (id)generateNSTextField;

@end

