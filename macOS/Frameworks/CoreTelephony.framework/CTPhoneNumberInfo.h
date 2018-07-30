//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface CTPhoneNumberInfo : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isPresent;
    BOOL _isEditable;
    BOOL _isRead;
    NSString *_label;
    NSString *_number;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL isRead; // @synthesize isRead=_isRead;
@property(nonatomic) BOOL isEditable; // @synthesize isEditable=_isEditable;
@property(nonatomic) BOOL isPresent; // @synthesize isPresent=_isPresent;
@property(retain, nonatomic) NSString *number; // @synthesize number=_number;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
