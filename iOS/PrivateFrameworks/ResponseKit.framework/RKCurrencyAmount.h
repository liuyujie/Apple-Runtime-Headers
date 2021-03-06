//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface RKCurrencyAmount : NSObject <NSSecureCoding>
{
    NSString *_string;
    NSString *_currency;
    double _value;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) double value; // @synthesize value=_value;
@property(readonly) NSString *currency; // @synthesize currency=_currency;
@property(readonly) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 currency:(id)arg2 value:(double)arg3;

@end

