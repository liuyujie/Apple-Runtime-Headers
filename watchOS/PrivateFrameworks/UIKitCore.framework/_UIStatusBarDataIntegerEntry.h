//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarDataEntry.h>

@interface _UIStatusBarDataIntegerEntry : _UIStatusBarDataEntry
{
    _Bool _displayRawValue;
    int _rawValue;
    int _displayValue;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool displayRawValue; // @synthesize displayRawValue=_displayRawValue;
@property(nonatomic) int displayValue; // @synthesize displayValue=_displayValue;
@property(nonatomic) int rawValue; // @synthesize rawValue=_rawValue;
- (id)_ui_descriptionBuilder;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;

@end
